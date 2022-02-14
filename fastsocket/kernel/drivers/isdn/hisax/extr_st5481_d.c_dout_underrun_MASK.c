
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_d_out {int fsm; int busy; } ;
struct st5481_adapter {struct st5481_d_out d_out; } ;
struct FsmInst {struct st5481_adapter* userdata; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct FsmInst*,int,void*) ;
 scalar_t__ FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct FsmInst *VAR_1, int VAR_2, void *VAR_3)
{
 struct st5481_adapter *VAR_4 = VAR_1->userdata;
 struct st5481_d_out *VAR_5 = &VAR_4->d_out;

 if (FUNC_2(0, &VAR_5->busy) || FUNC_2(1, &VAR_5->busy)) {
  FUNC_0(&VAR_5->fsm, VAR_0);
 } else {
  FUNC_1(VAR_1, VAR_2, VAR_3);
 }
}
