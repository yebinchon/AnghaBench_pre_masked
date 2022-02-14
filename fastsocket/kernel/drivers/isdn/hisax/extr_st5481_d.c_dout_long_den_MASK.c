
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_d_out {int fsm; } ;
struct st5481_adapter {struct st5481_d_out d_out; } ;
struct FsmInst {struct st5481_adapter* userdata; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct st5481_adapter*,int) ;

__attribute__((used)) static void FUNC_2(struct FsmInst *VAR_1, int VAR_2, void *VAR_3)
{
 struct st5481_adapter *VAR_4 = VAR_1->userdata;
 struct st5481_d_out *VAR_5 = &VAR_4->d_out;

 FUNC_0(&VAR_5->fsm, VAR_0);
 FUNC_1(VAR_4, 0);
 FUNC_1(VAR_4, 1);
}
