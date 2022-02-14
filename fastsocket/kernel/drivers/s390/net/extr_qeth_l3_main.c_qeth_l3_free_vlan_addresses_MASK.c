
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int vlangrp; } ;


 int FUNC_0 (struct qeth_card*,unsigned short) ;
 int FUNC_1 (struct qeth_card*,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct qeth_card *VAR_0,
   unsigned short VAR_1)
{
 if (!VAR_0->vlangrp)
  return;
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1);
}
