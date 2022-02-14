
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct phytbl_info {int tbl_id; int tbl_offset; int tbl_width; int tbl_len; scalar_t__ tbl_ptr; } ;
struct brcms_phy {TYPE_1__* sh; } ;
struct TYPE_2__ {scalar_t__ chip; int chiprev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct brcms_phy*,int) ;
 int FUNC_1 (struct brcms_phy*,int,int) ;

void
FUNC_2(struct brcms_phy *VAR_1, const struct phytbl_info *VAR_2,
     u16 VAR_3, u16 VAR_4, u16 VAR_5)
{
 uint VAR_6;
 uint VAR_7 = VAR_2->tbl_id;
 uint VAR_8 = VAR_2->tbl_offset;
 uint VAR_9 = VAR_2->tbl_width;
 u8 *VAR_10 = (u8 *)VAR_2->tbl_ptr;
 u16 *VAR_11 = (u16 *)VAR_2->tbl_ptr;
 u32 *VAR_12 = (u32 *)VAR_2->tbl_ptr;

 FUNC_1(VAR_1, VAR_3, (VAR_7 << 10) | VAR_8);

 for (VAR_6 = 0; VAR_6 < VAR_2->tbl_len; VAR_6++) {

  if ((VAR_1->sh->chip == VAR_0) &&
      (VAR_1->sh->chiprev == 1)) {
   (void)FUNC_0(VAR_1, VAR_5);

   FUNC_1(VAR_1, VAR_3,
          (VAR_7 << 10) | (VAR_8 + VAR_6));
  }

  if (VAR_9 == 32) {
   VAR_12[VAR_6] = FUNC_0(VAR_1, VAR_5);
   VAR_12[VAR_6] |= (FUNC_0(VAR_1, VAR_4) << 16);
  } else if (VAR_9 == 16) {
   VAR_11[VAR_6] = FUNC_0(VAR_1, VAR_5);
  } else {
   VAR_10[VAR_6] = (u8) FUNC_0(VAR_1, VAR_5);
  }
 }
}
