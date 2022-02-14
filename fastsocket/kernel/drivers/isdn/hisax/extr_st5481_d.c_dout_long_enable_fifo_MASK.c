
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
 int FUNC_1 (struct st5481_adapter*,int ,int,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct st5481_adapter *VAR_5 = VAR_2->userdata;
 struct st5481_d_out *VAR_6 = &VAR_5->d_out;

 FUNC_1(VAR_5, VAR_0, 16, ((void*)0), ((void*)0));
 FUNC_0(&VAR_6->fsm, VAR_1);
}
