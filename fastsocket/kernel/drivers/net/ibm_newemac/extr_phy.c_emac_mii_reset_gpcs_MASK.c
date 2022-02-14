
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phy {scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mii_phy*,int) ;
 int FUNC_1 (struct mii_phy*,int,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct mii_phy *VAR_5)
{
 int VAR_6;
 int VAR_7 = 10000;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 VAR_6 &= ~(VAR_1 | VAR_0);
 VAR_6 |= VAR_2;
 FUNC_1(VAR_5, VAR_3, VAR_6);

 FUNC_2(300);

 while (--VAR_7) {
  VAR_6 = FUNC_0(VAR_5, VAR_3);
  if (VAR_6 >= 0 && (VAR_6 & VAR_2) == 0)
   break;
  FUNC_2(10);
 }
 if ((VAR_6 & VAR_1) && VAR_7 > 0)
  FUNC_1(VAR_5, VAR_3, VAR_6 & ~VAR_1);

 if (VAR_7 > 0 && VAR_5->mode == VAR_4) {

  FUNC_1(VAR_5, 0x04, 0x8120);
  FUNC_1(VAR_5, 0x07, 0x2801);
  FUNC_1(VAR_5, 0x00, 0x0140);
 }

 return VAR_7 <= 0;
}
