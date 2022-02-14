
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {scalar_t__ ml_priv; } ;
struct lcs_card {int dummy; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (struct lcs_card*,struct sk_buff*,struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct lcs_card *VAR_3;
 int VAR_4;

 FUNC_0(5, VAR_0, "pktxmit");
 VAR_3 = (struct lcs_card *) VAR_2->ml_priv;
 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 return VAR_4;
}
