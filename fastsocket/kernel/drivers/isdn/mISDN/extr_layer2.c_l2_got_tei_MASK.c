
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct layer2 {char tei; int ui_queue; int flag; int sapi; int ch; } ;
struct FsmInst {scalar_t__ state; struct layer2* userdata; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct FsmInst*) ;
 int FUNC_1 (struct layer2*,int ,int,int *) ;
 int FUNC_2 (struct FsmInst*,int ) ;
 int FUNC_3 (int *,int ,char) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct layer2*) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_5, int VAR_6, void *VAR_7)
{
 struct layer2 *VAR_8 = VAR_5->userdata;
 u_int VAR_9;

 VAR_8->tei = (signed char)(long)VAR_7;
 FUNC_3(&VAR_8->ch, VAR_8->sapi, VAR_8->tei);
 VAR_9 = VAR_1;
 FUNC_1(VAR_8, VAR_0, sizeof(VAR_9), &VAR_9);
 if (VAR_5->state == VAR_3) {
  FUNC_0(VAR_5);
  FUNC_5(VAR_2, &VAR_8->flag);
 } else
  FUNC_2(VAR_5, VAR_4);
 if (FUNC_4(&VAR_8->ui_queue))
  FUNC_6(VAR_8);
}
