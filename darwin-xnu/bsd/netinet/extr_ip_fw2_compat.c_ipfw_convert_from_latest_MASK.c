
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ip_old_fw {int dummy; } ;
struct ip_fw_compat_64 {int dummy; } ;
struct ip_fw_compat_32 {int dummy; } ;
struct ip_fw_64 {int dummy; } ;
struct ip_fw_32 {int dummy; } ;
struct ip_fw {int dummy; } ;





 int FUNC_0 (struct ip_fw_32*,struct ip_fw_compat_32*) ;
 int FUNC_1 (struct ip_fw_64*,struct ip_fw_compat_64*) ;
 int FUNC_2 (struct ip_fw*,struct ip_old_fw*,int) ;

void
FUNC_3(struct ip_fw *VAR_0, void *VAR_1, u_int32_t VAR_2, int VAR_3)
{
 switch (VAR_2) {
  case 129:
  {
   struct ip_old_fw *VAR_4 = VAR_1;

   FUNC_2(VAR_0, VAR_4, VAR_3);
   break;
  }
  case 128:
  {
   if ( VAR_3 )
    FUNC_1((struct ip_fw_64*)VAR_0, (struct ip_fw_compat_64 *)VAR_1);
   else
    FUNC_0((struct ip_fw_32*)VAR_0, (struct ip_fw_compat_32 *)VAR_1);

   break;
  }
  case 130:

   break;

  default:

   break;
 }
}
