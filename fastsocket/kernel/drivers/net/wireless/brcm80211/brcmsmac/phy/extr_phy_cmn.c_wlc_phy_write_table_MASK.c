
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int const u8 ;
typedef int u32 ;
typedef int const u16 ;
struct phytbl_info {int tbl_id; int tbl_offset; int tbl_width; int tbl_len; scalar_t__ tbl_ptr; } ;
struct brcms_phy {TYPE_1__* sh; } ;
struct TYPE_2__ {scalar_t__ chip; int chiprev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_phy*,int const) ;
 int FUNC_1 (struct brcms_phy*,int const,int const) ;

void
FUNC_2(struct brcms_phy *VAR_2, const struct phytbl_info *VAR_3,
      u16 VAR_4, u16 VAR_5, u16 VAR_6)
{
 uint VAR_7;
 uint VAR_8 = VAR_3->tbl_id;
 uint VAR_9 = VAR_3->tbl_offset;
 uint VAR_10 = VAR_3->tbl_width;
 const u8 *VAR_11 = (const u8 *)VAR_3->tbl_ptr;
 const u16 *VAR_12 = (const u16 *)VAR_3->tbl_ptr;
 const u32 *VAR_13 = (const u32 *)VAR_3->tbl_ptr;

 FUNC_1(VAR_2, VAR_4, (VAR_8 << 10) | VAR_9);

 for (VAR_7 = 0; VAR_7 < VAR_3->tbl_len; VAR_7++) {

  if ((VAR_2->sh->chip == VAR_0) &&
      (VAR_2->sh->chiprev == 1) &&
      (VAR_8 == VAR_1)) {
   FUNC_0(VAR_2, VAR_6);

   FUNC_1(VAR_2, VAR_4,
          (VAR_8 << 10) | (VAR_9 + VAR_7));
  }

  if (VAR_10 == 32) {
   FUNC_1(VAR_2, VAR_5,
          (u16) (VAR_13[VAR_7] >> 16));
   FUNC_1(VAR_2, VAR_6, (u16) VAR_13[VAR_7]);
  } else if (VAR_10 == 16) {
   FUNC_1(VAR_2, VAR_6, VAR_12[VAR_7]);
  } else {
   FUNC_1(VAR_2, VAR_6, VAR_11[VAR_7]);
  }
 }
}
