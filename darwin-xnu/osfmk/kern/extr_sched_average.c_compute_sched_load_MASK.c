
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,size_t,size_t,size_t,size_t,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t FUNC_2 (size_t) ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_3 (int) ;
 size_t VAR_16 ;
 size_t* VAR_17 ;
 size_t* VAR_18 ;

void
FUNC_4(void)
{






 uint32_t VAR_19 = VAR_16;
 uint32_t VAR_20[VAR_10];

 VAR_20[VAR_11] = VAR_18[VAR_11];
 VAR_20[VAR_9] = VAR_18[VAR_9];
 VAR_20[VAR_14] = VAR_18[VAR_14];
 VAR_20[VAR_13] = VAR_18[VAR_13];
 VAR_20[VAR_15] = VAR_18[VAR_15];
 VAR_20[VAR_12] = VAR_18[VAR_12];

 FUNC_3(VAR_20[VAR_11] >= 0);
 FUNC_3(VAR_20[VAR_9] >= 0);

 uint32_t VAR_21 = VAR_20[VAR_11];
 uint32_t VAR_22 = VAR_20[VAR_9];

 FUNC_0(VAR_2,
         FUNC_1(VAR_1, VAR_3) | VAR_0,
         VAR_20[VAR_9], (VAR_20[VAR_14] + VAR_20[VAR_13]),
         VAR_20[VAR_12], VAR_20[VAR_15], 0);
 uint32_t VAR_23 = (VAR_21 - VAR_22);
 for (uint32_t VAR_24 = VAR_14; VAR_24 <= VAR_12 ; VAR_24++) {
  if (VAR_20[VAR_24] > VAR_23)
   VAR_20[VAR_24] = VAR_23;
 }




 if (VAR_20[VAR_13] <= (VAR_19 * 2)) {
  VAR_20[VAR_14] += VAR_20[VAR_13];
 } else {
  VAR_20[VAR_14] += (VAR_19 * 2);
 }




 if (VAR_20[VAR_15] <= VAR_19) {
  VAR_20[VAR_14] += VAR_20[VAR_15];
  VAR_20[VAR_13] += VAR_20[VAR_15];
 } else {
  VAR_20[VAR_14] += VAR_19;
  VAR_20[VAR_13] += VAR_19;
 }




 if (VAR_20[VAR_12] > 0) {
  VAR_20[VAR_14] += 1;
  VAR_20[VAR_13] += 1;
  VAR_20[VAR_15] += 1;
 }
 for (uint32_t VAR_25 = VAR_14; VAR_25 <= VAR_12 ; VAR_25++) {
  uint32_t VAR_26 = 0;

  if (VAR_20[VAR_25] > VAR_19) {

   if (VAR_19 > 1)
    VAR_26 = VAR_20[VAR_25] / VAR_19;
   else
    VAR_26 = VAR_20[VAR_25];

   if (VAR_26 > VAR_5)
    VAR_26 = VAR_5;
  }

  VAR_17[VAR_25] = (VAR_17[VAR_25] * VAR_7) + ((VAR_26 << VAR_8) * VAR_6);
  VAR_17[VAR_25] = VAR_17[VAR_25] >> VAR_8;
 }

 FUNC_0(VAR_2,
         FUNC_1(VAR_1, VAR_4) | VAR_0,
   FUNC_2(VAR_17[VAR_14]), FUNC_2(VAR_17[VAR_13]),
   FUNC_2(VAR_17[VAR_15]), FUNC_2(VAR_17[VAR_12]), 0);
}
