
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct qeth_card*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3)
{
 struct qeth_card *VAR_4 = VAR_3->ml_priv;

 FUNC_0(VAR_2, 5, "qethope_");
 if (FUNC_2(VAR_4, VAR_1)) {
  FUNC_0(VAR_2, 3, "openREC");
  return -VAR_0;
 }
 return FUNC_1(VAR_3);
}
