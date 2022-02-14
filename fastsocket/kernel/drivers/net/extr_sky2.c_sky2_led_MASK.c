
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {unsigned int port; int phy_lock; struct sky2_hw* hw; } ;
struct sky2_hw {scalar_t__ chip_id; } ;
typedef enum led_mode { ____Placeholder_led_mode } led_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_11 (struct sky2_hw*,unsigned int,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct sky2_port *VAR_6, enum led_mode VAR_7)
{
 struct sky2_hw *VAR_8 = VAR_6->hw;
 unsigned VAR_9 = VAR_6->port;

 FUNC_12(&VAR_6->phy_lock);
 if (VAR_8->chip_id == VAR_0 ||
     VAR_8->chip_id == VAR_1 ||
     VAR_8->chip_id == VAR_2) {
  u16 VAR_10;
  VAR_10 = FUNC_10(VAR_8, VAR_9, VAR_3);
  FUNC_11(VAR_8, VAR_9, VAR_3, 3);

  switch (VAR_7) {
  case 129:
   FUNC_11(VAR_8, VAR_9, VAR_5,
         FUNC_1(8) |
         FUNC_0(8) |
         FUNC_3(8) |
         FUNC_2(8));
   break;
  case 128:
   FUNC_11(VAR_8, VAR_9, VAR_5,
         FUNC_1(9) |
         FUNC_0(9) |
         FUNC_3(9) |
         FUNC_2(9));
   break;
  case 131:
   FUNC_11(VAR_8, VAR_9, VAR_5,
         FUNC_1(0xa) |
         FUNC_0(0xa) |
         FUNC_3(0xa) |
         FUNC_2(0xa));
   break;
  case 130:
   FUNC_11(VAR_8, VAR_9, VAR_5,
         FUNC_1(1) |
         FUNC_0(8) |
         FUNC_3(7) |
         FUNC_2(7));
  }

  FUNC_11(VAR_8, VAR_9, VAR_3, VAR_10);
 } else
  FUNC_11(VAR_8, VAR_9, VAR_4,
         FUNC_7(VAR_7) |
         FUNC_4(VAR_7) |
         FUNC_5(VAR_7) |
         FUNC_6(VAR_7) |
         FUNC_8(VAR_7) |
         FUNC_9(VAR_7));

 FUNC_13(&VAR_6->phy_lock);
}
