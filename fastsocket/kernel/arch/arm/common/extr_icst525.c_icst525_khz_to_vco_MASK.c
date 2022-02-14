
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icst525_vco {int s; unsigned int v; unsigned int r; } ;
struct icst525_params {unsigned int vd_max; unsigned int rd_max; unsigned long vco_max; unsigned int rd_min; int ref; unsigned int vd_min; } ;


 unsigned int FUNC_0 (size_t*) ;
 size_t* VAR_0 ;
 unsigned long* VAR_1 ;

struct icst525_vco
FUNC_1(const struct icst525_params *VAR_2, unsigned long VAR_3)
{
 struct icst525_vco VAR_4 = { .s = 1, .v = VAR_2->vd_max, .r = VAR_2->rd_max };
 unsigned long VAR_5;
 unsigned int VAR_6 = 0, VAR_7, VAR_8 = (unsigned int)-1;





 do {
  VAR_5 = VAR_3 * VAR_1[VAR_0[VAR_6]];





  if (VAR_5 > 10000 && VAR_5 <= VAR_2->vco_max)
   break;
 } while (VAR_6 < FUNC_0(VAR_0));

 if (VAR_6 >= FUNC_0(VAR_0))
  return VAR_4;

 VAR_4.s = VAR_0[VAR_6];





 for (VAR_7 = VAR_2->rd_min; VAR_7 <= VAR_2->rd_max; VAR_7++) {
  unsigned long VAR_9, VAR_10;
  unsigned int VAR_11;
  int VAR_12;

  VAR_9 = (2 * VAR_2->ref) / VAR_7;

  VAR_11 = (VAR_5 + VAR_9 / 2) / VAR_9;
  if (VAR_11 < VAR_2->vd_min || VAR_11 > VAR_2->vd_max)
   continue;

  VAR_10 = VAR_9 * VAR_11;
  VAR_12 = VAR_10 - VAR_5;
  if (VAR_12 < 0)
   VAR_12 = -VAR_12;

  if ((unsigned)VAR_12 < VAR_8) {
   VAR_4.v = VAR_11 - 8;
   VAR_4.r = VAR_7 - 2;
   if (VAR_12 == 0)
    break;
   VAR_8 = VAR_12;
  }
 }

 return VAR_4;
}
