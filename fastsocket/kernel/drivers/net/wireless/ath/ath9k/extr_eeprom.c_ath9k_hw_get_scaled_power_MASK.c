
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct ath_hw {int txchainmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

u16 FUNC_1(struct ath_hw *VAR_2, u16 VAR_3,
         u8 VAR_4)
{
 u16 VAR_5 = VAR_4;





 switch (FUNC_0(VAR_2->txchainmask)) {
 case 1:
  break;
 case 2:
  VAR_5 += VAR_1;
  break;
 case 3:
  VAR_5 += VAR_0;
  break;
 }

 if (VAR_3 > VAR_5)
  VAR_3 -= VAR_5;
 else
  VAR_3 = 0;

 return VAR_3;
}
