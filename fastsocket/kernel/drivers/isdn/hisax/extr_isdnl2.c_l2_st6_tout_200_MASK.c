
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rc; scalar_t__ N200; int T200; int t200; int flag; } ;
struct TYPE_3__ {int (* layer ) (struct PStack*,int,void*) ;} ;
struct PStack {TYPE_2__ l2; TYPE_1__ ma; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct PStack*,int ) ;
 int FUNC_3 (struct PStack*,int,int ) ;
 int FUNC_4 (struct PStack*,int,void*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_10, int VAR_11, void *VAR_12)
{
 struct PStack *VAR_13 = VAR_10->userdata;

 if (FUNC_6(VAR_5, &VAR_13->l2.flag) &&
  FUNC_6(VAR_4, &VAR_13->l2.flag)) {
  FUNC_0(&VAR_13->l2.t200, VAR_13->l2.T200, VAR_3, ((void*)0), 9);
 } else if (VAR_13->l2.rc == VAR_13->l2.N200) {
  FUNC_1(VAR_10, VAR_9);
  FUNC_5(VAR_6, &VAR_13->l2.flag);
  VAR_13->ma.layer(VAR_13, VAR_8 | VAR_7, (void *) 'H');
  FUNC_2(VAR_13, VAR_1);
 } else {
  VAR_13->l2.rc++;
  FUNC_0(&VAR_13->l2.t200, VAR_13->l2.T200, VAR_3,
       ((void*)0), 9);
  FUNC_3(VAR_13, VAR_2 | 0x10, VAR_0);
 }
}
