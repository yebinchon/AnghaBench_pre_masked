
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef void* u16 ;
struct brcms_phy {int tbl_save_id; int tbl_save_offset; void* tbl_addr; TYPE_1__* sh; void* tbl_data_lo; void* tbl_data_hi; } ;
struct TYPE_2__ {scalar_t__ chip; int chiprev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct brcms_phy*,void*,int) ;

void
FUNC_1(struct brcms_phy *VAR_1, uint VAR_2, uint VAR_3,
     u16 VAR_4, u16 VAR_5, u16 VAR_6)
{
 FUNC_0(VAR_1, VAR_4, (VAR_2 << 10) | VAR_3);

 VAR_1->tbl_data_hi = VAR_5;
 VAR_1->tbl_data_lo = VAR_6;

 if (VAR_1->sh->chip == VAR_0 &&
     VAR_1->sh->chiprev == 1) {
  VAR_1->tbl_addr = VAR_4;
  VAR_1->tbl_save_id = VAR_2;
  VAR_1->tbl_save_offset = VAR_3;
 }
}
