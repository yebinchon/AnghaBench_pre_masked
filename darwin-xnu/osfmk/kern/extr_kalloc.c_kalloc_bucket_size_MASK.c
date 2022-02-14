
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef scalar_t__ vm_size_t ;
typedef int vm_map_t ;
struct TYPE_4__ {scalar_t__ elem_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;

vm_size_t
FUNC_4(
  vm_size_t VAR_6)
{
 zone_t VAR_7;
 vm_map_t VAR_8;

 if (VAR_6 < VAR_0) {
  VAR_7 = FUNC_1(VAR_6);
  return VAR_7->elem_size;
 }

 if (VAR_6 < VAR_4) {
  VAR_7 = FUNC_2(VAR_6, VAR_1);
  return VAR_7->elem_size;
 }

 if (VAR_6 >= VAR_2)
  VAR_8 = VAR_5;
 else
  VAR_8 = VAR_3;

 return FUNC_3(VAR_6, FUNC_0(VAR_8));
}
