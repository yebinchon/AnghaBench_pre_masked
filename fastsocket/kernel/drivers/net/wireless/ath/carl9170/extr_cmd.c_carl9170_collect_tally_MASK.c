
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int tally ;
struct survey_info {unsigned int channel_time; unsigned int channel_time_busy; unsigned int channel_time_tx; } ;
struct carl9170_tally_rsp {int rx_overrun; int rx_total; int tx_time; int cca; int active; int tick; } ;
struct TYPE_4__ {unsigned int active; unsigned int cca; unsigned int tx_time; unsigned int rx_total; unsigned int rx_overrun; } ;
struct ar9170 {TYPE_2__ tally; TYPE_1__* channel; struct survey_info* survey; } ;
struct TYPE_3__ {size_t hw_value; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar9170*,int ,int ,int *,int,int *) ;
 int FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 (int ) ;

int FUNC_3(struct ar9170 *VAR_1)
{
 struct carl9170_tally_rsp VAR_2;
 struct survey_info *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0, 0, ((void*)0),
    sizeof(VAR_2), (u8 *)&VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_2(VAR_2.tick);
 if (VAR_4) {
  VAR_1->tally.active += FUNC_2(VAR_2.active) / VAR_4;
  VAR_1->tally.cca += FUNC_2(VAR_2.cca) / VAR_4;
  VAR_1->tally.tx_time += FUNC_2(VAR_2.tx_time) / VAR_4;
  VAR_1->tally.rx_total += FUNC_2(VAR_2.rx_total);
  VAR_1->tally.rx_overrun += FUNC_2(VAR_2.rx_overrun);

  if (VAR_1->channel) {
   VAR_3 = &VAR_1->survey[VAR_1->channel->hw_value];
   VAR_3->channel_time = VAR_1->tally.active;
   VAR_3->channel_time_busy = VAR_1->tally.cca;
   VAR_3->channel_time_tx = VAR_1->tally.tx_time;
   FUNC_1(VAR_3->channel_time, 1000);
   FUNC_1(VAR_3->channel_time_busy, 1000);
   FUNC_1(VAR_3->channel_time_tx, 1000);
  }
 }
 return 0;
}
