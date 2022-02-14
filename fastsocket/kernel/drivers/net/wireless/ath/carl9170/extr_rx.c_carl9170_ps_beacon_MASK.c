
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_tim_ie {int dtim_count; int bitmap_ctrl; } ;
struct ieee80211_hdr {int addr3; int frame_control; } ;
struct TYPE_8__ {int dtim_counter; int off_override; int last_beacon; } ;
struct TYPE_7__ {int curaid; int curbssid; } ;
struct ar9170 {TYPE_4__ ps; TYPE_3__ common; TYPE_2__* hw; } ;
struct TYPE_5__ {int flags; int ps_dtim_period; } ;
struct TYPE_6__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int* FUNC_1 (void*,unsigned int,int ) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ieee80211_tim_ie*,int,int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ar9170 *VAR_5, void *VAR_6, unsigned int VAR_7)
{
 struct ieee80211_hdr *VAR_8 = VAR_6;
 struct ieee80211_tim_ie *VAR_9;
 u8 *VAR_10;
 u8 VAR_11;
 bool VAR_12;

 if (FUNC_6(!(VAR_5->hw->conf.flags & VAR_1)))
  return;


 if (!FUNC_5(VAR_8->frame_control))
  return;


 if (VAR_7 <= 40 + VAR_0)
  return;


 if (!FUNC_3(VAR_8->addr3, VAR_5->common.curbssid) ||
     !VAR_5->common.curaid)
  return;

 VAR_5->ps.last_beacon = VAR_4;

 VAR_10 = FUNC_1(VAR_6, VAR_7 - VAR_0, VAR_3);
 if (!VAR_10)
  return;

 if (VAR_10[1] < sizeof(*VAR_9))
  return;

 VAR_11 = VAR_10[1];
 VAR_9 = (struct ieee80211_tim_ie *) &VAR_10[2];

 if (!FUNC_0(!VAR_5->hw->conf.ps_dtim_period))
  VAR_5->ps.dtim_counter = (VAR_9->dtim_count - 1) %
   VAR_5->hw->conf.ps_dtim_period;




 VAR_12 = FUNC_4(VAR_9, VAR_11, VAR_5->common.curaid);


 VAR_12 |= !!(VAR_9->bitmap_ctrl & 0x01);

 if (!VAR_12) {

  VAR_5->ps.off_override &= ~VAR_2;
  FUNC_2(VAR_5);
 } else {

  VAR_5->ps.off_override |= VAR_2;
 }
}
