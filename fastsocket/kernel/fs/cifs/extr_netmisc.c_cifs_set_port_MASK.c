
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int sa_family; } ;




 void* FUNC_0 (unsigned short const) ;

int
FUNC_1(struct sockaddr *VAR_0, const unsigned short int VAR_1)
{
 switch (VAR_0->sa_family) {
 case 129:
  ((struct sockaddr_in *)VAR_0)->sin_port = FUNC_0(VAR_1);
  break;
 case 128:
  ((struct sockaddr_in6 *)VAR_0)->sin6_port = FUNC_0(VAR_1);
  break;
 default:
  return 0;
 }
 return 1;
}
