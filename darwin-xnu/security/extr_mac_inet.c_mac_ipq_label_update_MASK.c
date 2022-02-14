
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct label {int dummy; } ;
struct ipq {int ipq_label; } ;


 int FUNC_0 (int ,struct mbuf*,struct label*,struct ipq*,int ) ;
 int VAR_0 ;
 struct label* FUNC_1 (struct mbuf*) ;

void
FUNC_2(struct mbuf *VAR_1, struct ipq *VAR_2)
{
 struct label *VAR_3;

 VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2, VAR_2->ipq_label);
}
