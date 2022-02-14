
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct layer1 {int dch; int (* dcb ) (int ,int ) ;TYPE_1__ l1m; int Flags; } ;
struct FsmInst {struct layer1* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_8, int VAR_9, void *VAR_10)
{
 struct layer1 *VAR_11 = VAR_8->userdata;

 FUNC_4(VAR_2, &VAR_11->Flags);
 if (FUNC_4(VAR_0, &VAR_11->Flags)) {
  if (FUNC_4(VAR_1, &VAR_11->Flags))
   VAR_11->dcb(VAR_11->dch, VAR_3);
  VAR_11->dcb(VAR_11->dch, VAR_5);
 }
 if (VAR_11->l1m.state != VAR_7) {
  FUNC_0(VAR_8, VAR_6);
  VAR_11->dcb(VAR_11->dch, VAR_4);
 }
}
