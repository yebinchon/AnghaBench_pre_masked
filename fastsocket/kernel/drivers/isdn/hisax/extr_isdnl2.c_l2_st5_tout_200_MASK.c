
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rc; scalar_t__ N200; int flag; int T200; int t200; int (* l2l1 ) (struct PStack*,int,int *) ;int i_queue; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct PStack*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct PStack*) ;
 int FUNC_5 (struct PStack*,int,void*) ;
 int FUNC_6 (struct PStack*,int,int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct FsmInst *VAR_14, int VAR_15, void *VAR_16)
{
 struct PStack *VAR_17 = VAR_14->userdata;

 if (FUNC_8(VAR_4, &VAR_17->l2.flag) &&
  FUNC_8(VAR_2, &VAR_17->l2.flag)) {
  FUNC_0(&VAR_17->l2.t200, VAR_17->l2.T200, VAR_1, ((void*)0), 9);
 } else if (VAR_17->l2.rc == VAR_17->l2.N200) {
  FUNC_1(VAR_14, VAR_13);
  FUNC_7(VAR_6, &VAR_17->l2.flag);
  FUNC_3(&VAR_17->l2.i_queue);
  VAR_17->ma.layer(VAR_17, VAR_8 | VAR_7, (void *) 'G');
  if (FUNC_8(VAR_3, &VAR_17->l2.flag))
   VAR_17->l2.l2l1(VAR_17, VAR_9 | VAR_10, ((void*)0));
  FUNC_4(VAR_17);
 } else {
  VAR_17->l2.rc++;
  FUNC_0(&VAR_17->l2.t200, VAR_17->l2.T200, VAR_1, ((void*)0), 9);
  FUNC_2(VAR_17, (FUNC_8(VAR_5, &VAR_17->l2.flag) ? VAR_12 : VAR_11)
       | 0x10, VAR_0);
 }
}
