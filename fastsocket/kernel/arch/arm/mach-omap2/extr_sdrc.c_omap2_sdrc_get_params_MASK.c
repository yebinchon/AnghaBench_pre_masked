
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sdrc_params {unsigned long rate; } ;


 struct omap_sdrc_params* VAR_0 ;
 struct omap_sdrc_params* VAR_1 ;

int FUNC_0(unsigned long VAR_2,
     struct omap_sdrc_params **VAR_3,
     struct omap_sdrc_params **VAR_4)
{
 struct omap_sdrc_params *VAR_5, *VAR_6;

 if (!VAR_0)
  return -1;

 VAR_5 = VAR_0;
 VAR_6 = VAR_1;

 while (VAR_5->rate && VAR_5->rate != VAR_2) {
  VAR_5++;
  if (VAR_1)
   VAR_6++;
 }

 if (!VAR_5->rate)
  return -1;

 *VAR_3 = VAR_5;
 *VAR_4 = VAR_6;
 return 0;
}
