
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_adapter {int dummy; } ;
struct FsmInst {scalar_t__ state; struct st5481_adapter* userdata; } ;


 int FUNC_0 (struct FsmInst*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct st5481_adapter*) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct st5481_adapter *VAR_5 = VAR_2->userdata;

 if (VAR_2->state == VAR_0)
  FUNC_1(VAR_5);

 FUNC_0(VAR_2, VAR_1);
}
