
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (struct socket*,struct sockaddr const*) ;
 struct socket* FUNC_1 (struct socket*,int) ;

struct socket *
FUNC_2(struct socket *VAR_0, int VAR_1, const struct sockaddr *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (VAR_3) {
  return (((void*)0));
 }

 return (FUNC_1(VAR_0, VAR_1));
}
