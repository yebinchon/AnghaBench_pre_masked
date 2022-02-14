
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icst307_vco {int s; unsigned int v; unsigned int r; } ;
struct icst307_params {unsigned int vd_max; unsigned int rd_max; unsigned long vco_max; unsigned long ref; unsigned int rd_min; unsigned int vd_min; } ;


 unsigned int FUNC_0 (size_t*) ;
 size_t* VAR_0 ;
 unsigned long* VAR_1 ;

struct icst307_vco
FUNC_1(const struct icst307_params *VAR_2, unsigned long VAR_3)
{
 struct icst307_vco VAR_4 = { .s = 1, .v = VAR_2->vd_max, .r = VAR_2->rd_max };
 unsigned long VAR_5, VAR_6;
 unsigned int VAR_7 = 0, VAR_8, VAR_9 = (unsigned int)-1;

 VAR_6 = 1000000000UL / VAR_2->vco_max;





 do {
  VAR_5 = VAR_3 / VAR_1[VAR_0[VAR_7]];




  if (VAR_5 >= VAR_6 && VAR_5 < 1000000000UL / 6000 + 1)
   break;
 } while (VAR_7 < FUNC_0(VAR_0));

 if (VAR_7 >= FUNC_0(VAR_0))
  return VAR_4;

 VAR_4.s = VAR_0[VAR_7];

 VAR_6 = 500000000UL / VAR_2->ref;





 for (VAR_8 = VAR_2->rd_min; VAR_8 <= VAR_2->rd_max; VAR_8++) {
  unsigned long VAR_10, VAR_11;
  unsigned int VAR_12;
  int VAR_13;

  VAR_10 = VAR_6 * VAR_8;

  VAR_12 = (VAR_10 + VAR_5 / 2) / VAR_5;
  if (VAR_12 < VAR_2->vd_min || VAR_12 > VAR_2->vd_max)
   continue;

  VAR_11 = (VAR_10 + VAR_12 / 2) / VAR_12;
  VAR_13 = VAR_11 - VAR_5;
  if (VAR_13 < 0)
   VAR_13 = -VAR_13;

  if ((unsigned)VAR_13 < VAR_9) {
   VAR_4.v = VAR_12 - 8;
   VAR_4.r = VAR_8 - 2;
   if (VAR_13 == 0)
    break;
   VAR_9 = VAR_13;
  }
 }

 return VAR_4;
}
