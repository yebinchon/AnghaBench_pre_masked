
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ixp4xx_irq_type { ____Placeholder_ixp4xx_irq_type } ixp4xx_irq_type ;


 int VAR_0 ;





 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
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
 int FUNC_0 (int,int ) ;
 int* VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_16, unsigned int VAR_17)
{
 int VAR_18 = VAR_14[VAR_16];
 u32 VAR_19;
 enum ixp4xx_irq_type VAR_20;
 volatile u32 *VAR_21;




 if (VAR_18 < 0)
  return -VAR_0;

 switch (VAR_17){
 case 132:
  VAR_19 = VAR_11;
  VAR_20 = VAR_12;
  break;
 case 130:
  VAR_19 = VAR_9;
  VAR_20 = VAR_12;
  break;
 case 131:
  VAR_19 = VAR_8;
  VAR_20 = VAR_12;
  break;
 case 129:
  VAR_19 = VAR_5;
  VAR_20 = VAR_13;
  break;
 case 128:
  VAR_19 = VAR_6;
  VAR_20 = VAR_13;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_20 == VAR_12)
  VAR_15 |= (1 << VAR_16);
 else
  VAR_15 &= ~(1 << VAR_16);

 if (VAR_18 >= 8) {
  VAR_18 -= 8;
  VAR_21 = VAR_3;
 } else {
  VAR_21 = VAR_2;
 }


 *VAR_21 &= ~(VAR_7 <<
       (VAR_18 * VAR_10));

 *VAR_1 = (1 << VAR_18);


 *VAR_21 |= (VAR_19 << (VAR_18 * VAR_10));


 FUNC_0(VAR_14[VAR_16], VAR_4);

 return 0;
}
