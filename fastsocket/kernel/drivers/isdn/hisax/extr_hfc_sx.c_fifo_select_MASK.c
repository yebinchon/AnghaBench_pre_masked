
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_4__ {scalar_t__ last_fifo; scalar_t__ base; } ;
struct TYPE_3__ {TYPE_2__ hfcsx; } ;
struct IsdnCardState {TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct IsdnCardState *VAR_1, u_char VAR_2)
{
        if (VAR_2 == VAR_1->hw.hfcsx.last_fifo)
   return;

        FUNC_1(VAR_1->hw.hfcsx.base+1, VAR_0);
 FUNC_1(VAR_1->hw.hfcsx.base, VAR_2);
 while (FUNC_0(VAR_1->hw.hfcsx.base+1) & 1);
 FUNC_2(4);
 FUNC_1(VAR_1->hw.hfcsx.base, VAR_2);
 while (FUNC_0(VAR_1->hw.hfcsx.base+1) & 1);
}
