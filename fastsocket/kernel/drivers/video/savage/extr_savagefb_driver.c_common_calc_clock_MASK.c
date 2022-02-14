
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;

__attribute__((used)) static int FUNC_0(long VAR_2, int VAR_3, int VAR_4, int VAR_5,
        int VAR_6, int VAR_7, long VAR_8,
        long VAR_9, unsigned char *VAR_10,
        unsigned char *VAR_11)
{
 long VAR_12, VAR_13;
 unsigned int VAR_14;
 unsigned char VAR_15, VAR_16;
 unsigned char VAR_17 = 16+2, VAR_18 = 2, VAR_19 = 125+2;

 VAR_13 = VAR_2;

 for (VAR_16 = VAR_6; VAR_16 <= VAR_7; VAR_16++) {
  for (VAR_15 = VAR_4+2; VAR_15 <= VAR_5+2; VAR_15++) {
   VAR_14 = (VAR_2 * VAR_15 * (1 << VAR_16) + VAR_1) /
    VAR_0;
   if (VAR_14 < VAR_3 + 2 || VAR_14 > 127+2)
    continue;
   if ((VAR_14 * VAR_0 >= VAR_8 * VAR_15) &&
       (VAR_14 * VAR_0 <= VAR_9 * VAR_15)) {
    VAR_12 = VAR_2 * (1 << VAR_16) * VAR_15 - VAR_0 * VAR_14;
    if (VAR_12 < 0)
     VAR_12 = -VAR_12;
    if (VAR_12 < VAR_13) {
     VAR_13 = VAR_12;
     VAR_19 = VAR_14;
     VAR_17 = VAR_15;
     VAR_18 = VAR_16;
    }
   }
  }
 }

 if (VAR_5 == 63)
  *VAR_11 = (VAR_17 - 2) | (VAR_18 << 6);
 else
  *VAR_11 = (VAR_17 - 2) | (VAR_18 << 5);

 *VAR_10 = VAR_19 - 2;

 return 0;
}
