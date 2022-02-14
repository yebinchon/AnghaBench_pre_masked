
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct BCState {TYPE_2__* st; int rqueue; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_4__ {int (* l1l2 ) (TYPE_2__*,int,struct sk_buff*) ;TYPE_3__ l1m; int timer; } ;
struct TYPE_5__ {TYPE_1__ l1; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_4(struct BCState *VAR_4)
{
 struct sk_buff *VAR_5;

 if (VAR_4->st->l1.l1m.state == VAR_3) {
  FUNC_0(&VAR_4->st->l1.timer, 4);
  FUNC_1(&VAR_4->st->l1.l1m, VAR_0, ((void*)0));
 }
 while ((VAR_5 = FUNC_2(&VAR_4->rqueue))) {
  VAR_4->st->l1.l1l2(VAR_4->st, VAR_2 | VAR_1, VAR_5);
 }
}
