
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_dm_timer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_dm_timer*,int ) ;
 int FUNC_1 (struct omap_dm_timer*,int ,int) ;

void FUNC_2(struct omap_dm_timer *VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_4 &= ~(VAR_0 | (0x07 << 2));
 if (VAR_3 >= 0x00 && VAR_3 <= 0x07) {
  VAR_4 |= VAR_0;
  VAR_4 |= VAR_3 << 2;
 }
 FUNC_1(VAR_2, VAR_1, VAR_4);
}
