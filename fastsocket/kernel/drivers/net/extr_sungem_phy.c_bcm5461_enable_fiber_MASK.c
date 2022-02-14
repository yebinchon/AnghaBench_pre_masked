
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phy {int autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mii_phy* VAR_3, int VAR_4)
{

 FUNC_0(VAR_3, VAR_2, 0xfc0b);

 if (VAR_4) {

  FUNC_0(VAR_3, VAR_0, 0x01e0);
  FUNC_0(VAR_3, VAR_1, 0x1140);
 } else {

  FUNC_0(VAR_3, VAR_1, 0x0140);
 }

 VAR_3->autoneg = VAR_4;

 return 0;
}
