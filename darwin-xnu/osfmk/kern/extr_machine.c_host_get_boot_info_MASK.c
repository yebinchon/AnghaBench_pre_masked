
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* kernel_boot_info_t ;
typedef int kern_return_t ;
typedef int * host_priv_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const*,int ) ;
 int VAR_4 ;
 int FUNC_2 (char const*,char const*,int ) ;

kern_return_t
FUNC_3(
        host_priv_t VAR_5,
        kernel_boot_info_t VAR_6)
{
 const char *VAR_7 = "";
 if (VAR_5 == VAR_0)
  return (VAR_2);

 FUNC_0(VAR_5 == &VAR_4);





 VAR_7 = FUNC_1(VAR_6, VAR_1);
 if (VAR_7 != VAR_6)
  (void) FUNC_2(VAR_6, VAR_7, VAR_1);

 return (VAR_3);
}
