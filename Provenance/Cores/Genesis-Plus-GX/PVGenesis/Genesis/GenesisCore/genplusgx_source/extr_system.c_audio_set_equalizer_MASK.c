
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hg; scalar_t__ mg; scalar_t__ lg; int high_freq; int low_freq; } ;
struct TYPE_6__ {double lg; double mg; double hg; } ;
struct TYPE_5__ {int sample_rate; } ;


 TYPE_4__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 TYPE_1__ VAR_2 ;

void FUNC_1(void)
{
  FUNC_0(&VAR_1,VAR_0.low_freq,VAR_0.high_freq,VAR_2.sample_rate);
  VAR_1.lg = (double)(VAR_0.lg) / 100.0;
  VAR_1.mg = (double)(VAR_0.mg) / 100.0;
  VAR_1.hg = (double)(VAR_0.hg) / 100.0;
}
