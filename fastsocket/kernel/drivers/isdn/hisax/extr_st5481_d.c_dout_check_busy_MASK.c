
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_d_out {int busy; } ;
struct st5481_adapter {struct st5481_d_out d_out; } ;
struct FsmInst {struct st5481_adapter* userdata; } ;


 int FUNC_0 (struct FsmInst*,int,void*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct FsmInst *VAR_0, int VAR_1, void *VAR_2)
{
 struct st5481_adapter *VAR_3 = VAR_0->userdata;
 struct st5481_d_out *VAR_4 = &VAR_3->d_out;

 if (!FUNC_1(0, &VAR_4->busy) && !FUNC_1(1, &VAR_4->busy))
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
