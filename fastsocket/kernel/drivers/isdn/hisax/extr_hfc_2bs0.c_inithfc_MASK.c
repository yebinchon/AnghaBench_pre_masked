
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct IsdnCardState {TYPE_1__* bcs; int * BC_Send_Data; } ;
struct TYPE_3__ {void* BC_Close; void* BC_SetStack; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 void* VAR_2 ;

void
FUNC_2(struct IsdnCardState *VAR_3)
{
 FUNC_0(&VAR_3->bcs[0]);
 FUNC_0(&VAR_3->bcs[1]);
 VAR_3->BC_Send_Data = &VAR_1;
 VAR_3->bcs[0].BC_SetStack = VAR_2;
 VAR_3->bcs[1].BC_SetStack = VAR_2;
 VAR_3->bcs[0].BC_Close = VAR_0;
 VAR_3->bcs[1].BC_Close = VAR_0;
 FUNC_1(VAR_3->bcs, 0, 0);
 FUNC_1(VAR_3->bcs + 1, 0, 0);
}
