
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy {TYPE_1__* nphy_txpwrindex; } ;
struct TYPE_2__ {int index_internal; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct brcms_phy*,size_t) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;

u16 FUNC_2(struct brcms_phy *VAR_2)
{
 u16 VAR_3;
 u16 VAR_4[2];

 if (FUNC_1(VAR_2)) {
  VAR_4[0] = FUNC_0(VAR_2, VAR_0);
  VAR_4[1] = FUNC_0(VAR_2, VAR_1);

  VAR_3 = (VAR_4[0] << 8) | VAR_4[1];
 } else {
  VAR_3 = ((VAR_2->nphy_txpwrindex[VAR_0].index_internal & 0xff)
   << 8) |
   (VAR_2->nphy_txpwrindex[VAR_1].index_internal & 0xff);
 }

 return VAR_3;
}
