
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int flag; } ;
struct TYPE_4__ {int (* layer ) (struct PStack*,int,void*) ;} ;
struct PStack {TYPE_1__ l2; TYPE_2__ ma; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct FsmInst*) ;
 scalar_t__ FUNC_1 (struct PStack*,struct sk_buff*) ;
 int FUNC_2 (struct PStack*,int,void*) ;
 int FUNC_3 (struct PStack*,int,void*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct sk_buff *VAR_6 = VAR_5;
 struct PStack *VAR_7 = VAR_3->userdata;

 if (FUNC_1(VAR_7, VAR_6))
  VAR_7->ma.layer(VAR_7, VAR_2 | VAR_1, (void *) 'B');
 else {
  VAR_7->ma.layer(VAR_7, VAR_2 | VAR_1, (void *) 'E');
  FUNC_0(VAR_3);
  FUNC_4(VAR_0, &VAR_7->l2.flag);
 }
}
