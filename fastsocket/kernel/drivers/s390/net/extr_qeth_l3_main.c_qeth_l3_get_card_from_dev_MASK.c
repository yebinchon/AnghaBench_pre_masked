
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ layer2; } ;
struct qeth_card {TYPE_1__ options; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct TYPE_4__ {struct qeth_card* ml_priv; } ;


 int FUNC_0 (int ,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 TYPE_2__* FUNC_2 (struct net_device*) ;

__attribute__((used)) static struct qeth_card *FUNC_3(struct net_device *VAR_3)
{
 struct qeth_card *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == VAR_0)
  VAR_4 = VAR_3->ml_priv;
 else if (VAR_5 == VAR_1)
  VAR_4 = FUNC_2(VAR_3)->ml_priv;
 if (VAR_4 && VAR_4->options.layer2)
  VAR_4 = ((void*)0);
 FUNC_0(VAR_2, 4, "%d", VAR_5);
 return VAR_4 ;
}
