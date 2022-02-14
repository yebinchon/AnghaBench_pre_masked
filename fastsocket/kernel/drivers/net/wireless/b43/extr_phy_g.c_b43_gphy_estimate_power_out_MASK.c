
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_g {size_t tgt_idle_tssi; size_t cur_idle_tssi; size_t* tssi2dbm; } ;
typedef size_t s8 ;
typedef size_t s32 ;


 size_t FUNC_0 (size_t,int,int) ;

__attribute__((used)) static s8 FUNC_1(struct b43_wldev *VAR_0, s8 VAR_1)
{
 struct b43_phy_g *VAR_2 = VAR_0->phy.g;
 s8 VAR_3;
 s32 VAR_4;

 VAR_4 = (VAR_2->tgt_idle_tssi - VAR_2->cur_idle_tssi + VAR_1);
 VAR_4 = FUNC_0(VAR_4, 0x00, 0x3F);
 VAR_3 = VAR_2->tssi2dbm[VAR_4];

 return VAR_3;
}
