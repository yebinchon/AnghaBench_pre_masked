
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_dm_timer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_dm_timer*,int ) ;
 int FUNC_1 (struct omap_dm_timer*,int ,int) ;

void FUNC_2(struct omap_dm_timer *VAR_4, int VAR_5,
      int VAR_6, int VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_2);
 VAR_8 &= ~(VAR_0 | VAR_3 |
        VAR_1 | (0x03 << 10));
 if (VAR_5)
  VAR_8 |= VAR_3;
 if (VAR_6)
  VAR_8 |= VAR_1;
 VAR_8 |= VAR_7 << 10;
 FUNC_1(VAR_4, VAR_2, VAR_8);
}
