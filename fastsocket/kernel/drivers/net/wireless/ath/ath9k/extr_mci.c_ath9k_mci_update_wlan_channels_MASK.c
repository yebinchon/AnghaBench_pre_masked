
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath9k_hw_mci {int* wlan_channels; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {struct ath9k_channel* curchan; TYPE_1__ btcoex_hw; } ;
struct ath9k_channel {int channel; scalar_t__ chanmode; } ;
typedef int s16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath9k_channel*) ;
 int VAR_3 ;
 int FUNC_1 (int**,int) ;
 int VAR_4 ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (int ,int ,char*,int,int,int) ;

void FUNC_6(struct ath_softc *VAR_5, bool VAR_6)
{
 struct ath_hw *VAR_7 = VAR_5->sc_ah;
 struct ath9k_hw_mci *VAR_8 = &VAR_7->btcoex_hw.mci;
 struct ath9k_channel *VAR_9 = VAR_7->curchan;
 u32 VAR_10[] = {0x00000000, 0xffff0000, 0xffffffff, 0x7fffffff};
 int VAR_11;
 s16 VAR_12, VAR_13;
 u16 VAR_14;

 if (!VAR_9 || !FUNC_0(VAR_9))
  return;

 if (VAR_6)
  goto send_wlan_chan;

 VAR_14 = VAR_9->channel - 2402;

 VAR_12 = VAR_14 - 10;
 VAR_13 = VAR_14 + 10;

 if (VAR_9->chanmode == VAR_2)
  VAR_13 += 20;
 else if (VAR_9->chanmode == VAR_1)
  VAR_12 -= 20;


 VAR_12 -= 7;
 VAR_13 += 7;

 if (VAR_12 <= 0)
  VAR_12 = 0;
 if (VAR_13 >= VAR_0)
  VAR_13 = VAR_0 - 1;

 FUNC_5(FUNC_4(VAR_7), VAR_3,
  "WLAN current channel %d mask BT channel %d - %d\n",
  VAR_14, VAR_12, VAR_13);

 for (VAR_11 = VAR_12; VAR_11 < VAR_13; VAR_11++)
  FUNC_1(&VAR_10, VAR_11);

send_wlan_chan:

 for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
  VAR_8->wlan_channels[VAR_11] = VAR_10[VAR_11];
 FUNC_2(VAR_7);
 FUNC_3(VAR_7, VAR_4);
}
