
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int qboolean ;
typedef int netadr_t ;


 int FUNC_0 (struct sockaddr_in*,int *) ;
 int FUNC_1 (char const*,struct sockaddr*) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_2 (const char *VAR_2, netadr_t *VAR_3)
{
 struct sockaddr_in VAR_4;

 if (!FUNC_1 (VAR_2, (struct sockaddr *)&VAR_4))
  return VAR_0;

 FUNC_0 (&VAR_4, VAR_3);

 return VAR_1;
}
