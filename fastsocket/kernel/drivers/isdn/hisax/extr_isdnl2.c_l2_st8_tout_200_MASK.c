
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rc; scalar_t__ N200; int flag; int T200; int t200; } ;
struct TYPE_3__ {int (* layer ) (struct PStack*,int,void*) ;} ;
struct PStack {TYPE_2__ l2; TYPE_1__ ma; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct FsmInst*) ;
 int FUNC_2 (struct PStack*,int,void*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct PStack*) ;

__attribute__((used)) static void
FUNC_6(struct FsmInst *VAR_7, int VAR_8, void *VAR_9)
{
 struct PStack *VAR_10 = VAR_7->userdata;

 if (FUNC_4(VAR_3, &VAR_10->l2.flag) &&
  FUNC_4(VAR_1, &VAR_10->l2.flag)) {
  FUNC_0(&VAR_10->l2.t200, VAR_10->l2.T200, VAR_0, ((void*)0), 9);
  return;
 }
 FUNC_3(VAR_4, &VAR_10->l2.flag);
 if (VAR_10->l2.rc == VAR_10->l2.N200) {
  VAR_10->ma.layer(VAR_10, VAR_6 | VAR_5, (void *) 'I');
  FUNC_1(VAR_7);
  FUNC_3(VAR_2, &VAR_10->l2.flag);
 } else {
  FUNC_5(VAR_10);
  VAR_10->l2.rc++;
 }
}
