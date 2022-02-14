
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ so_pcb; } ;
struct inpcb {struct ifnet* inp_last_outifp; } ;
struct ifnet {int if_sndbyte_total; } ;
typedef int int32_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;

inline void
FUNC_2(struct socket *VAR_0, int32_t VAR_1)
{
 struct inpcb *VAR_2 = (struct inpcb *)VAR_0->so_pcb;
 struct ifnet *VAR_3 = VAR_2->inp_last_outifp;

 if (VAR_3 != ((void*)0)) {
  FUNC_1(VAR_3->if_sndbyte_total >= VAR_1);
  FUNC_0(-VAR_1, &VAR_3->if_sndbyte_total);
 }
}
