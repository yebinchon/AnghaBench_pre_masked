
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ath_beacon_config {scalar_t__ beacon_interval; } ;
struct ath_softc {TYPE_2__* sc_ah; struct ath_beacon_config cur_beacon_conf; } ;
struct ath_common {int dummy; } ;
struct TYPE_4__ {int sw_beacon_response_time; } ;
struct TYPE_5__ {scalar_t__ opmode; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ath_common* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct ath_common*,int ,char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct ath_softc *VAR_4)
{
 struct ath_common *VAR_5 = FUNC_2(VAR_4->sc_ah);
 struct ath_beacon_config *VAR_6 = &VAR_4->cur_beacon_conf;
 u16 VAR_7;
 u32 VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (VAR_4->sc_ah->opmode != VAR_3) {
  FUNC_4(VAR_5, VAR_2, "slot 0, tsf: %llu\n",
   FUNC_3(VAR_4->sc_ah));
  return 0;
 }

 VAR_7 = VAR_6->beacon_interval ? : VAR_1;
 VAR_9 = FUNC_3(VAR_4->sc_ah);
 VAR_9 += FUNC_1(VAR_4->sc_ah->config.sw_beacon_response_time);
 VAR_8 = FUNC_0((VAR_9 * VAR_0) >>32, VAR_9 * VAR_0);
 VAR_10 = (VAR_8 % (VAR_7 * VAR_0)) / VAR_7;

 FUNC_4(VAR_5, VAR_2, "slot: %d tsf: %llu tsftu: %u\n",
  VAR_10, VAR_9, VAR_8 / VAR_0);

 return VAR_10;
}
