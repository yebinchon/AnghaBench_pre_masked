
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {scalar_t__ state; int napi; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3)
{
 struct qeth_card *VAR_4 = VAR_3->ml_priv;

 FUNC_0(VAR_2, 4, "qethstop");
 FUNC_2(VAR_3);
 if (VAR_4->state == VAR_1) {
  VAR_4->state = VAR_0;
  FUNC_1(&VAR_4->napi);
 }
 return 0;
}
