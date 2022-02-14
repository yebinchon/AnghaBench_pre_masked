
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_d_out {int fsm; scalar_t__ tx_skb; } ;
struct st5481_adapter {struct st5481_d_out d_out; } ;
struct FsmInst {struct st5481_adapter* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct st5481_adapter *VAR_5 = VAR_2->userdata;
 struct st5481_d_out *VAR_6 = &VAR_5->d_out;

 FUNC_0(&VAR_6->fsm, VAR_1);

 if (VAR_6->tx_skb)
  FUNC_1(&VAR_6->fsm, VAR_0, ((void*)0));
}
