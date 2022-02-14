
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ath_rate_table {scalar_t__ probe_interval; TYPE_1__* info; } ;
struct ath_rate_priv {size_t max_valid_rate; size_t* valid_rate_index; size_t rate_max_phy; size_t* per; scalar_t__ probe_time; int hw_maxretry_pktcnt; size_t probe_rate; int rate_table_size; int ht_cap; struct ath_rate_table* rate_table; } ;
typedef size_t int8_t ;
struct TYPE_2__ {int user_ratekbps; int rate_flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct ath_rate_table const*,struct ath_rate_priv*,size_t,size_t*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static u8 FUNC_6(struct ath_rate_priv *VAR_3,
     int *VAR_4)
{
 const struct ath_rate_table *VAR_5 = VAR_3->rate_table;
 u32 VAR_6, VAR_7, VAR_8;
 u8 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int8_t VAR_14 = 0;

 VAR_8 = FUNC_5(VAR_2);
 *VAR_4 = 0;
 VAR_6 = 0;
 VAR_12 = VAR_3->max_valid_rate-1;
 VAR_13 = 0;
 VAR_11 = VAR_13;





 for (VAR_14 = VAR_12; VAR_14 >= VAR_13 ; VAR_14--) {
  u8 VAR_15;

  VAR_9 = VAR_3->valid_rate_index[VAR_14];
  if (VAR_9 > VAR_3->rate_max_phy)
   continue;
  VAR_15 = VAR_3->per[VAR_9];
  if (VAR_15 < 12)
   VAR_15 = 12;

  VAR_7 = VAR_5->info[VAR_9].user_ratekbps *
   (100 - VAR_15);

  if (VAR_6 <= VAR_7) {
   VAR_6 = VAR_7;
   VAR_11 = VAR_9;
  }
 }

 VAR_9 = VAR_11;






 if (VAR_9 >= VAR_3->rate_max_phy) {
  VAR_9 = VAR_3->rate_max_phy;


  if (FUNC_4(VAR_5,
     VAR_3, VAR_9, &VAR_10) &&
      (VAR_8 - VAR_3->probe_time >
       VAR_5->probe_interval) &&
      (VAR_3->hw_maxretry_pktcnt >= 1)) {
   VAR_9 = VAR_10;
   VAR_3->probe_rate = VAR_9;
   VAR_3->probe_time = VAR_8;
   VAR_3->hw_maxretry_pktcnt = 0;
   *VAR_4 = 1;
  }
 }

 if (VAR_9 > (VAR_3->rate_table_size - 1))
  VAR_9 = VAR_3->rate_table_size - 1;

 if (FUNC_2(VAR_5->info[VAR_9].rate_flags) &&
     (VAR_3->ht_cap & VAR_1))
  return VAR_9;

 if (FUNC_0(VAR_5->info[VAR_9].rate_flags) &&
     (VAR_3->ht_cap & (VAR_0 | VAR_1)))
  return VAR_9;

 if (FUNC_1(VAR_5->info[VAR_9].rate_flags))
  return VAR_9;


 FUNC_3(1);

 VAR_9 = VAR_3->valid_rate_index[0];

 return VAR_9;
}
