
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer1 {int Flags; int timer; int dch; int (* dcb ) (int ,int ) ;} ;
struct FsmInst {struct layer1* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ,int *,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_7, int VAR_8, void *VAR_9)
{
 struct layer1 *VAR_10 = VAR_7->userdata;

 FUNC_0(VAR_7, VAR_6);
 VAR_10->dcb(VAR_10->dch, VAR_5);
 if (FUNC_4(VAR_3, &VAR_10->Flags))
  FUNC_1(&VAR_10->timer, 4);
 if (!FUNC_6(VAR_1, &VAR_10->Flags)) {
  if (FUNC_4(VAR_4, &VAR_10->Flags))
   FUNC_1(&VAR_10->timer, 3);
  FUNC_2(&VAR_10->timer, 110, VAR_0, ((void*)0), 2);
  FUNC_5(VAR_2, &VAR_10->Flags);
 }
}
