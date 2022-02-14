
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_d_out {int fsm; } ;
struct st5481_adapter {struct st5481_d_out d_out; } ;
struct FsmInst {struct st5481_adapter* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct st5481_adapter*,int,int ,struct st5481_adapter*) ;

__attribute__((used)) static void FUNC_2(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct st5481_adapter *VAR_7 = VAR_4->userdata;
 struct st5481_d_out *VAR_8 = &VAR_7->d_out;

 FUNC_0(&VAR_8->fsm, VAR_1);
 FUNC_1(VAR_7, VAR_0 | VAR_2, VAR_3, VAR_7);
}
