
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,void*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;

kern_return_t
FUNC_5(
 vm_map_t VAR_2,
 vm_map_offset_t VAR_3,
 vm_map_offset_t VAR_4,
  boolean_t VAR_5)
{
 kern_return_t VAR_6;

 FUNC_3(VAR_2);
 FUNC_0(VAR_2, VAR_3, VAR_4);







 if ((VAR_2 == VAR_1) && (VAR_3 == VAR_4))
  FUNC_1("Nothing being freed to the zone_map. start = end = %p\n", (void *)VAR_3);
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_0);
 FUNC_4(VAR_2);

 return(VAR_6);
}
