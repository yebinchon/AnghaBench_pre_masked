
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dm_timer {int reserved; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_dm_timer* VAR_2 ;
 int FUNC_0 (struct omap_dm_timer*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct omap_dm_timer *FUNC_3(void)
{
 struct omap_dm_timer *VAR_3 = ((void*)0);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_1, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2[VAR_5].reserved)
   continue;

  VAR_3 = &VAR_2[VAR_5];
  VAR_3->reserved = 1;
  break;
 }
 FUNC_2(&VAR_1, VAR_4);

 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3);

 return VAR_3;
}
