
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int port; int speed; struct skge_hw* hw; } ;
struct skge_hw {scalar_t__ chip_id; int phy_lock; int phy_type; } ;
typedef enum led_mode { ____Placeholder_led_mode } led_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (int,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_8 (struct skge_hw*,int,int ,int) ;
 int FUNC_9 (struct skge_hw*,int ,int) ;
 int FUNC_10 (struct skge_hw*,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct skge_hw*,int,int ,int ) ;

__attribute__((used)) static void FUNC_14(struct skge_port *VAR_27, enum led_mode VAR_28)
{
 struct skge_hw *VAR_29 = VAR_27->hw;
 int VAR_30 = VAR_27->port;

 FUNC_11(&VAR_29->phy_lock);
 if (VAR_29->chip_id == VAR_1) {
  switch (VAR_28) {
  case 130:
   if (VAR_29->phy_type == VAR_22)
    FUNC_13(VAR_29, VAR_30, VAR_11, VAR_12);
   else {
    FUNC_9(VAR_29, FUNC_7(VAR_30, VAR_26), 0);
    FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_24), VAR_3);
   }
   FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_8), VAR_6);
   FUNC_9(VAR_29, FUNC_7(VAR_30, VAR_21), 0);
   FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_19), VAR_3);
   break;

  case 129:
   FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_8), VAR_7);
   FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_8), VAR_5);

   FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_19), VAR_2);
   FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_24), VAR_2);

   break;

  case 128:
   FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_20), VAR_4);
   FUNC_9(VAR_29, FUNC_7(VAR_30, VAR_21), 100);
   FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_19), VAR_2);

   if (VAR_29->phy_type == VAR_22)
    FUNC_13(VAR_29, VAR_30, VAR_11, VAR_13);
   else {
    FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_25), VAR_4);
    FUNC_9(VAR_29, FUNC_7(VAR_30, VAR_26), 100);
    FUNC_10(VAR_29, FUNC_7(VAR_30, VAR_24), VAR_2);
   }

  }
 } else {
  switch (VAR_28) {
  case 130:
   FUNC_8(VAR_29, VAR_30, VAR_14, 0);
   FUNC_8(VAR_29, VAR_30, VAR_15,
         FUNC_4(VAR_9) |
         FUNC_1(VAR_9) |
         FUNC_2(VAR_9) |
         FUNC_3(VAR_9) |
         FUNC_5(VAR_9));
   break;
  case 129:
   FUNC_8(VAR_29, VAR_30, VAR_14,
         FUNC_6(VAR_18) |
         FUNC_0(VAR_0) |
         VAR_17 |
         VAR_16);

   FUNC_8(VAR_29, VAR_30, VAR_15,
         FUNC_5(VAR_9) |
         (VAR_27->speed == VAR_23 ?
          FUNC_2(VAR_10) : 0));
   break;
  case 128:
   FUNC_8(VAR_29, VAR_30, VAR_14, 0);
   FUNC_8(VAR_29, VAR_30, VAR_15,
         FUNC_4(VAR_10) |
         FUNC_1(VAR_10) |
         FUNC_2(VAR_10) |
         FUNC_3(VAR_10) |
         FUNC_5(VAR_10));
  }
 }
 FUNC_12(&VAR_29->phy_lock);
}
