
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct inpcb {int inp_vflag; int inp_faddr; int in6p_faddr; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_2 ;

void
FUNC_4(struct inpcb *VAR_3, u_char *VAR_4, size_t VAR_5)
{
 u_char VAR_6[VAR_0];




 FUNC_0(VAR_5 == VAR_0);

 FUNC_2(&VAR_6[0], VAR_0);
 FUNC_2(&VAR_4[0], VAR_0);






  FUNC_3(VAR_6, &VAR_3->inp_faddr, sizeof(struct in_addr));

 FUNC_1(VAR_6, ((void*)0), 1, VAR_4, &VAR_2);
}
