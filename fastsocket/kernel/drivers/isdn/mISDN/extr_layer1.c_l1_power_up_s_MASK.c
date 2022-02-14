
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer1 {int dch; int (* dcb ) (int ,int ) ;int Flags; } ;
struct FsmInst {struct layer1* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct layer1 *VAR_7 = VAR_4->userdata;

 if (FUNC_2(VAR_0, &VAR_7->Flags)) {
  FUNC_0(VAR_4, VAR_3);
  VAR_7->dcb(VAR_7->dch, VAR_1);
 } else
  FUNC_0(VAR_4, VAR_2);
}
