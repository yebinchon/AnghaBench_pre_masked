
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_map_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

kern_return_t
FUNC_4(
 vm_map_t VAR_4,
 vm_offset_t VAR_5,
 vm_size_t VAR_6)
{
 if ((VAR_4 == VAR_2) || (VAR_5 + VAR_6 < VAR_5))
  return(VAR_0);

 if (VAR_6 == (vm_offset_t) 0)
  return(VAR_1);

 return FUNC_1(VAR_4,
        FUNC_3(VAR_5,
            FUNC_0(VAR_4)),
        FUNC_2(VAR_5+VAR_6,
            FUNC_0(VAR_4)),
        VAR_3);
}
