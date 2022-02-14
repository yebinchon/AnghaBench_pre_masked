
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;
struct mptses {TYPE_1__ mpte_src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct socket*,struct sockaddr**,int) ;
 int FUNC_1 (struct socket*,struct sockaddr**,int) ;
 struct mptses* FUNC_2 (struct socket*) ;

int
FUNC_3(struct socket *VAR_3, struct sockaddr **VAR_4)
{
 struct mptses *VAR_5 = FUNC_2(VAR_3);

 if (VAR_5->mpte_src.sa_family == VAR_0 || VAR_5->mpte_src.sa_family == 0)
  return FUNC_0(VAR_3, VAR_4, 0);
 else if (VAR_5->mpte_src.sa_family == VAR_1)
  return FUNC_1(VAR_3, VAR_4, 0);
 else
  return (VAR_2);
}
