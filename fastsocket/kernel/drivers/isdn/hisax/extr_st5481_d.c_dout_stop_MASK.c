
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_d_out {int fsm; } ;
struct st5481_adapter {struct st5481_d_out d_out; } ;
struct FsmInst {struct st5481_adapter* userdata; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct st5481_adapter*,int ,int ,int ,struct st5481_adapter*) ;

__attribute__((used)) static void FUNC_2(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct st5481_adapter *VAR_6 = VAR_3->userdata;
 struct st5481_d_out *VAR_7 = &VAR_6->d_out;

 FUNC_0(&VAR_7->fsm, VAR_1);
 FUNC_1(VAR_6, VAR_0, 0, VAR_2, VAR_6);
}
