
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


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
 int FUNC_0 (int) ;
 int VAR_11 ;
 int FUNC_1 (int) ;





 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_12)
{
 u32 VAR_13;


 VAR_13 = FUNC_2(FUNC_1(0));
 VAR_13 |= (1 << 22);
 FUNC_3(FUNC_1(0), VAR_13);


 VAR_13 = FUNC_2(FUNC_1(1));
 VAR_13 |= (1 << 22);
 FUNC_3(FUNC_1(1), VAR_13);


 VAR_13 = FUNC_2(FUNC_0(0));
 VAR_13 &= ~(0xF << 27);
 switch (VAR_12->mac.type) {
 case 132:
 case 131:
  VAR_13 |= (1 << 23) | (1 << 24) | (1 << 25) | (1 << 26);
  break;
 case 129:
 case 128:
  VAR_13 |= (1 << 26);
  break;
 default:
  break;
 }
 FUNC_3(FUNC_0(0), VAR_13);


 VAR_13 = FUNC_2(FUNC_0(1));
 switch (VAR_12->mac.type) {
 case 132:
 case 131:
  VAR_13 &= ~((1 << 29) | (1 << 30));
  VAR_13 |= (1 << 22) | (1 << 24) | (1 << 25) | (1 << 26);
  if (FUNC_2(VAR_11) & VAR_6)
   VAR_13 &= ~(1 << 28);
  else
   VAR_13 |= (1 << 28);
  FUNC_3(FUNC_0(1), VAR_13);
  break;
 default:
  break;
 }


 switch (VAR_12->mac.type) {
 case 130:
 case 129:
 case 128:
  VAR_13 = FUNC_2(VAR_0);
  VAR_13 &= ~(1 << 29);
  FUNC_3(VAR_0, VAR_13);
  break;
 default:
  break;
 }


 switch (VAR_12->mac.type) {
 case 130:
 case 129:
 case 128:
  VAR_13 = FUNC_2(VAR_1);
  VAR_13 &= ~(1 << 23);
  VAR_13 |= (1 << 22);
  FUNC_3(VAR_1, VAR_13);
  break;
 default:
  break;
 }

 if (VAR_12->mac.type == 132) {
  VAR_13 = FUNC_2(VAR_9);
  VAR_13 |= VAR_3;
  FUNC_3(VAR_9, VAR_13);
 }




 if ((VAR_12->mac.type == 132) || (VAR_12->mac.type == 131)) {
  VAR_13 = FUNC_2(VAR_1);
  VAR_13 &= ~VAR_2;
  FUNC_3(VAR_1, VAR_13);
 }




 if (VAR_12->mac.type <= 130) {
  VAR_13 = FUNC_2(VAR_10);
  VAR_13 |= (VAR_4 | VAR_5);
  FUNC_3(VAR_10, VAR_13);
 }


 switch (VAR_12->mac.type) {
 case 129:
 case 128:
  VAR_13 = FUNC_2(VAR_7);
  VAR_13 |= (1 << 22);
  FUNC_3(VAR_7, VAR_13);







  VAR_13 = FUNC_2(VAR_8);
  VAR_13 |= 1;
  FUNC_3(VAR_8, VAR_13);
  break;
 default:
  break;
 }
}
