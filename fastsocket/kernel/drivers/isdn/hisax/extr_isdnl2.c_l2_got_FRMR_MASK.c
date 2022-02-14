
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int* data; } ;
struct TYPE_4__ {int flag; } ;
struct TYPE_3__ {int (* layer ) (struct PStack*,int,void*) ;} ;
struct PStack {TYPE_2__ l2; TYPE_1__ ma; } ;
struct FsmInst {scalar_t__ state; struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct FsmInst*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct PStack*,int,void*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct PStack *VAR_7 = VAR_4->userdata;
 struct sk_buff *VAR_8 = VAR_6;

 FUNC_4(VAR_8, FUNC_3(&VAR_7->l2) + 1);

 if (!(VAR_8->data[0] & 1) || ((VAR_8->data[0] & 3) == 1) ||
     (FUNC_0(VAR_8->data) && (VAR_4->state == VAR_3))) {
  VAR_7->ma.layer(VAR_7, VAR_2 | VAR_1, (void *) 'K');
  FUNC_2(VAR_4);
  FUNC_6(VAR_0, &VAR_7->l2.flag);
 }
 FUNC_1(VAR_8);
}
