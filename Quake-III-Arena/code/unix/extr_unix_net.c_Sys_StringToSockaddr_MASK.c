
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {scalar_t__* h_addr_list; } ;
typedef int qboolean ;


 int VAR_0 ;
 struct hostent* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct sockaddr*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_3 (const char *VAR_3, struct sockaddr *VAR_4)
{
 struct hostent *VAR_5;


 FUNC_2 (VAR_4, 0, sizeof(*VAR_4));
 ((struct sockaddr_in *)VAR_4)->sin_family = VAR_0;

 ((struct sockaddr_in *)VAR_4)->sin_port = 0;

 if ( VAR_3[0] >= '0' && VAR_3[0] <= '9')
 {
  *(int *)&((struct sockaddr_in *)VAR_4)->sin_addr = FUNC_1(VAR_3);
 }
 else
 {
  if (! (VAR_5 = FUNC_0(VAR_3)) )
   return VAR_1;
  *(int *)&((struct sockaddr_in *)VAR_4)->sin_addr = *(int *)VAR_5->h_addr_list[0];
 }

 return VAR_2;
}
