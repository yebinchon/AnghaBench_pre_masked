
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct label {int dummy; } ;
struct inpcb {int inp_label; } ;


 int FUNC_0 (int ,struct inpcb*,int ,struct mbuf*,struct label*) ;
 struct label* FUNC_1 (struct mbuf*) ;
 int VAR_0 ;

void
FUNC_2(struct inpcb *VAR_1, struct mbuf *VAR_2)
{
 struct label *VAR_3;


 VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_0, VAR_1, VAR_1->inp_label, VAR_2, VAR_3);
}
