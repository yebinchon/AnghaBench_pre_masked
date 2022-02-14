
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* layer ) (struct PStack*,int,void*) ;} ;
struct PStack {TYPE_1__ ma; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct PStack*,struct sk_buff*) ;
 int FUNC_1 (struct PStack*,int,void*) ;
 int FUNC_2 (struct PStack*,int,void*) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct sk_buff *VAR_5 = VAR_4;
 struct PStack *VAR_6 = VAR_2->userdata;

 if (FUNC_0(VAR_6, VAR_5))
  VAR_6->ma.layer(VAR_6, VAR_1 | VAR_0, (void *) 'C');
 else
  VAR_6->ma.layer(VAR_6, VAR_1 | VAR_0, (void *) 'D');
}
