
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct IsdnCardState {TYPE_3__* bcs; } ;
struct TYPE_4__ {int hscx; } ;
struct TYPE_5__ {TYPE_1__ hscx; } ;
struct TYPE_6__ {struct IsdnCardState* cs; TYPE_2__ hw; int BC_Close; int BC_SetStack; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_2, int VAR_3)
{
 VAR_2->bcs[VAR_3].BC_SetStack = VAR_1;
 VAR_2->bcs[VAR_3].BC_Close = VAR_0;
 VAR_2->bcs[VAR_3].hw.hscx.hscx = VAR_3;
 VAR_2->bcs[VAR_3].cs = VAR_2;
 FUNC_0(VAR_2->bcs + VAR_3, 0, VAR_3);
}
