
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int active; unsigned int tx_time; unsigned int cca; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_6__ {unsigned int tally_clock; int counter; TYPE_2__ tally; TYPE_1__ phy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_1();
 if (VAR_4.phy.state == VAR_3) {
  VAR_7 = (VAR_6 - VAR_4.tally_clock);

  VAR_4.tally.active += VAR_7;

  VAR_5 = FUNC_0(VAR_2);
  if (VAR_5 & VAR_1)
   VAR_4.tally.tx_time += VAR_7;
  if (VAR_5 & VAR_0)
   VAR_4.tally.cca += VAR_7;
 }

 VAR_4.tally_clock = VAR_6;
 VAR_4.counter++;
}
