
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct nphy_gain_ctl_workaround_entry {int cliplo_gain; int* rfseq_init; int init_gain; } ;
struct TYPE_10__ {int rev; int radio_rev; int channel_type; } ;
struct b43_wldev {TYPE_5__ phy; TYPE_4__* dev; } ;
struct TYPE_9__ {TYPE_3__* bus_sprom; } ;
struct TYPE_6__ {size_t tr_iso; } ;
struct TYPE_7__ {TYPE_1__ ghz2; } ;
struct TYPE_8__ {TYPE_2__ fem; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct nphy_gain_ctl_workaround_entry VAR_0 ;
 struct nphy_gain_ctl_workaround_entry** VAR_1 ;

struct nphy_gain_ctl_workaround_entry *FUNC_2(
 struct b43_wldev *VAR_2, bool VAR_3, bool VAR_4)
{
 struct nphy_gain_ctl_workaround_entry *VAR_5;
 u8 VAR_6;

 if (!VAR_3 && VAR_2->phy.rev >= 6 && VAR_2->phy.radio_rev == 11)
  return &VAR_0;

 FUNC_0(VAR_2->phy.rev < 3);
 if (VAR_2->phy.rev >= 6)
  VAR_6 = 3;
 else if (VAR_2->phy.rev == 5)
  VAR_6 = 2;
 else if (VAR_2->phy.rev == 4)
  VAR_6 = 1;
 else
  VAR_6 = 0;
 VAR_5 = &VAR_1[VAR_3][VAR_6];


 if (VAR_3 && VAR_2->phy.rev >= 6) {
  if (VAR_2->phy.radio_rev == 11 &&
      !FUNC_1(VAR_2->phy.channel_type))
   VAR_5->cliplo_gain = 0x2d;
 } else if (!VAR_3 && VAR_2->phy.rev >= 5) {
  static const int VAR_7[] = {0x0062, 0x0064, 0x006a, 0x106a,
      0x106c, 0x1074, 0x107c, 0x207c};
  u8 VAR_8 = VAR_2->dev->bus_sprom->fem.ghz2.tr_iso;

  if (VAR_4) {
   VAR_5->rfseq_init[0] &= ~0x4000;
   VAR_5->rfseq_init[1] &= ~0x4000;
   VAR_5->rfseq_init[2] &= ~0x4000;
   VAR_5->rfseq_init[3] &= ~0x4000;
   VAR_5->init_gain &= ~0x4000;
  }
  if (VAR_8 > 7)
   VAR_8 = 3;
  VAR_5->cliplo_gain = VAR_7[VAR_8];

 } else if (VAR_3 && VAR_2->phy.rev == 4 && VAR_4) {
  VAR_5->rfseq_init[0] &= ~0x4000;
  VAR_5->rfseq_init[1] &= ~0x4000;
  VAR_5->rfseq_init[2] &= ~0x4000;
  VAR_5->rfseq_init[3] &= ~0x4000;
  VAR_5->init_gain &= ~0x4000;
  VAR_5->rfseq_init[0] |= 0x1000;
  VAR_5->rfseq_init[1] |= 0x1000;
  VAR_5->rfseq_init[2] |= 0x1000;
  VAR_5->rfseq_init[3] |= 0x1000;
  VAR_5->init_gain |= 0x1000;
 }

 return VAR_5;
}
