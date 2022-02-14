
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_1(unsigned char *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = (VAR_1 + 7) / 8;
 unsigned char VAR_3[VAR_2];
 size_t VAR_4;

 if(VAR_1 == 0)
  return 0;

 {
  const int VAR_5 = 13 % VAR_1;
  const int VAR_6 = VAR_1 % 8;

  FUNC_0(VAR_3, VAR_0, VAR_2);
  if(VAR_6) {

   VAR_3[VAR_2 - 1] &= 0xff << (8 - VAR_6);
   for(VAR_4 = VAR_6; VAR_4 < 8; VAR_4 += VAR_1)
    VAR_3[VAR_2 - 1] |= VAR_0[0] >> VAR_4;
  }
  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
   ssize_t VAR_7;
   ssize_t VAR_8, VAR_9, VAR_10, VAR_11;


   VAR_7 = 8 * VAR_4 - VAR_5;
   while(VAR_7 < 0)
    VAR_7 += VAR_1;

   VAR_8 = VAR_7 / 8;
   VAR_9 = VAR_7 % 8;
   if((size_t)VAR_7 + 8 > VAR_2 * 8)

    VAR_11 = (VAR_1 + 8 - VAR_9) % 8;
   else
    VAR_11 = 8 - VAR_9;
   VAR_10 = (VAR_8 + 1) % VAR_2;
   VAR_0[VAR_4] = (VAR_3[VAR_8] << VAR_9) | (VAR_3[VAR_10] >> VAR_11);
  }
 }
 return 0;
}
