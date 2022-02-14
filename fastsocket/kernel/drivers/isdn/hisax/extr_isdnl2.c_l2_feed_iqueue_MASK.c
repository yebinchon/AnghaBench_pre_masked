
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_6__ {int i_queue; int flag; } ;
struct TYPE_5__ {TYPE_1__* bcs; } ;
struct PStack {TYPE_3__ l2; TYPE_2__ l1; } ;
struct FsmInst {struct PStack* userdata; } ;
struct TYPE_4__ {int tx_cnt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_1, int VAR_2, void *VAR_3)
{
 struct PStack *VAR_4 = VAR_1->userdata;
 struct sk_buff *VAR_5 = VAR_3;

 if (FUNC_2(VAR_0, &VAR_4->l2.flag))
  VAR_4->l1.bcs->tx_cnt += VAR_5->len + FUNC_0(&VAR_4->l2, 0);
 FUNC_1(&VAR_4->l2.i_queue, VAR_5);
}
