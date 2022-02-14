
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * extra; int base; int timer; scalar_t__ int_m2; } ;
struct TYPE_3__ {TYPE_2__ hfcsx; } ;
struct IsdnCardState {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct IsdnCardState*,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct IsdnCardState *VAR_3)
{
 VAR_3->hw.hfcsx.int_m2 = 0;
 FUNC_0(VAR_3, VAR_1, VAR_3->hw.hfcsx.int_m2);
 FUNC_0(VAR_3, VAR_0, VAR_2);
 FUNC_3(30);
 FUNC_0(VAR_3, VAR_0, 0);
 FUNC_1(&VAR_3->hw.hfcsx.timer);
 FUNC_4(VAR_3->hw.hfcsx.base, 2);
 FUNC_2(VAR_3->hw.hfcsx.extra);
 VAR_3->hw.hfcsx.extra = ((void*)0);
}
