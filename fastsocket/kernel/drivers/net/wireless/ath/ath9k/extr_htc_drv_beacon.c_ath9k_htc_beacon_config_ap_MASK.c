
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct htc_beacon_config {scalar_t__ beacon_interval; } ;
struct ath_common {int dummy; } ;
struct TYPE_8__ {scalar_t__ bmiss_cnt; } ;
struct ath9k_htc_priv {TYPE_2__ cur_beacon_conf; TYPE_3__* ah; int op_flags; } ;
typedef enum ath9k_int { ____Placeholder_ath9k_int } ath9k_int ;
typedef int __be32 ;
struct TYPE_7__ {scalar_t__ sw_beacon_response_time; } ;
struct TYPE_9__ {TYPE_1__ config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct ath9k_htc_priv*) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 struct ath_common* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct ath_common*,int ,char*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct ath9k_htc_priv *VAR_10,
           struct htc_beacon_config *VAR_11)
{
 struct ath_common *VAR_12 = FUNC_6(VAR_10->ah);
 enum ath9k_int VAR_13 = 0;
 u32 VAR_14, VAR_15, VAR_16;
 __be32 VAR_17 = 0;
 int VAR_18 __attribute__ ((unused));
 u8 VAR_19;
 u64 VAR_20;

 VAR_15 = VAR_11->beacon_interval;
 VAR_15 /= VAR_0;
 VAR_14 = VAR_15;





 if (VAR_15 > VAR_3)
  VAR_10->ah->config.sw_beacon_response_time = VAR_3;
 else
  VAR_10->ah->config.sw_beacon_response_time = VAR_5;

 if (FUNC_12(VAR_7, &VAR_10->op_flags)) {
  FUNC_8(VAR_10->ah);
  FUNC_10(VAR_7, &VAR_10->op_flags);
 } else {



  VAR_20 = FUNC_7(VAR_10->ah);
  VAR_16 = FUNC_0(VAR_20 >> 32, VAR_20) + VAR_4;
  do {
   VAR_14 += VAR_15;
  } while (VAR_14 < VAR_16);
 }

 if (FUNC_12(VAR_6, &VAR_10->op_flags))
  VAR_13 |= VAR_1;

 FUNC_9(VAR_12, VAR_2,
  "AP Beacon config, intval: %d, nexttbtt: %u, resp_time: %d imask: 0x%x\n",
  VAR_11->beacon_interval, VAR_14,
  VAR_10->ah->config.sw_beacon_response_time, VAR_13);

 FUNC_4(VAR_10);

 FUNC_2(VAR_8);
 FUNC_5(VAR_10->ah, FUNC_1(VAR_14), FUNC_1(VAR_15));
 VAR_10->cur_beacon_conf.bmiss_cnt = 0;
 VAR_17 = FUNC_11(VAR_13);
 FUNC_3(VAR_9, &VAR_17);
}
