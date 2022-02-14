
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct omap_dm_timer {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct omap_dm_timer*,int ) ;
 int FUNC_1 (struct omap_dm_timer*,int ,unsigned int) ;

void FUNC_2(struct omap_dm_timer *VAR_3, int VAR_4,
        unsigned int VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_1, VAR_6);
 FUNC_1(VAR_3, VAR_2, VAR_5);
}
