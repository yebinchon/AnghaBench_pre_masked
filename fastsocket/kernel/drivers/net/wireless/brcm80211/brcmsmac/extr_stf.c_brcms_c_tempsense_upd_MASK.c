
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_c_info {TYPE_1__* stf; TYPE_2__* band; } ;
struct TYPE_4__ {struct brcms_phy_pub* pi; } ;
struct TYPE_3__ {int txchain; int hw_txchain; } ;


 int FUNC_0 (struct brcms_c_info*,int,int) ;
 int FUNC_1 (struct brcms_phy_pub*) ;

void FUNC_2(struct brcms_c_info *VAR_0)
{
 struct brcms_phy_pub *VAR_1 = VAR_0->band->pi;
 uint VAR_2, VAR_3;



 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = VAR_2 & 0xf;

 if (VAR_0->stf->txchain == VAR_0->stf->hw_txchain) {
  if (VAR_3 && (VAR_3 < VAR_0->stf->hw_txchain))

   FUNC_0(VAR_0, VAR_3, 1);
 } else if (VAR_0->stf->txchain < VAR_0->stf->hw_txchain) {
  if (VAR_3 == VAR_0->stf->hw_txchain)

   FUNC_0(VAR_0, VAR_3, 1);
 }
}
