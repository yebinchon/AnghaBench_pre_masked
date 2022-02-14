
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct htc_beacon_config {scalar_t__ beacon_interval; } ;
struct ath_common {int dummy; } ;
struct TYPE_7__ {scalar_t__ bmiss_cnt; } ;
struct ath9k_htc_priv {TYPE_2__ cur_beacon_conf; TYPE_3__* ah; int op_flags; } ;
typedef enum ath9k_int { ____Placeholder_ath9k_int } ath9k_int ;
typedef int __be32 ;
struct TYPE_6__ {scalar_t__ sw_beacon_response_time; } ;
struct TYPE_8__ {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 struct ath_common* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct ath_common*,int ,char*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct ath9k_htc_priv *VAR_8,
       struct htc_beacon_config *VAR_9)
{
 struct ath_common *VAR_10 = FUNC_5(VAR_8->ah);
 enum ath9k_int VAR_11 = 0;
 u32 VAR_12, VAR_13, VAR_14;
 __be32 VAR_15 = 0;
 int VAR_16 __attribute__ ((unused));
 u8 VAR_17;
 u64 VAR_18;

 VAR_13 = VAR_9->beacon_interval;
 VAR_12 = VAR_13;




 VAR_18 = FUNC_6(VAR_8->ah);
 VAR_14 = FUNC_0(VAR_18 >> 32, VAR_18) + VAR_3;
 do {
  VAR_12 += VAR_13;
 } while (VAR_12 < VAR_14);




 if (VAR_13 > VAR_2)
  VAR_8->ah->config.sw_beacon_response_time = VAR_2;
 else
  VAR_8->ah->config.sw_beacon_response_time = VAR_4;

 if (FUNC_9(VAR_5, &VAR_8->op_flags))
  VAR_11 |= VAR_0;

 FUNC_7(VAR_10, VAR_1,
  "IBSS Beacon config, intval: %d, nexttbtt: %u, resp_time: %d, imask: 0x%x\n",
  VAR_9->beacon_interval, VAR_12,
  VAR_8->ah->config.sw_beacon_response_time, VAR_11);

 FUNC_2(VAR_6);
 FUNC_4(VAR_8->ah, FUNC_1(VAR_12), FUNC_1(VAR_13));
 VAR_8->cur_beacon_conf.bmiss_cnt = 0;
 VAR_15 = FUNC_8(VAR_11);
 FUNC_3(VAR_7, &VAR_15);
}
