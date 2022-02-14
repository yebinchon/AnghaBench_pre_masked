
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_zone_name_t ;
typedef int mach_zone_info_t ;
typedef int kern_return_t ;
typedef scalar_t__ host_priv_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 int FUNC_2 () ;

kern_return_t
FUNC_3(
 host_priv_t VAR_5,
 mach_zone_name_t *VAR_6,
 mach_zone_info_t *VAR_7)
{
 if (VAR_5 == VAR_0)
  return VAR_3;





 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  return VAR_2;
 }

 if (FUNC_1(FUNC_2(), VAR_6, VAR_7)) {
  return VAR_4;
 }
 return VAR_1;
}
