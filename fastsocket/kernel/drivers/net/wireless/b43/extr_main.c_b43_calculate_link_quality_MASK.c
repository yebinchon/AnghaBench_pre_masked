
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int calculation_running; scalar_t__ nr_samples; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct b43_wldev {TYPE_2__ noisecalc; TYPE_1__ phy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_1)
{


 if (VAR_1->phy.type != VAR_0)
  return;
 if (VAR_1->noisecalc.calculation_running)
  return;
 VAR_1->noisecalc.calculation_running = 1;
 VAR_1->noisecalc.nr_samples = 0;

 FUNC_0(VAR_1);
}
