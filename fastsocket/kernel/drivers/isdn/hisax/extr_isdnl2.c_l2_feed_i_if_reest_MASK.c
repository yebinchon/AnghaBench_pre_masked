
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
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct PStack *VAR_5 = VAR_2->userdata;
 struct sk_buff *VAR_6 = VAR_4;

 if (FUNC_3(VAR_1, &VAR_5->l2.flag))
  VAR_5->l1.bcs->tx_cnt += VAR_6->len + FUNC_1(&VAR_5->l2, 0);
 if (!FUNC_3(VAR_0, &VAR_5->l2.flag))
  FUNC_2(&VAR_5->l2.i_queue, VAR_6);
 else
  FUNC_0(VAR_6);
}
