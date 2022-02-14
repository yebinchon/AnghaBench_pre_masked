
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dm_timer {int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct omap_dm_timer* VAR_3 ;
 int FUNC_0 (struct omap_dm_timer*,int ) ;

int FUNC_1(void)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct omap_dm_timer *VAR_5;

  VAR_5 = &VAR_3[VAR_4];

  if (!VAR_5->enabled)
   continue;

  if (FUNC_0(VAR_5, VAR_0) &
      VAR_1) {
   return 1;
  }
 }
 return 0;
}
