
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ixp23xx_irq_type { ____Placeholder_ixp23xx_irq_type } ixp23xx_irq_type ;


 int VAR_0 ;
 unsigned int VAR_1 ;





 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_14, unsigned int VAR_15)
{
 int VAR_16 = VAR_14 - VAR_1 + 6;
 u32 VAR_17;
 enum ixp23xx_irq_type VAR_18;
 volatile u32 *VAR_19;




 if (VAR_16 < 6 || VAR_16 > 15)
  return -VAR_0;

 switch (VAR_15) {
 case 132:
  VAR_17 = VAR_11;
  VAR_18 = VAR_12;
  break;
 case 130:
  VAR_17 = VAR_9;
  VAR_18 = VAR_12;
  break;
 case 131:
  VAR_17 = VAR_7;
  VAR_18 = VAR_12;
  break;
 case 129:
  VAR_17 = VAR_5;
  VAR_18 = VAR_13;
  break;
 case 128:
  VAR_17 = VAR_6;
  VAR_18 = VAR_13;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_14, VAR_18);

 if (VAR_16 >= 8) {
  VAR_16 -= 8;
  VAR_19 = (volatile u32 *)VAR_4;
 } else {
  VAR_19 = (volatile u32 *)VAR_3;
 }




 *VAR_2 = (1 << VAR_16);


 *VAR_19 &= ~(VAR_8 <<
   (VAR_16 * VAR_10));


 *VAR_19 |= (VAR_17 << (VAR_16 * VAR_10));

 return 0;
}
