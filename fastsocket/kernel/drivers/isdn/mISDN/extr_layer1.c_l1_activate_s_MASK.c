
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer1 {int dch; int (* dcb ) (int ,int ) ;int Flags; int timer; } ;
struct FsmInst {struct layer1* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct layer1 *VAR_7 = VAR_4->userdata;

 FUNC_0(&VAR_7->timer, VAR_3, VAR_0, ((void*)0), 2);
 FUNC_2(VAR_1, &VAR_7->Flags);
 VAR_7->dcb(VAR_7->dch, VAR_2);
}
