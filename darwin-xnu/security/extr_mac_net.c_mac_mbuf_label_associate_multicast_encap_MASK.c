
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct label {int dummy; } ;
struct ifnet {int if_label; } ;


 int FUNC_0 (int ,struct mbuf*,struct label*,struct ifnet*,int ,struct mbuf*,struct label*) ;
 struct label* FUNC_1 (struct mbuf*) ;
 int VAR_0 ;

void
FUNC_2(struct mbuf *VAR_1,
    struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 struct label *VAR_4, *VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = FUNC_1(VAR_3);



 FUNC_0(VAR_0, VAR_1, VAR_4,
     VAR_2, VAR_2->if_label, VAR_3, VAR_5);
}
