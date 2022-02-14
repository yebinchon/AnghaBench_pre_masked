
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct survey_info {int filled; unsigned int channel_time; unsigned int channel_time_busy; unsigned int channel_time_rx; unsigned int channel_time_tx; } ;
struct ath_softc {struct survey_info* survey; struct ath_hw* sc_ah; } ;
struct ath_hw {scalar_t__ power_mode; int * curchan; int * channels; } ;
struct ath_cycle_counters {unsigned int cycles; unsigned int rx_busy; unsigned int rx_frame; unsigned int tx_frame; } ;
struct ath_common {int clockrate; struct ath_cycle_counters cc_survey; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*) ;
 int FUNC_2 (struct ath_softc*,int) ;
 int FUNC_3 (struct ath_cycle_counters*,int ,int) ;

int FUNC_4(struct ath_softc *VAR_5)
{
 struct ath_hw *VAR_6 = VAR_5->sc_ah;
 struct ath_common *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = VAR_6->curchan - &VAR_6->channels[0];
 struct survey_info *VAR_9 = &VAR_5->survey[VAR_8];
 struct ath_cycle_counters *VAR_10 = &VAR_7->cc_survey;
 unsigned int VAR_11 = VAR_7->clockrate * 1000;
 int VAR_12 = 0;

 if (!VAR_6->curchan)
  return -1;

 if (VAR_6->power_mode == VAR_0)
  FUNC_1(VAR_7);

 if (VAR_10->cycles > 0) {
  VAR_9->filled |= VAR_1 |
   VAR_2 |
   VAR_3 |
   VAR_4;
  VAR_9->channel_time += VAR_10->cycles / VAR_11;
  VAR_9->channel_time_busy += VAR_10->rx_busy / VAR_11;
  VAR_9->channel_time_rx += VAR_10->rx_frame / VAR_11;
  VAR_9->channel_time_tx += VAR_10->tx_frame / VAR_11;
 }

 if (VAR_10->cycles < VAR_11)
  return -1;

 if (VAR_10->cycles > 0)
  VAR_12 = VAR_10->rx_busy * 100 / VAR_10->cycles;

 FUNC_3(VAR_10, 0, sizeof(*VAR_10));

 FUNC_2(VAR_5, VAR_8);

 return VAR_12;
}
