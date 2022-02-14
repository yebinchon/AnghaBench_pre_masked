
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_vif_iter_data {int n_stas; int need_set_hw_addr; int * hw_macaddr; } ;
struct ath5k_hw {int nvifs; int opmode; int filter_flags; int lock; int hw; int assoc; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;




 unsigned int VAR_17 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ath5k_hw*) ;
 int FUNC_3 (struct ath5k_hw*,int,int) ;
 int FUNC_4 (struct ath5k_hw*,int) ;
 int VAR_18 ;
 int FUNC_5 (int ,int ,int ,struct ath5k_vif_iter_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct ieee80211_hw *VAR_19, unsigned int VAR_20,
         unsigned int *VAR_21, u64 VAR_22)
{





 struct ath5k_hw *VAR_23 = VAR_19->priv;
 u32 VAR_24[2], VAR_25;
 struct ath5k_vif_iter_data VAR_26;

 FUNC_6(&VAR_23->lock);

 VAR_24[0] = VAR_22;
 VAR_24[1] = VAR_22 >> 32;


 VAR_20 &= (VAR_15 | VAR_9 | VAR_12 | VAR_14 | VAR_11 | VAR_13 | VAR_10);
 *VAR_21 &= (VAR_15 | VAR_9 | VAR_12 | VAR_14 | VAR_11 | VAR_13 | VAR_10);




 VAR_25 = (FUNC_2(VAR_23) & (VAR_4)) |
  (VAR_7 | VAR_0 |
  VAR_3);

 if (VAR_20 & (VAR_15 | VAR_13)) {
  if (*VAR_21 & VAR_15)
   FUNC_1(VAR_8, VAR_23->status);
  else
   FUNC_0(VAR_8, VAR_23->status);
 }

 if (FUNC_8(VAR_8, VAR_23->status))
  VAR_25 |= VAR_6;


 if (*VAR_21 & VAR_9) {
  VAR_24[0] = ~0;
  VAR_24[1] = ~0;
 }


 if (*VAR_21 & (VAR_12 | VAR_14))
  VAR_25 |= VAR_4;



 if ((*VAR_21 & VAR_10) || (VAR_23->nvifs > 1))
  VAR_25 |= VAR_1;






 if (*VAR_21 & VAR_11)
  VAR_25 |= VAR_2;





 switch (VAR_23->opmode) {
 case 129:
  VAR_25 |= VAR_2 |
    VAR_1 |
    VAR_5 |
    VAR_6;
  break;
 case 130:
 case 131:
  VAR_25 |= VAR_5 |
    VAR_1;
  break;
 case 128:
  if (VAR_23->assoc)
   VAR_25 |= VAR_1;
 default:
  break;
 }

 VAR_26.hw_macaddr = ((void*)0);
 VAR_26.n_stas = 0;
 VAR_26.need_set_hw_addr = 0;
 FUNC_5(
  VAR_23->hw, VAR_16,
  VAR_18, &VAR_26);


 if (VAR_26.n_stas > 1) {




  VAR_25 |= VAR_6;
 }


 FUNC_4(VAR_23, VAR_25);


 FUNC_3(VAR_23, VAR_24[0], VAR_24[1]);


 VAR_23->filter_flags = VAR_25;

 FUNC_7(&VAR_23->lock);
}
