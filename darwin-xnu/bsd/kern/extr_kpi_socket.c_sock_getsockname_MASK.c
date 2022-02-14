
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;
typedef int * socket_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct sockaddr**,int ) ;

errno_t
FUNC_5(socket_t VAR_2, struct sockaddr *VAR_3, int VAR_4)
{
 int VAR_5;
 struct sockaddr *VAR_6 = ((void*)0);

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 < 0)
  return (VAR_0);

 FUNC_2(VAR_2, 1);
 VAR_5 = FUNC_4(VAR_2, &VAR_6, 0);
 FUNC_3(VAR_2, 1);
 if (VAR_5 == 0) {
  if (VAR_4 > VAR_6->sa_len)
   VAR_4 = VAR_6->sa_len;
  FUNC_1(VAR_3, VAR_6, VAR_4);
  FUNC_0(VAR_6, VAR_1);
 }
 return (VAR_5);
}
