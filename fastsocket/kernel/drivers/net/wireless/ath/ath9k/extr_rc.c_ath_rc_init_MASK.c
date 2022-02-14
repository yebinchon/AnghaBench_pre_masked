
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ath_softc {int sc_ah; } ;
struct ath_rateset {int rs_nrates; } ;
struct ath_rate_table {int initial_ratemax; } ;
struct ath_rate_priv {size_t rate_table_size; size_t* valid_phy_ratecnt; int ht_cap; size_t max_valid_rate; scalar_t__* valid_rate_index; scalar_t__ rate_max_phy; scalar_t__** valid_phy_rateidx; scalar_t__* per; struct ath_rateset neg_rates; struct ath_rate_table* rate_table; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,int) ;
 size_t FUNC_3 (struct ath_rate_priv*) ;
 size_t FUNC_4 (struct ath_rate_priv*,int) ;
 int FUNC_5 (struct ath_rate_priv*) ;
 int FUNC_6 (size_t,int ,int) ;
 size_t FUNC_7 (size_t,size_t) ;

__attribute__((used)) static void FUNC_8(struct ath_softc *VAR_4,
   struct ath_rate_priv *VAR_5)
{
 const struct ath_rate_table *VAR_6 = VAR_5->rate_table;
 struct ath_rateset *VAR_7 = &VAR_5->neg_rates;
 struct ath_common *VAR_8 = FUNC_1(VAR_4->sc_ah);
 u8 VAR_9, VAR_10, VAR_11, VAR_12 = 0, VAR_13 = 0;

 VAR_5->rate_table_size = VAR_1;

 for (VAR_9 = 0 ; VAR_9 < VAR_5->rate_table_size; VAR_9++) {
  VAR_5->per[VAR_9] = 0;
  VAR_5->valid_rate_index[VAR_9] = 0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
   VAR_5->valid_phy_rateidx[VAR_9][VAR_10] = 0;
  VAR_5->valid_phy_ratecnt[VAR_9] = 0;
 }

 if (!VAR_7->rs_nrates) {
  VAR_12 = FUNC_3(VAR_5);
 } else {
  VAR_12 = FUNC_4(VAR_5, 1);

  if (VAR_5->ht_cap & VAR_2)
   VAR_13 = FUNC_4(VAR_5, 0);

  VAR_12 = FUNC_7(VAR_12, VAR_13);
 }

 VAR_5->rate_table_size = VAR_12 + 1;
 VAR_5->rate_max_phy = 0;
 FUNC_0(VAR_5->rate_table_size > VAR_1);

 for (VAR_9 = 0, VAR_11 = 0; VAR_9 < VAR_3; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_5->valid_phy_ratecnt[VAR_9]; VAR_10++) {
   VAR_5->valid_rate_index[VAR_11++] =
    VAR_5->valid_phy_rateidx[VAR_9][VAR_10];
  }

  if (!FUNC_6(VAR_9, VAR_6->initial_ratemax, 1) ||
      !VAR_5->valid_phy_ratecnt[VAR_9])
   continue;

  VAR_5->rate_max_phy = VAR_5->valid_phy_rateidx[VAR_9][VAR_10-1];
 }
 FUNC_0(VAR_5->rate_table_size > VAR_1);
 FUNC_0(VAR_11 > VAR_1);

 VAR_5->max_valid_rate = VAR_11;
 FUNC_5(VAR_5);
 VAR_5->rate_max_phy = (VAR_11 > 4) ?
  VAR_5->valid_rate_index[VAR_11-4] :
  VAR_5->valid_rate_index[VAR_11-1];

 FUNC_2(VAR_8, VAR_0, "RC Initialized with capabilities: 0x%x\n",
  VAR_5->ht_cap);
}
