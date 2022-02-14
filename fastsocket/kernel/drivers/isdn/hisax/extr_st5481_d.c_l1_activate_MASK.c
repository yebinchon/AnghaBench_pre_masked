
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_adapter {int timer; } ;
struct FsmInst {struct st5481_adapter* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int ,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct st5481_adapter*,int ) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct st5481_adapter *VAR_9 = VAR_6->userdata;

 FUNC_2(VAR_9, VAR_2);
 FUNC_2(VAR_9, VAR_3);
 FUNC_1(&VAR_9->timer, VAR_5, VAR_0, ((void*)0), 2);
 FUNC_2(VAR_9, VAR_1);
 FUNC_0(VAR_6, VAR_4);
}
