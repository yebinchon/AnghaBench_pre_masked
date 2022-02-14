
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_pte {unsigned long r; unsigned long v; } ;
struct TYPE_2__ {int shift; int penc; int avpnm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_1 (int) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 unsigned long VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static void FUNC_2(struct hash_pte *VAR_10, unsigned long VAR_11,
   int *VAR_12, int *VAR_13, unsigned long *VAR_14)
{
 unsigned long VAR_15 = VAR_10->r;
 unsigned long VAR_16 = VAR_10->v;
 unsigned long VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;

 if (!(VAR_16 & VAR_1))
  VAR_19 = VAR_6;
 else {
  for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {
   if ((VAR_15 & FUNC_1(VAR_18+1)) == FUNC_1(VAR_18+1))
    break;
  }
  VAR_21 = FUNC_1(VAR_18+1) >> VAR_5;
  for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++) {


   if (VAR_19 == VAR_6)
    continue;


   if (!VAR_9[VAR_19].shift)
    continue;

   if (VAR_21 == VAR_9[VAR_19].penc)
    break;
  }
 }


 VAR_20 = VAR_9[VAR_19].shift;
 VAR_17 = (FUNC_0(VAR_16) & ~VAR_9[VAR_19].avpnm) << 23;

 if (VAR_20 < 23) {
  unsigned long VAR_22, VAR_23, VAR_24;

  VAR_24 = VAR_11 / VAR_0;
  if (VAR_16 & VAR_2)
   VAR_24 = ~VAR_24;
  switch (VAR_16 >> VAR_3) {
  case 128:
   VAR_22 = ((VAR_17 >> 28) ^ VAR_24) & VAR_8;
   break;
  case 129:
   VAR_23 = VAR_17 >> 40;
   VAR_22 = (VAR_23 ^ (VAR_23 << 25) ^ VAR_24) & VAR_8;
   break;
  default:
   VAR_17 = VAR_22 = VAR_19 = 0;
  }
  VAR_17 |= (VAR_22 << VAR_9[VAR_19].shift);
 }

 *VAR_14 = VAR_17;
 *VAR_12 = VAR_19;
 *VAR_13 = VAR_16 >> VAR_3;
}
