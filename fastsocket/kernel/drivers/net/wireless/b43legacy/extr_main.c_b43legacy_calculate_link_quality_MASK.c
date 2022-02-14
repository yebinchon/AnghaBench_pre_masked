
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int calculation_running; scalar_t__ nr_samples; int channel_at_start; } ;
struct TYPE_3__ {int channel; } ;
struct b43legacy_wldev {TYPE_2__ noisecalc; TYPE_1__ phy; } ;


 int FUNC_0 (struct b43legacy_wldev*) ;

__attribute__((used)) static void FUNC_1(struct b43legacy_wldev *VAR_0)
{


 if (VAR_0->noisecalc.calculation_running)
  return;
 VAR_0->noisecalc.channel_at_start = VAR_0->phy.channel;
 VAR_0->noisecalc.calculation_running = 1;
 VAR_0->noisecalc.nr_samples = 0;

 FUNC_0(VAR_0);
}
