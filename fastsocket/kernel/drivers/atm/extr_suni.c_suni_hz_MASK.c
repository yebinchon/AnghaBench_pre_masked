
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k_sonet_stats {int dummy; } ;
struct suni_priv {struct k_sonet_stats sonet_stats; struct atm_dev* dev; struct suni_priv* next; } ;
struct atm_dev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 struct suni_priv* VAR_31 ;
 int VAR_32 ;
 int FUNC_4 (int) ;
 int VAR_33 ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_34)
{
 struct suni_priv *VAR_35;
 struct atm_dev *VAR_36;
 struct k_sonet_stats *VAR_37;

 for (VAR_35 = VAR_31; VAR_35; VAR_35 = VAR_35->next) {
  VAR_36 = VAR_35->dev;
  VAR_37 = &VAR_35->sonet_stats;
  FUNC_2(0,VAR_1);
  FUNC_4(1);
  FUNC_0(VAR_30,(FUNC_1(VAR_17) & 0xff) |
      ((FUNC_1(VAR_18) & 0xff) << 8));
  FUNC_0(VAR_24,(FUNC_1(VAR_8) & 0xff) |
      ((FUNC_1(VAR_7) & 0xff) << 8) |
      ((FUNC_1(VAR_9) & 0xf) << 16));
  FUNC_0(VAR_26,(FUNC_1(VAR_13) & 0xff) |
      ((FUNC_1(VAR_14) & 0xff) << 8));
  FUNC_0(VAR_25,(FUNC_1(VAR_11) & 0xff) |
      ((FUNC_1(VAR_10) & 0xff) << 8) |
      ((FUNC_1(VAR_12) & 0xf) << 16));
  FUNC_0(VAR_27,(FUNC_1(VAR_15) & 0xff) |
      ((FUNC_1(VAR_16) & 0xff) << 8));
  FUNC_0(VAR_22,FUNC_1(VAR_2) & 0xff);
  FUNC_0(VAR_33,FUNC_1(VAR_6) & 0xff);
  FUNC_0(VAR_29,(FUNC_1(VAR_4) & 0xff) |
      ((FUNC_1(VAR_3) & 0xff) << 8) |
      ((FUNC_1(VAR_5) & 7) << 16));
  FUNC_0(VAR_32,(FUNC_1(VAR_20) & 0xff) |
      ((FUNC_1(VAR_19) & 0xff) << 8) |
      ((FUNC_1(VAR_21) & 7) << 16));
 }
 if (VAR_34) FUNC_3(&VAR_28,VAR_23+VAR_0);
}
