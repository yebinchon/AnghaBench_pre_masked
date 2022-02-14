
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {scalar_t__ mac_type; int ledctl_default; int ledctl_mode1; int ledctl_mode2; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;






 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_10)
{
 u32 VAR_11;
 const u32 VAR_12 = 0x000000FF;
 const u32 VAR_13 = VAR_2;
 const u32 VAR_14 = VAR_1;
 u16 VAR_15, VAR_16, VAR_17;
 const u16 VAR_18 = 0x0F;

 FUNC_1("e1000_id_led_init");

 if (VAR_10->mac_type < VAR_9) {

  return VAR_3;
 }

 VAR_11 = FUNC_2(VAR_8);
 VAR_10->ledctl_default = VAR_11;
 VAR_10->ledctl_mode1 = VAR_10->ledctl_default;
 VAR_10->ledctl_mode2 = VAR_10->ledctl_default;

 if (FUNC_0(VAR_10, VAR_4, 1, &VAR_15) < 0) {
  FUNC_1("EEPROM Read Error\n");
  return -VAR_0;
 }

 if ((VAR_15 == VAR_6) ||
     (VAR_15 == VAR_7)) {
  VAR_15 = VAR_5;
 }

 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  VAR_17 = (VAR_15 >> (VAR_16 << 2)) & VAR_18;
  switch (VAR_17) {
  case 130:
  case 128:
  case 129:
   VAR_10->ledctl_mode1 &= ~(VAR_12 << (VAR_16 << 3));
   VAR_10->ledctl_mode1 |= VAR_13 << (VAR_16 << 3);
   break;
  case 133:
  case 131:
  case 132:
   VAR_10->ledctl_mode1 &= ~(VAR_12 << (VAR_16 << 3));
   VAR_10->ledctl_mode1 |= VAR_14 << (VAR_16 << 3);
   break;
  default:

   break;
  }
  switch (VAR_17) {
  case 134:
  case 128:
  case 131:
   VAR_10->ledctl_mode2 &= ~(VAR_12 << (VAR_16 << 3));
   VAR_10->ledctl_mode2 |= VAR_13 << (VAR_16 << 3);
   break;
  case 135:
  case 129:
  case 132:
   VAR_10->ledctl_mode2 &= ~(VAR_12 << (VAR_16 << 3));
   VAR_10->ledctl_mode2 |= VAR_14 << (VAR_16 << 3);
   break;
  default:

   break;
  }
 }
 return VAR_3;
}
