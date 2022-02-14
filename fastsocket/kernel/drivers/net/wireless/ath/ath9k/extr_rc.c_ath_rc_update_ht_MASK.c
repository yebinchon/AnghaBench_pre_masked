
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ieee80211_tx_info {int dummy; } ;
struct ath_softc {int dummy; } ;
struct ath_rate_table {int rate_cnt; scalar_t__ probe_interval; TYPE_1__* info; } ;
struct ath_rate_priv {int rate_table_size; int* per; size_t rate_max_phy; scalar_t__ per_down_time; scalar_t__ probe_time; struct ath_rate_table* rate_table; } ;
struct TYPE_2__ {scalar_t__ ratekbps; } ;


 int FUNC_0 (struct ath_rate_priv*,int,int,int,int) ;
 int FUNC_1 (struct ath_rate_priv*,int,size_t*) ;
 int FUNC_2 (struct ath_softc*,struct ath_rate_table const*,struct ath_rate_priv*,struct ieee80211_tx_info*,int,int,int,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_1,
        struct ath_rate_priv *VAR_2,
        struct ieee80211_tx_info *VAR_3,
        int VAR_4, int VAR_5, int VAR_6)
{
 u32 VAR_7 = FUNC_3(VAR_0);
 int VAR_8;
 u8 VAR_9;
 const struct ath_rate_table *VAR_10 = VAR_2->rate_table;
 int VAR_11 = VAR_2->rate_table_size;

 if ((VAR_4 < 0) || (VAR_4 > VAR_10->rate_cnt))
  return;

 VAR_9 = VAR_2->per[VAR_4];


 FUNC_2(VAR_1, VAR_10, VAR_2,
     VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7);





 if (VAR_2->per[VAR_4] >= 55 && VAR_4 > 0 &&
     VAR_10->info[VAR_4].ratekbps <=
     VAR_10->info[VAR_2->rate_max_phy].ratekbps) {
  FUNC_1(VAR_2, (u8)VAR_4,
         &VAR_2->rate_max_phy);


  VAR_2->probe_time = VAR_7;
 }



 if (VAR_2->per[VAR_4] < VAR_9) {
  for (VAR_8 = VAR_4 - 1; VAR_8 >= 0; VAR_8--) {

   if (VAR_2->per[VAR_8] >
       VAR_2->per[VAR_8+1]) {
    VAR_2->per[VAR_8] =
     VAR_2->per[VAR_8+1];
   }
  }
 }


 for (VAR_8 = VAR_4; VAR_8 < VAR_11 - 1; VAR_8++) {
  if (VAR_2->per[VAR_8+1] <
      VAR_2->per[VAR_8])
   VAR_2->per[VAR_8+1] =
    VAR_2->per[VAR_8];
 }



 if (VAR_7 - VAR_2->per_down_time >=
     VAR_10->probe_interval) {
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
   VAR_2->per[VAR_8] =
    7 * VAR_2->per[VAR_8] / 8;
  }

  VAR_2->per_down_time = VAR_7;
 }

 FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6,
          VAR_2->per[VAR_4]);

}
