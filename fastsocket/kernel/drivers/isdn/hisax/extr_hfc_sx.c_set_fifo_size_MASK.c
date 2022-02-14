
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chip; int cirm; scalar_t__ b_fifo_size; } ;
struct TYPE_3__ {TYPE_2__ hfcsx; } ;
struct IsdnCardState {TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct IsdnCardState *VAR_2)
{

        if (VAR_2->hw.hfcsx.b_fifo_size) return(1);

 if ((VAR_2->hw.hfcsx.chip >> 4) == 9) {
   VAR_2->hw.hfcsx.b_fifo_size = VAR_0;
   return(1);
 }

   VAR_2->hw.hfcsx.b_fifo_size = VAR_1;
   VAR_2->hw.hfcsx.cirm |= 0x10;
   return(0);

}
