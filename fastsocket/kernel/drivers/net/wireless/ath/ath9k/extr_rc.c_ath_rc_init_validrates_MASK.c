
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct ath_rate_table {size_t rate_cnt; TYPE_1__* info; } ;
struct ath_rate_priv {size_t* valid_phy_ratecnt; size_t** valid_phy_rateidx; int* valid_rate_index; int ht_cap; struct ath_rate_table* rate_table; } ;
struct TYPE_2__ {int rate_flags; size_t phy; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ,int ) ;

__attribute__((used)) static u8 FUNC_1(struct ath_rate_priv *VAR_1)
{
 const struct ath_rate_table *VAR_2 = VAR_1->rate_table;
 u8 VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->rate_cnt; VAR_3++) {
  if (VAR_2->info[VAR_3].rate_flags & VAR_0) {
   u32 VAR_5 = VAR_2->info[VAR_3].phy;
   u8 VAR_6 = 0;

   if (!FUNC_0(VAR_5, VAR_1->ht_cap, 0))
    continue;

   VAR_6 = VAR_1->valid_phy_ratecnt[VAR_5];

   VAR_1->valid_phy_rateidx[VAR_5][VAR_6] = VAR_3;
   VAR_1->valid_phy_ratecnt[VAR_5] += 1;
   VAR_1->valid_rate_index[VAR_3] = 1;
   VAR_4 = VAR_3;
  }
 }

 return VAR_4;
}
