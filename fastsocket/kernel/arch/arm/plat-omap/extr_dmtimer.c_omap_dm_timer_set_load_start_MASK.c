
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct omap_dm_timer {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct omap_dm_timer*,int ) ;
 int FUNC_1 (struct omap_dm_timer*,int ,unsigned int) ;

void FUNC_2(struct omap_dm_timer *VAR_5, int VAR_6,
                            unsigned int VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_2);
 if (VAR_6) {
  VAR_8 |= VAR_1;
  FUNC_1(VAR_5, VAR_4, VAR_7);
 } else {
  VAR_8 &= ~VAR_1;
 }
 VAR_8 |= VAR_3;

 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_1(VAR_5, VAR_2, VAR_8);
}
