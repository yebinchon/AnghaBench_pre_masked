
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct e1000_mac_info {int forced_speed_duplex; } ;
struct TYPE_2__ {int current_mode; } ;
struct e1000_hw {TYPE_1__ fc; struct e1000_mac_info mac; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_16,
          u16 *VAR_17)
{
 struct e1000_mac_info *VAR_18 = &VAR_16->mac;
 u32 VAR_19;


 VAR_16->fc.current_mode = VAR_15;


 VAR_19 = FUNC_2(VAR_2);
 VAR_19 |= (VAR_6 | VAR_5);
 VAR_19 &= ~VAR_9;


 VAR_19 &= ~VAR_3;


 *VAR_17 &= ~VAR_10;


 if (VAR_18->forced_speed_duplex & VAR_1) {
  VAR_19 &= ~VAR_4;
  *VAR_17 &= ~VAR_11;
  FUNC_0("Half Duplex\n");
 } else {
  VAR_19 |= VAR_4;
  *VAR_17 |= VAR_11;
  FUNC_0("Full Duplex\n");
 }


 if (VAR_18->forced_speed_duplex & VAR_0) {
  VAR_19 |= VAR_7;
  *VAR_17 |= VAR_13;
  *VAR_17 &= ~(VAR_14 | VAR_12);
  FUNC_0("Forcing 100mb\n");
 } else {
  VAR_19 &= ~(VAR_8 | VAR_7);
  *VAR_17 |= VAR_12;
  *VAR_17 &= ~(VAR_14 | VAR_13);
  FUNC_0("Forcing 10mb\n");
 }

 FUNC_1(VAR_16);

 FUNC_3(VAR_2, VAR_19);
}
