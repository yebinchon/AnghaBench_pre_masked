
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int vm_object_offset_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ pager_ready; int terminating; scalar_t__ alive; scalar_t__ internal; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_1(
 vm_object_t VAR_3,
 vm_object_offset_t VAR_4)
{
 if (VAR_3->internal &&
    VAR_3->alive &&
    !VAR_3->terminating &&
    VAR_3->pager_ready) {

  if (FUNC_0(VAR_3, VAR_4)
      == VAR_2) {
   return VAR_1;
  }
 }
 return VAR_0;
}
