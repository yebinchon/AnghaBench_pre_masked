
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int len; } ;
struct iwl_scan_cmd {int channel_count; TYPE_1__ tx_cmd; scalar_t__ data; } ;
struct iwl_scan_channel {void* iteration_count; void* passive_dwell; void* active_dwell; int type; void* channel; } ;
struct cfg80211_scan_request {TYPE_2__** channels; int n_ssids; } ;
struct TYPE_4__ {int hw_value; int flags; int band; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct iwl_scan_cmd *VAR_2,
           struct cfg80211_scan_request *VAR_3)
{
 u16 VAR_4 = FUNC_4(VAR_3->channels[0]->band);
 u16 VAR_5 = FUNC_3(VAR_3->channels[0]->band,
          VAR_3->n_ssids);
 struct iwl_scan_channel *VAR_6 = (struct iwl_scan_channel *)
  (VAR_2->data + FUNC_5(VAR_2->tx_cmd.len));
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->channel_count; VAR_7++) {
  VAR_6->channel = FUNC_1(VAR_3->channels[VAR_7]->hw_value);
  VAR_6->type = FUNC_2(FUNC_0(VAR_3->n_ssids) - 1);
  if (VAR_3->channels[VAR_7]->flags & VAR_0)
   VAR_6->type &= FUNC_2(~VAR_1);
  VAR_6->active_dwell = FUNC_1(VAR_5);
  VAR_6->passive_dwell = FUNC_1(VAR_4);
  VAR_6->iteration_count = FUNC_1(1);
  VAR_6++;
 }
}
