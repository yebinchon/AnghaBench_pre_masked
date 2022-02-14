
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct scatterlist {int dummy; } ;
typedef int __le32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 void* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct scatterlist*) ;
 unsigned int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static __le32 *FUNC_3(__le32 * VAR_7, struct scatterlist *VAR_8,
     unsigned int VAR_9, u32 VAR_10,
     unsigned int VAR_11, unsigned int VAR_12,
     unsigned int VAR_13, unsigned int VAR_14)
{
 struct scatterlist *VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;


 if (VAR_10 != VAR_0)
  *(VAR_7++) = FUNC_0(VAR_4 | VAR_10);


 VAR_15 = VAR_8;
 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  while (VAR_9 && VAR_9 >= FUNC_2(VAR_15)) {
   VAR_9 -= FUNC_2(VAR_15);
   VAR_15++;
  }

  if (VAR_14 && VAR_16 > 0 && !(VAR_16 % VAR_14))
   VAR_18 = VAR_5 | VAR_3 | VAR_1;
  else
   VAR_18 = VAR_5;

  if (VAR_11 <= FUNC_2(VAR_15) - VAR_9) {

   *(VAR_7++) =
       FUNC_0(VAR_6 | VAR_18 | VAR_2 | VAR_11);
   *(VAR_7++) = FUNC_0(FUNC_1(VAR_15) + VAR_9);
   *(VAR_7++) = FUNC_0(0);
   VAR_9 += VAR_11;
  } else {

   VAR_17 = VAR_11;
   *(VAR_7++) = FUNC_0(VAR_6 | VAR_18 |
           (FUNC_2(VAR_15) - VAR_9));
   *(VAR_7++) = FUNC_0(FUNC_1(VAR_15) + VAR_9);
   *(VAR_7++) = FUNC_0(0);
   VAR_17 -= (FUNC_2(VAR_15) - VAR_9);
   VAR_9 = 0;
   VAR_15++;
   while (VAR_17 > FUNC_2(VAR_15)) {
    *(VAR_7++) = FUNC_0(VAR_6 |
            FUNC_2(VAR_15));
    *(VAR_7++) = FUNC_0(FUNC_1(VAR_15));
    *(VAR_7++) = FUNC_0(0);
    VAR_17 -= FUNC_2(VAR_15);
    VAR_15++;
   }
   *(VAR_7++) = FUNC_0(VAR_6 | VAR_2 | VAR_17);
   *(VAR_7++) = FUNC_0(FUNC_1(VAR_15));
   *(VAR_7++) = FUNC_0(0);
   VAR_9 += VAR_17;
  }
  VAR_9 += VAR_12;
 }

 return VAR_7;
}
