
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_map_copy_t ;
struct TYPE_12__ {void* vme_prev; } ;
struct TYPE_11__ {void* vme_next; } ;
struct TYPE_10__ {scalar_t__ type; int cpy_object; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;

vm_map_copy_t
FUNC_4(
 vm_map_copy_t VAR_5)
{
 vm_map_copy_t VAR_6;

 if (VAR_5 == VAR_1)
  return VAR_1;






 VAR_6 = (vm_map_copy_t) FUNC_3(VAR_4);
 *VAR_6 = *VAR_5;

 if (VAR_5->type == VAR_0) {




  FUNC_0(VAR_5)->vme_prev
   = FUNC_2(VAR_6);
  FUNC_1(VAR_5)->vme_next
   = FUNC_2(VAR_6);
 }





 VAR_5->type = VAR_2;
 VAR_5->cpy_object = VAR_3;




 return VAR_6;
}
