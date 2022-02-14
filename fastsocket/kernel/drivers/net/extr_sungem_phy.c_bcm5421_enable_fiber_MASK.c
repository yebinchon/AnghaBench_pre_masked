
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phy {int autoneg; } ;


 int VAR_0 ;
 int FUNC_0 (struct mii_phy*,int,int) ;

__attribute__((used)) static int FUNC_1(struct mii_phy* VAR_1, int VAR_2)
{

 FUNC_0(VAR_1, VAR_0, 0x9020);

 FUNC_0(VAR_1, VAR_0, 0x945f);

 if (!VAR_2) {

  FUNC_0(VAR_1, VAR_0, 0xfc01);
  FUNC_0(VAR_1, 0x0b, 0x0004);
 }

 VAR_1->autoneg = VAR_2;

 return 0;
}
