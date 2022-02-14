
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_get_stat {int * stats; TYPE_1__ header; } ;
struct ieee80211_low_level_stats {void* dot11RTSSuccessCount; void* dot11FCSErrorCount; void* dot11RTSFailureCount; void* dot11ACKFailureCount; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_cmd_get_stat*) ;
 struct mwl8k_cmd_get_stat* FUNC_2 (int,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_7,
         struct ieee80211_low_level_stats *VAR_8)
{
 struct mwl8k_cmd_get_stat *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_9->header.code = FUNC_0(VAR_2);
 VAR_9->header.length = FUNC_0(sizeof(*VAR_9));

 VAR_10 = FUNC_4(VAR_7, &VAR_9->header);
 if (!VAR_10) {
  VAR_8->dot11ACKFailureCount =
   FUNC_3(VAR_9->stats[VAR_3]);
  VAR_8->dot11RTSFailureCount =
   FUNC_3(VAR_9->stats[VAR_5]);
  VAR_8->dot11FCSErrorCount =
   FUNC_3(VAR_9->stats[VAR_4]);
  VAR_8->dot11RTSSuccessCount =
   FUNC_3(VAR_9->stats[VAR_6]);
 }
 FUNC_1(VAR_9);

 return VAR_10;
}
