
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
 void* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct scatterlist*) ;
 unsigned int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static __le32 *FUNC_3(__le32 * VAR_5, struct scatterlist *VAR_6,
      unsigned int VAR_7, u32 VAR_8,
      unsigned int VAR_9, unsigned int VAR_10,
      unsigned int VAR_11)
{
 struct scatterlist *VAR_12;
 unsigned int VAR_13, VAR_14;


 if (VAR_8 != VAR_0) {
  *(VAR_5++) = FUNC_0(VAR_2 | VAR_8);
 }


 VAR_12 = VAR_6;
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  while (VAR_7 && VAR_7 >= FUNC_2(VAR_12)) {
   VAR_7 -= FUNC_2(VAR_12);
   VAR_12++;
  }
  if (VAR_9 <= FUNC_2(VAR_12) - VAR_7) {

   *(VAR_5++) =
       FUNC_0(VAR_4 | VAR_3 | VAR_1 | VAR_9);
   *(VAR_5++) = FUNC_0(FUNC_1(VAR_12) + VAR_7);
   *(VAR_5++) = FUNC_0(0);
   VAR_7 += VAR_9;
  } else {

   VAR_14 = VAR_9;
   *(VAR_5++) =
       FUNC_0(VAR_4 | VAR_3 |
     (FUNC_2(VAR_12) - VAR_7));
   *(VAR_5++) = FUNC_0(FUNC_1(VAR_12) + VAR_7);
   *(VAR_5++) = FUNC_0(0);
   VAR_14 -= (FUNC_2(VAR_12) - VAR_7);
   VAR_7 = 0;
   VAR_12++;
   while (VAR_14 > FUNC_2(VAR_12)) {
    *(VAR_5++) =
        FUNC_0(VAR_4 | FUNC_2(VAR_12));
    *(VAR_5++) = FUNC_0(FUNC_1(VAR_12));
    *(VAR_5++) = FUNC_0(0);
    VAR_14 -= FUNC_2(VAR_12);
    VAR_12++;
   }
   *(VAR_5++) = FUNC_0(VAR_4 | VAR_1 | VAR_14);
   *(VAR_5++) = FUNC_0(FUNC_1(VAR_12));
   *(VAR_5++) = FUNC_0(0);
   VAR_7 += VAR_14;
  }

  VAR_7 += VAR_10;
 }

 return VAR_5;
}
