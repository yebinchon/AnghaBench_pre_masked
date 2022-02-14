
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int uint32_t ;
typedef TYPE_3__* memory_object_t ;
typedef int * memory_object_pager_ops_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_13__ {int * mo_pager_ops; } ;
struct TYPE_12__ {scalar_t__ is_sub_map; } ;
struct TYPE_11__ {TYPE_3__* pager; int alive; scalar_t__ terminating; int pager_ready; scalar_t__ internal; struct TYPE_11__* shadow; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,uintptr_t*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(
 vm_map_entry_t VAR_3,
 uintptr_t * VAR_4,
 uint32_t * VAR_5)
{
 vm_object_t VAR_6, VAR_7;
 memory_object_t VAR_8;
 memory_object_pager_ops_t VAR_9;
 kern_return_t VAR_10;
 int VAR_11;


 if (VAR_3->is_sub_map) {
  return(0);
 } else {




  VAR_6 = FUNC_0(VAR_3);
  if (VAR_6 == VAR_1) {
   VAR_7 = VAR_1;
   VAR_11 = 0;
  } else {
   FUNC_1(VAR_6);
   for (VAR_7 = VAR_6, VAR_11 = 0;
        VAR_7->shadow != VAR_1;
        VAR_7 = VAR_7->shadow, VAR_11++) {
    FUNC_1(VAR_7->shadow);
    FUNC_2(VAR_7);
   }
  }
 }

 if (VAR_7 == VAR_1) {
  return(0);
 } else if (VAR_7->internal) {
  FUNC_2(VAR_7);
  return(0);
 } else if (! VAR_7->pager_ready ||
     VAR_7->terminating ||
     ! VAR_7->alive) {
  FUNC_2(VAR_7);
  return(0);
 } else {
  VAR_8 = VAR_7->pager;
  VAR_9 = VAR_8->mo_pager_ops;
  if (VAR_9 == &VAR_2) {
   VAR_10 = FUNC_3(
    VAR_8,
    VAR_4, VAR_5);
   if (VAR_10 != VAR_0) {
    FUNC_2(VAR_7);
    return(0);
   }
  } else {
   FUNC_2(VAR_7);
   return(0);
  }
 }
 FUNC_2(VAR_7);
 return(1);
}
