
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct phytbl_info {int tbl_width; int tbl_len; int* tbl_ptr; scalar_t__ tbl_offset; int tbl_id; } ;
struct lcnphy_tx_gain_tbl_entry {int gm; int pad; int pga; int dac; int bb_mult; } ;
struct brcms_phy {TYPE_1__* sh; int radio_chanspec; } ;
struct TYPE_2__ {int boardflags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct brcms_phy*,struct phytbl_info*) ;

__attribute__((used)) static void
FUNC_2(struct brcms_phy *VAR_4,
         const struct lcnphy_tx_gain_tbl_entry *VAR_5)
{
 u32 VAR_6;
 struct phytbl_info VAR_7;
 u32 VAR_8;
 u16 VAR_9;
 u16 VAR_10;

 if (FUNC_0(VAR_4->radio_chanspec))
  VAR_9 = 0x70;
 else
  VAR_9 = 0x70;

 if (VAR_4->sh->boardflags & VAR_0)
  VAR_9 = 0x10;
 VAR_7.tbl_id = VAR_1;
 VAR_7.tbl_width = 32;
 VAR_7.tbl_len = 1;
 VAR_7.tbl_ptr = &VAR_8;

 for (VAR_6 = 0; VAR_6 < 128; VAR_6++) {
  VAR_10 = VAR_5[VAR_6].gm;
  VAR_8 = (((u32) VAR_9 << 24) |
         (VAR_5[VAR_6].pad << 16) |
         (VAR_5[VAR_6].pga << 8) | VAR_10);

  VAR_7.tbl_offset = VAR_2 + VAR_6;
  FUNC_1(VAR_4, &VAR_7);

  VAR_8 = (VAR_5[VAR_6].dac << 28) | (VAR_5[VAR_6].bb_mult << 20);
  VAR_7.tbl_offset = VAR_3 + VAR_6;
  FUNC_1(VAR_4, &VAR_7);
 }
}
