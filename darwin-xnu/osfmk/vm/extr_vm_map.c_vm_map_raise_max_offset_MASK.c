
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef int kern_return_t ;
struct TYPE_6__ {scalar_t__ max_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

kern_return_t
FUNC_3(
 vm_map_t VAR_4,
 vm_map_offset_t VAR_5)
{
 kern_return_t VAR_6;

 FUNC_1(VAR_4);
 VAR_6 = VAR_0;

 if (VAR_5 >= VAR_4->max_offset) {
  if (!FUNC_0(VAR_4)) {
   if (VAR_5 <= (vm_map_offset_t)VAR_3) {
    VAR_4->max_offset = VAR_5;
    VAR_6 = VAR_1;
   }
  } else {
   if (VAR_5 <= (vm_map_offset_t)VAR_2) {
    VAR_4->max_offset = VAR_5;
    VAR_6 = VAR_1;
   }
  }
 }

 FUNC_2(VAR_4);
 return VAR_6;
}
