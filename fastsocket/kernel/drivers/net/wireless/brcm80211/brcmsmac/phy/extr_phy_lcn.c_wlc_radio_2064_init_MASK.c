
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct lcnphy_radio_regs {int address; scalar_t__ init_g; scalar_t__ do_init_g; scalar_t__ init_a; scalar_t__ do_init_a; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct lcnphy_radio_regs* VAR_10 ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*,int ) ;
 int FUNC_6 (struct brcms_phy*,int,int) ;
 int FUNC_7 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_8(struct brcms_phy *VAR_11)
{
 u32 VAR_12;
 const struct lcnphy_radio_regs *VAR_13 = ((void*)0);

 VAR_13 = VAR_10;

 for (VAR_12 = 0; VAR_13[VAR_12].address != 0xffff; VAR_12++)
  if (FUNC_0(VAR_11->radio_chanspec) && VAR_13[VAR_12].do_init_a)
   FUNC_7(VAR_11,
     ((VAR_13[VAR_12].address & 0x3fff) |
      VAR_9),
     (u16) VAR_13[VAR_12].init_a);
  else if (VAR_13[VAR_12].do_init_g)
   FUNC_7(VAR_11,
     ((VAR_13[VAR_12].address & 0x3fff) |
      VAR_9),
     (u16) VAR_13[VAR_12].init_g);

 FUNC_7(VAR_11, VAR_3, 0x62);
 FUNC_7(VAR_11, VAR_4, 0x19);

 FUNC_7(VAR_11, VAR_8, 0x10);

 FUNC_7(VAR_11, VAR_0, 0x00);

 if (FUNC_1(VAR_11->pubpi.phy_rev, 1)) {

  FUNC_7(VAR_11, VAR_5, 0x7f);
  FUNC_7(VAR_11, VAR_6, 0x72);
  FUNC_7(VAR_11, VAR_7, 0x7f);
 }

 FUNC_7(VAR_11, VAR_1, 0x02);
 FUNC_7(VAR_11, VAR_2, 0x06);

 FUNC_2(VAR_11, 0x4ea, (0x7 << 0), 0 << 0);

 FUNC_2(VAR_11, 0x4ea, (0x7 << 3), 1 << 3);

 FUNC_2(VAR_11, 0x4ea, (0x7 << 6), 2 << 6);

 FUNC_2(VAR_11, 0x4ea, (0x7 << 9), 3 << 9);

 FUNC_2(VAR_11, 0x4ea, (0x7 << 12), 4 << 12);

 FUNC_6(VAR_11, 0x4ea, 0x4688);

 FUNC_2(VAR_11, 0x4eb, (0x7 << 0), 2 << 0);

 FUNC_2(VAR_11, 0x4eb, (0x7 << 6), 0 << 6);

 FUNC_2(VAR_11, 0x46a, (0xffff << 0), 25 << 0);

 FUNC_5(VAR_11, 0);

 FUNC_4(VAR_11);

 FUNC_3(VAR_11);
}
