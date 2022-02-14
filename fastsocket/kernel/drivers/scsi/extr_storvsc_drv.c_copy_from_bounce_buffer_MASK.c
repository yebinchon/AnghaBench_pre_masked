
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned long offset; unsigned int length; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (void*,void*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 unsigned long FUNC_4 (struct scatterlist*,int) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static unsigned int FUNC_6(struct scatterlist *VAR_0,
         struct scatterlist *VAR_1,
         unsigned int VAR_2,
         unsigned int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 unsigned long VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11 = 0;
 unsigned long VAR_12 = 0;
 unsigned long VAR_13 = 0;
 unsigned long VAR_14;

 FUNC_1(VAR_14);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_13 = FUNC_4(VAR_0,VAR_4) + VAR_0[VAR_4].offset;
  VAR_7 = VAR_13;
  VAR_9 = VAR_0[VAR_4].length;

  if (VAR_12 == 0)
   VAR_12 = FUNC_4(VAR_1,VAR_5);

  while (VAR_9) {
   VAR_6 = VAR_12 + VAR_1[VAR_5].offset;
   VAR_8 = VAR_1[VAR_5].length - VAR_1[VAR_5].offset;

   VAR_10 = FUNC_3(VAR_8, VAR_9);
   FUNC_2((void *)VAR_7, (void *)VAR_6, VAR_10);

   VAR_11 += VAR_10;
   VAR_1[VAR_5].offset += VAR_10;
   VAR_9 -= VAR_10;
   VAR_7 += VAR_10;

   if (VAR_1[VAR_5].offset == VAR_1[VAR_5].length) {

    FUNC_5(VAR_12);
    VAR_5++;
    if (VAR_5 == VAR_3) {



     FUNC_5(VAR_13 - VAR_0[VAR_4].offset);
     FUNC_0(VAR_14);
     return VAR_11;
    }


    if (VAR_9 || VAR_4 != VAR_2 - 1)
     VAR_12 = FUNC_4(VAR_1,VAR_5);
   } else if (VAR_9 == 0 && VAR_4 == VAR_2 - 1) {

    FUNC_5(VAR_12);
   }
  }

  FUNC_5(VAR_13 - VAR_0[VAR_4].offset);
 }

 FUNC_0(VAR_14);

 return VAR_11;
}
