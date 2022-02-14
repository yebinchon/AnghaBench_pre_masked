
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ vm_map_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int*,int*) ;
 int FUNC_1 (int ,int ) ;

kern_return_t
FUNC_2(
 vm_map_t VAR_3,
 vm_offset_t VAR_4,
 int *VAR_5,
 int *VAR_6)
{
 if (VAR_2 == VAR_3)
  return VAR_0;

 return FUNC_0(
  VAR_3,
  FUNC_1(VAR_4, VAR_1),
  VAR_5, VAR_6);
}
