
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int unit; unsigned long mask; unsigned long value; int lowerbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_1(u64 VAR_10, unsigned long *VAR_11,
        unsigned long *VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 unsigned long VAR_18 = 0, VAR_19 = 0;
 int VAR_20 = -1;

 VAR_13 = (VAR_10 >> VAR_6) & VAR_5;
 if (VAR_13) {
  if (VAR_13 > 8)
   return -1;
  VAR_17 = (VAR_13 - 1) * 2;
  VAR_18 |= 2 << VAR_17;
  VAR_19 |= 1 << VAR_17;
  VAR_20 = ((VAR_13 - 1) >> 1) & 1;
 }
 VAR_15 = (VAR_10 >> VAR_8) & VAR_7;
 VAR_14 = (VAR_10 >> VAR_1) & VAR_0;
 if (VAR_15) {
  VAR_16 = (VAR_10 >> VAR_3) & VAR_2;





  if (!VAR_13)
   VAR_20 = VAR_14 & 1;

  if (!VAR_9[VAR_15].unit)
   return -1;
  VAR_18 |= VAR_9[VAR_15].mask;
  VAR_19 |= VAR_9[VAR_15].value;
  VAR_17 = VAR_9[VAR_15].lowerbit;
  if (VAR_17 > 1)
   VAR_19 |= (unsigned long)VAR_16 << VAR_17;
  else if (VAR_16 != VAR_17)
   return -1;
  VAR_15 = VAR_9[VAR_15].unit;


  VAR_18 |= 0xfULL << (28 - 4 * VAR_14);
  VAR_19 |= (unsigned long)VAR_15 << (28 - 4 * VAR_14);
 }
 if (VAR_20 == 0) {

  VAR_18 |= 0x8000000000ull;
  VAR_19 |= 0x1000000000ull;
 } else {

  VAR_18 |= 0x800000000ull;
  VAR_19 |= 0x100000000ull;
 }


 if (FUNC_0(VAR_10)) {
  VAR_18 |= 1ull << 56;
  VAR_19 |= 1ull << 56;
 }


 if (VAR_13 && (VAR_10 & VAR_4) == 6 && VAR_14 == 2)
  VAR_18 |= 1ull << 56;

 *VAR_11 = VAR_18;
 *VAR_12 = VAR_19;
 return 0;
}
