
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lcn_tx_gains {int gm_gain; int pga_gain; int pad_gain; int dac_gain; } ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_0,
        struct lcn_tx_gains *VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_0);

 FUNC_4(VAR_0, 0x4b5,
        (VAR_1->gm_gain | (VAR_1->pga_gain << 8)));
 FUNC_3(VAR_0, 0x4fb, ~0x7fff,
   (VAR_1->pad_gain | (VAR_2 << 8)));
 FUNC_4(VAR_0, 0x4fc,
        (VAR_1->gm_gain | (VAR_1->pga_gain << 8)));
 FUNC_3(VAR_0, 0x4fd, ~0x7fff,
   (VAR_1->pad_gain | (VAR_2 << 8)));

 FUNC_1(VAR_0, VAR_1->dac_gain);
 FUNC_2(VAR_0, 1);
}
