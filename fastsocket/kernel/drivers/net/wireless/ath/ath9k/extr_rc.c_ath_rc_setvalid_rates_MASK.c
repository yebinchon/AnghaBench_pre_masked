
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct ath_rateset {size_t rs_nrates; size_t* rs_rates; } ;
struct ath_rate_table {size_t rate_cnt; TYPE_1__* info; } ;
struct ath_rate_priv {size_t ht_cap; size_t* valid_phy_ratecnt; size_t** valid_phy_rateidx; int* valid_rate_index; struct ath_rateset neg_ht_rates; struct ath_rateset neg_rates; struct ath_rate_table* rate_table; } ;
struct TYPE_2__ {size_t phy; size_t dot11rate; int rate_flags; } ;


 int FUNC_0 (size_t,size_t,int ,size_t,size_t) ;
 int FUNC_1 (size_t,size_t,int ,size_t,size_t) ;
 int FUNC_2 (size_t,size_t,int ) ;
 size_t FUNC_3 (size_t,size_t) ;

__attribute__((used)) static u8 FUNC_4(struct ath_rate_priv *VAR_0, bool VAR_1)
{
 const struct ath_rate_table *VAR_2 = VAR_0->rate_table;
 struct ath_rateset *VAR_3;
 u32 VAR_4, VAR_5 = VAR_0->ht_cap;
 u16 VAR_6;
 u8 VAR_7, VAR_8, VAR_9 = 0, VAR_10, VAR_11, VAR_12;

 if (VAR_1)
  VAR_3 = &VAR_0->neg_rates;
 else
  VAR_3 = &VAR_0->neg_ht_rates;

 for (VAR_7 = 0; VAR_7 < VAR_3->rs_nrates; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_2->rate_cnt; VAR_8++) {
   VAR_4 = VAR_2->info[VAR_8].phy;
   VAR_6 = VAR_2->info[VAR_8].rate_flags;
   VAR_10 = VAR_3->rs_rates[VAR_7];
   VAR_11 = VAR_2->info[VAR_8].dot11rate;

   if (VAR_1 &&
       !FUNC_1(VAR_10, VAR_11,
       VAR_6, VAR_4, VAR_5))
    continue;

   if (!VAR_1 &&
       !FUNC_0(VAR_10, VAR_11,
          VAR_6, VAR_4, VAR_5))
    continue;

   if (!FUNC_2(VAR_4, VAR_5, 0))
    continue;

   VAR_12 = VAR_0->valid_phy_ratecnt[VAR_4];
   VAR_0->valid_phy_rateidx[VAR_4][VAR_12] = VAR_8;
   VAR_0->valid_phy_ratecnt[VAR_4] += 1;
   VAR_0->valid_rate_index[VAR_8] = 1;
   VAR_9 = FUNC_3(VAR_9, VAR_8);
  }
 }

 return VAR_9;
}
