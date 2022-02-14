
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dev; int vlanlock; int vlangrp; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,unsigned short) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qeth_card*,unsigned short) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct qeth_card*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,unsigned short,int *) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_2, unsigned short VAR_3)
{
 struct qeth_card *VAR_4 = VAR_2->ml_priv;
 unsigned long VAR_5;

 FUNC_1(VAR_1, 4, "kid:%d", VAR_3);
 if (FUNC_4(VAR_4, VAR_0)) {
  FUNC_0(VAR_1, 3, "kidREC");
  return;
 }
 FUNC_5(&VAR_4->vlanlock, VAR_5);

 FUNC_2(VAR_4, VAR_3);
 FUNC_7(VAR_4->vlangrp, VAR_3, ((void*)0));
 FUNC_6(&VAR_4->vlanlock, VAR_5);
 FUNC_3(VAR_4->dev);
}
