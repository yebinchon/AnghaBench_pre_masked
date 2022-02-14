
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ccwgdriver; } ;
struct TYPE_3__ {scalar_t__ layer2; } ;
struct qeth_card {TYPE_2__ discipline; TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct qeth_card *VAR_2)
{
 if (VAR_2->options.layer2)
  FUNC_0(VAR_0);
 else
  FUNC_0(VAR_1);
 VAR_2->discipline.ccwgdriver = ((void*)0);
}
