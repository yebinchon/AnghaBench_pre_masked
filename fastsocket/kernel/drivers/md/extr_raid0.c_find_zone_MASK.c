
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strip_zone {scalar_t__ zone_end; } ;
struct r0conf {int nr_strip_zones; struct strip_zone* strip_zone; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 () ;

__attribute__((used)) static struct strip_zone *FUNC_1(struct r0conf *VAR_0,
        sector_t *VAR_1)
{
 int VAR_2;
 struct strip_zone *VAR_3 = VAR_0->strip_zone;
 sector_t VAR_4 = *VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_strip_zones; VAR_2++)
  if (VAR_4 < VAR_3[VAR_2].zone_end) {
   if (VAR_2)
    *VAR_1 = VAR_4 - VAR_3[VAR_2-1].zone_end;
   return VAR_3 + VAR_2;
  }
 FUNC_0();
}
