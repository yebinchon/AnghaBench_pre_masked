
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct net_device {int mtu; struct qeth_card* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct qeth_card*,int ) ;
 int FUNC_2 (struct qeth_card*,int) ;
 int FUNC_3 (char*,char*,int) ;

int FUNC_4(struct net_device *VAR_3, int VAR_4)
{
 struct qeth_card *VAR_5;
 char VAR_6[15];

 VAR_5 = VAR_3->ml_priv;

 FUNC_0(VAR_2, 4, "chgmtu");
 FUNC_3(VAR_6, "%8x", VAR_4);
 FUNC_0(VAR_2, 4, VAR_6);

 if (VAR_4 < 64)
  return -VAR_0;
 if (VAR_4 > 65535)
  return -VAR_0;
 if ((!FUNC_1(VAR_5, VAR_1)) &&
     (!FUNC_2(VAR_5, VAR_4)))
  return -VAR_0;
 VAR_3->mtu = VAR_4;
 return 0;
}
