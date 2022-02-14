
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {struct BCState* bcs; } ;
struct BCState {int channel; scalar_t__ Flag; int * BC_Close; int * BC_SetStack; int aclock; int tqueue; struct IsdnCardState* cs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct IsdnCardState *VAR_1, int VAR_2)
{
 struct BCState *VAR_3 = VAR_1->bcs + VAR_2;

 VAR_3->cs = VAR_1;
 VAR_3->channel = VAR_2;
 FUNC_0(&VAR_3->tqueue, VAR_0);
 FUNC_1(&VAR_3->aclock);
 VAR_3->BC_SetStack = ((void*)0);
 VAR_3->BC_Close = ((void*)0);
 VAR_3->Flag = 0;
}
