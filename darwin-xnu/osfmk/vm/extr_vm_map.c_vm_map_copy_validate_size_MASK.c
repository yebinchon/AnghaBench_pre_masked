
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_t ;
typedef int vm_map_size_t ;
typedef TYPE_1__* vm_map_copy_t ;
typedef int boolean_t ;
struct TYPE_4__ {int type; int size; } ;


 int VAR_0 ;
 int VAR_1 ;


 TYPE_1__* VAR_2 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

boolean_t
FUNC_2(
 vm_map_t VAR_3,
 vm_map_copy_t VAR_4,
 vm_map_size_t *VAR_5)
{
 if (VAR_4 == VAR_2)
  return VAR_0;
 vm_map_size_t VAR_6 = VAR_4->size;
 vm_map_size_t VAR_7 = *VAR_5;
 switch (VAR_4->type) {
 case 128:
 case 129:
  if (VAR_7 == VAR_6)
   return VAR_1;
  break;
 case 130:





  if (VAR_6 >= VAR_7 &&
      VAR_6 <= FUNC_1(VAR_7, FUNC_0(VAR_3))) {
   *VAR_5 = VAR_6;
   return VAR_1;
  }
  break;
 default:
  break;
 }
 return VAR_0;
}
