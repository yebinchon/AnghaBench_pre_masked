
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_dl {int dummy; } ;
struct sockaddr {int sa_family; int * sa_data; } ;
typedef int ifnet_t ;
typedef int errno_t ;




 int* FUNC_0 (struct sockaddr_dl const*) ;
 int VAR_0 ;
 int VAR_1 ;

errno_t
FUNC_1(ifnet_t VAR_2, const struct sockaddr *VAR_3)
{
#pragma unused(ifp)
 errno_t VAR_4 = VAR_1;
 const u_char *VAR_5;





 switch(VAR_3->sa_family) {
 case 128:
  VAR_5 = (const u_char*)&VAR_3->sa_data[0];
  if ((VAR_5[0] & 0x01) != 0x01)
   VAR_4 = VAR_0;
  else
   VAR_4 = 0;
  break;

 case 129:
  VAR_5 = FUNC_0((const struct sockaddr_dl*)
      (uintptr_t)(size_t)VAR_3);
  if ((VAR_5[0] & 0x01) != 0x01)
   VAR_4 = VAR_0;
  else
   VAR_4 = 0;
  break;
 }

 return (VAR_4);
}
