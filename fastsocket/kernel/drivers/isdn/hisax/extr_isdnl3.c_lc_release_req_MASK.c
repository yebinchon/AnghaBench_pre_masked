
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* l3l2 ) (struct PStack*,int,int *) ;int l3m_timer; scalar_t__ debug; } ;
struct TYPE_3__ {int flag; } ;
struct PStack {TYPE_2__ l3; TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct PStack*,char*) ;
 int FUNC_3 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct PStack *VAR_9 = VAR_6->userdata;

 if (FUNC_4(VAR_3, &VAR_9->l2.flag)) {
  if (VAR_9->l3.debug)
   FUNC_2(VAR_9, "lc_release_req: l2 blocked");

  FUNC_0(&VAR_9->l3.l3m_timer, VAR_1, VAR_2, ((void*)0), 51);
 } else {
  FUNC_1(VAR_6, VAR_5);
  VAR_9->l3.l3l2(VAR_9, VAR_0 | VAR_4, ((void*)0));
 }
}
