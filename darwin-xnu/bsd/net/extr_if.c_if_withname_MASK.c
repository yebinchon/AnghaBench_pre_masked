
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dl {int sdl_nlen; int sdl_data; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct ifnet {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct ifnet* FUNC_1 (char*) ;

struct ifnet *
FUNC_2(struct sockaddr *VAR_2)
{
 char VAR_3[VAR_1+1];
 struct sockaddr_dl *VAR_4 = (struct sockaddr_dl *)(void *)VAR_2;

 if ((VAR_2->sa_family != VAR_0) || (VAR_4->sdl_nlen == 0) ||
     (VAR_4->sdl_nlen > VAR_1))
  return (((void*)0));
 FUNC_0(VAR_4->sdl_data, VAR_3, VAR_4->sdl_nlen);
 VAR_3[VAR_4->sdl_nlen] = '\0';
 return (FUNC_1(VAR_3));
}
