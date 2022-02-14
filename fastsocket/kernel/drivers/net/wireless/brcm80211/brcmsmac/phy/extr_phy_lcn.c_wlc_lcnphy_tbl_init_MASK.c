
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef int u32 ;
typedef struct phytbl_info {int tbl_width; int* tbl_ptr; int tbl_len; int tbl_offset; void* tbl_id; } const phytbl_info ;
struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {TYPE_2__* sh; int radio_chanspec; TYPE_1__ pubpi; } ;
struct TYPE_4__ {int boardflags; int boardrev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_4 ;
 scalar_t__ FUNC_2 (int ,int) ;
 struct phytbl_info const VAR_5 ;
 struct phytbl_info const VAR_6 ;
 struct phytbl_info const VAR_7 ;
 struct phytbl_info const VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct phytbl_info const* VAR_11 ;
 size_t VAR_12 ;
 struct phytbl_info const* VAR_13 ;
 int VAR_14 ;
 struct phytbl_info const* VAR_15 ;
 int VAR_16 ;
 struct phytbl_info const* VAR_17 ;
 struct phytbl_info const* VAR_18 ;
 int FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*,int ) ;
 int FUNC_6 (struct brcms_phy*,struct phytbl_info const*) ;

__attribute__((used)) static void FUNC_7(struct brcms_phy *VAR_19)
{
 uint VAR_20;
 u8 VAR_21;
 struct phytbl_info VAR_22;
 u32 VAR_23;

 VAR_21 = FUNC_1(VAR_19->radio_chanspec);

 for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++)
  FUNC_6(VAR_19, &VAR_11[VAR_20]);

 if (VAR_19->sh->boardflags & VAR_3) {
  VAR_22.tbl_id = VAR_4;
  VAR_22.tbl_width = 16;
  VAR_22.tbl_ptr = &VAR_23;
  VAR_22.tbl_len = 1;
  VAR_23 = 100;
  VAR_22.tbl_offset = 4;
  FUNC_6(VAR_19, &VAR_22);
 }

 VAR_22.tbl_id = VAR_4;
 VAR_22.tbl_width = 16;
 VAR_22.tbl_ptr = &VAR_23;
 VAR_22.tbl_len = 1;

 VAR_23 = 114;
 VAR_22.tbl_offset = 0;
 FUNC_6(VAR_19, &VAR_22);

 VAR_23 = 130;
 VAR_22.tbl_offset = 1;
 FUNC_6(VAR_19, &VAR_22);

 VAR_23 = 6;
 VAR_22.tbl_offset = 8;
 FUNC_6(VAR_19, &VAR_22);

 if (FUNC_0(VAR_19->radio_chanspec)) {
  if (VAR_19->sh->boardflags & VAR_2)
   FUNC_5(
    VAR_19,
    VAR_9);
  else
   FUNC_5(
    VAR_19,
    VAR_10);
 }

 if (FUNC_2(VAR_19->pubpi.phy_rev, 2)) {
  const struct phytbl_info *VAR_24;
  int VAR_25;

  if (FUNC_0(VAR_19->radio_chanspec)) {
   VAR_25 = VAR_14;
   if (VAR_19->sh->boardflags & VAR_0)
    VAR_24 = VAR_17;
   else
    VAR_24 = VAR_13;
  } else {
   VAR_25 = VAR_16;
   if (VAR_19->sh->boardflags & VAR_1)
    VAR_24 = VAR_18;
   else
    VAR_24 = VAR_15;
  }

  for (VAR_20 = 0; VAR_20 < VAR_25; VAR_20++)
   FUNC_6(VAR_19, &VAR_24[VAR_20]);
 }

 if ((VAR_19->sh->boardflags & VAR_2)
     && !(VAR_19->sh->boardflags & VAR_3))
  FUNC_6(VAR_19, &VAR_8);
 else if (VAR_19->sh->boardflags & VAR_3) {
  if (VAR_19->sh->boardrev < 0x1250)
   FUNC_6(
    VAR_19,
    &VAR_6);
  else
   FUNC_6(
    VAR_19,
    &VAR_7);
 } else
  FUNC_6(VAR_19, &VAR_5);

 FUNC_4(VAR_19);

 FUNC_3(VAR_19);
}
