
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
struct TYPE_4__ {int (* l1hw ) (struct PStack*,int,int *) ;TYPE_1__ l1m; int Flags; int hardware; } ;
struct PStack {TYPE_2__ l1; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_7, int VAR_8, void *VAR_9)
{
 struct PStack *VAR_10 = VAR_7->userdata;

 FUNC_3(VAR_1, &VAR_10->l1.Flags);
 if (FUNC_3(VAR_0, &VAR_10->l1.Flags))
  FUNC_1(VAR_10->l1.hardware);




 if (VAR_10->l1.l1m.state != VAR_6) {
  FUNC_0(VAR_7, VAR_5);
  VAR_10->l1.l1hw(VAR_10, VAR_3 | VAR_4, ((void*)0));
 }
}
