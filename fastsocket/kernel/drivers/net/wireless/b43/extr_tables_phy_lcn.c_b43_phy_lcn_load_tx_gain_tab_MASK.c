
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct b43_wldev {TYPE_2__* dev; } ;
struct b43_lcntab_tx_gain_tbl_entry {int pad; int pga; int gm; int dac; int bb_mult; } ;
struct TYPE_4__ {TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {int boardflags_lo; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 size_t VAR_1 ;
 size_t FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,size_t) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_2,
   const struct b43_lcntab_tx_gain_tbl_entry *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 u16 VAR_6 = 0x70;
 if (VAR_2->dev->bus_sprom->boardflags_lo & VAR_0)
  VAR_6 = 0x10;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = ((VAR_6 << 24) |
         (VAR_3[VAR_4].pad << 16) |
         (VAR_3[VAR_4].pga << 8) |
   VAR_3[VAR_4].gm);
  FUNC_2(VAR_2, FUNC_0(0x7, 0xc0 + VAR_4), VAR_5);


  VAR_5 = FUNC_1(VAR_2, FUNC_0(0x7, 0x140 + VAR_4));
  VAR_5 &= 0x000fffff;
  VAR_5 |= ((VAR_3[VAR_4].dac << 28) |
   (VAR_3[VAR_4].bb_mult << 20));
  FUNC_2(VAR_2, FUNC_0(0x7, 0x140 + VAR_4), VAR_5);
 }
}
