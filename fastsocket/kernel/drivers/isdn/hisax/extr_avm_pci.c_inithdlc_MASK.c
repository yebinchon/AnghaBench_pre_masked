
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct IsdnCardState {TYPE_1__* bcs; } ;
struct TYPE_2__ {void* BC_Close; void* BC_SetStack; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 void* VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_2)
{
 VAR_2->bcs[0].BC_SetStack = VAR_1;
 VAR_2->bcs[1].BC_SetStack = VAR_1;
 VAR_2->bcs[0].BC_Close = VAR_0;
 VAR_2->bcs[1].BC_Close = VAR_0;
 FUNC_0(VAR_2->bcs, -1, 0);
 FUNC_0(VAR_2->bcs + 1, -1, 1);
}
