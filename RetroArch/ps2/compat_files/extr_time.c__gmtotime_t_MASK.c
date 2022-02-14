
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static time_t FUNC_0 (
        int VAR_7,
        int VAR_8,
        int VAR_9,
        int VAR_10,
        int VAR_11,
        int VAR_12
        )
{
   int VAR_13;
   long VAR_14;
   long VAR_15;
   time_t VAR_16 = -1;

   if ((VAR_7 >= VAR_4) || (VAR_7 <= VAR_2)) {
      VAR_13 = (long)VAR_7 - VAR_4;

      VAR_14 = VAR_13 * VAR_0;
      VAR_14 += (VAR_13 >> 2) * (VAR_0 + 1);
      VAR_14 += VAR_9 + VAR_6[VAR_8 - 1];
      if ( !(VAR_7 & 3) && (VAR_8 > 2) ) {
         VAR_14++;
      }
      VAR_15 = (((VAR_10 * VAR_3) + VAR_11) * VAR_5) + VAR_12;
      VAR_16 = (VAR_14 * VAR_1 * VAR_3 * VAR_5) + VAR_15;
   }

   return VAR_16;
}
