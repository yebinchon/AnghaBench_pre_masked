
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dm_timer {scalar_t__ reserved; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct omap_dm_timer*) ;
 int FUNC_2 (struct omap_dm_timer*) ;
 int FUNC_3 (struct omap_dm_timer*) ;

void FUNC_4(struct omap_dm_timer *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 FUNC_1(VAR_0);

 FUNC_0(!VAR_0->reserved);
 VAR_0->reserved = 0;
}
