
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void const*,size_t) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int) ;

void *FUNC_5(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 uint64_t VAR_3 = 0, VAR_4 = 0;
 size_t VAR_5;
 bool VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned char VAR_10, *VAR_11, *VAR_12;

 VAR_11 = (unsigned char *)VAR_1;
 VAR_12 = (unsigned char *)VAR_0;

 VAR_6 = FUNC_2(VAR_0, VAR_2);
 VAR_7 = FUNC_2(VAR_1, VAR_2);

 VAR_8 = 1;
 VAR_9 = 1;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_7) {
   if (VAR_8) {
    VAR_3 = FUNC_3(VAR_1 + VAR_5);
    VAR_8 = 0;
   }

   if (FUNC_0(VAR_1 + VAR_5))
    VAR_8 = 1;

   VAR_10 = (unsigned char)((VAR_3 >> FUNC_1(VAR_1 + VAR_5)) & 0xff);

  } else {

   VAR_10 = VAR_11[VAR_5];
  }

  if (VAR_6) {
   if (VAR_9) {
    VAR_4 = FUNC_3(VAR_0 + VAR_5);
    VAR_9 = 0;
   }

   VAR_4 &= ~((uint64_t)0xff << FUNC_1(VAR_0 + VAR_5));
   VAR_4 |= ((uint64_t)VAR_10 << FUNC_1(VAR_0 + VAR_5));

   if (FUNC_0(VAR_0 + VAR_5)) {
    VAR_9 = 1;
    FUNC_4(VAR_0 + VAR_5, VAR_4);
   }
  } else {

   VAR_12[VAR_5] = VAR_10;
  }
 }


 if (VAR_6 && !VAR_9)
  FUNC_4(VAR_0 + VAR_5, VAR_4);

 return VAR_0;
}
