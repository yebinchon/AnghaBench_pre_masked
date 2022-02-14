
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lpphy_tx_gain_table_entry {int pad; int pga; int gm; int dac; int bb_mult; } ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_0, int VAR_1,
    struct lpphy_tx_gain_table_entry VAR_2)
{
 u32 VAR_3;

 FUNC_1(VAR_0->phy.rev >= 2);

 VAR_3 = VAR_2.pad << 11;
 VAR_3 |= VAR_2.pga << 7;
 VAR_3 |= VAR_2.gm << 4;
 VAR_3 |= VAR_2.dac;
 FUNC_2(VAR_0, FUNC_0(10, 0xC0 + VAR_1), VAR_3);
 VAR_3 = VAR_2.bb_mult << 20;
 FUNC_2(VAR_0, FUNC_0(10, 0x140 + VAR_1), VAR_3);
}
