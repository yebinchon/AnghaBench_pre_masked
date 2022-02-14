
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct label {int dummy; } ;
struct ifnet {int if_label; } ;


 int FUNC_0 (int ,struct ifnet*,int ,struct mbuf*,struct label*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 struct label* FUNC_3 (struct mbuf*) ;

int
FUNC_4(struct ifnet *VAR_1, struct mbuf *VAR_2, int VAR_3,
    int VAR_4)
{
 struct label *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2);

 FUNC_2(VAR_1);
 FUNC_0(VAR_0, VAR_1, VAR_1->if_label, VAR_2, VAR_5,
     VAR_3, VAR_4);
 FUNC_1(VAR_1);

 return (VAR_6);
}
