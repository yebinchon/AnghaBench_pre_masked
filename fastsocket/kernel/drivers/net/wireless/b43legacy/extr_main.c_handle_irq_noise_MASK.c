
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int calculation_running; scalar_t__ channel_at_start; int nr_samples; scalar_t__** samples; } ;
struct TYPE_3__ {int link_noise; } ;
struct b43legacy_phy {scalar_t__ channel; scalar_t__* nrssi_lt; } ;
struct b43legacy_wldev {TYPE_2__ noisecalc; TYPE_1__ stats; struct b43legacy_phy phy; } ;
typedef int s32 ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_5 (int,int ,scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_1->phy;
 u16 VAR_3;
 u8 VAR_4[4];
 u8 VAR_5;
 u8 VAR_6;
 s32 VAR_7;



 FUNC_1(!VAR_1->noisecalc.calculation_running);
 if (VAR_1->noisecalc.channel_at_start != VAR_2->channel)
  goto drop_calculation;
 *((__le32 *)VAR_4) = FUNC_6(FUNC_3(VAR_1));
 if (VAR_4[0] == 0x7F || VAR_4[1] == 0x7F ||
     VAR_4[2] == 0x7F || VAR_4[3] == 0x7F)
  goto generate_new;


 FUNC_1(VAR_1->noisecalc.nr_samples >= 8);
 VAR_5 = VAR_1->noisecalc.nr_samples;
 VAR_4[0] = FUNC_5(VAR_4[0], 0, FUNC_0(VAR_2->nrssi_lt) - 1);
 VAR_4[1] = FUNC_5(VAR_4[1], 0, FUNC_0(VAR_2->nrssi_lt) - 1);
 VAR_4[2] = FUNC_5(VAR_4[2], 0, FUNC_0(VAR_2->nrssi_lt) - 1);
 VAR_4[3] = FUNC_5(VAR_4[3], 0, FUNC_0(VAR_2->nrssi_lt) - 1);
 VAR_1->noisecalc.samples[VAR_5][0] = VAR_2->nrssi_lt[VAR_4[0]];
 VAR_1->noisecalc.samples[VAR_5][1] = VAR_2->nrssi_lt[VAR_4[1]];
 VAR_1->noisecalc.samples[VAR_5][2] = VAR_2->nrssi_lt[VAR_4[2]];
 VAR_1->noisecalc.samples[VAR_5][3] = VAR_2->nrssi_lt[VAR_4[3]];
 VAR_1->noisecalc.nr_samples++;
 if (VAR_1->noisecalc.nr_samples == 8) {

  VAR_7 = 0;
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
   for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
    VAR_7 += VAR_1->noisecalc.samples[VAR_5][VAR_6];
  }
  VAR_7 /= (8 * 4);
  VAR_7 *= 125;
  VAR_7 += 64;
  VAR_7 /= 128;
  VAR_3 = FUNC_4(VAR_1, VAR_0,
          0x40C);
  VAR_3 = (VAR_3 / 128) & 0x1F;
  if (VAR_3 >= 8)
   VAR_7 += 2;
  else
   VAR_7 -= 25;
  if (VAR_3 == 8)
   VAR_7 -= 72;
  else
   VAR_7 -= 48;

  VAR_1->stats.link_noise = VAR_7;
drop_calculation:
  VAR_1->noisecalc.calculation_running = 0;
  return;
 }
generate_new:
 FUNC_2(VAR_1);
}
