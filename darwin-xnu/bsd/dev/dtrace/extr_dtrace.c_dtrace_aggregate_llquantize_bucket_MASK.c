
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int16_t ;



__attribute__((used)) static int
FUNC_0(int16_t VAR_0, int16_t VAR_1, int16_t VAR_2,
                                   int16_t VAR_3, int64_t VAR_4)
{
 int64_t VAR_5 = 1, VAR_6, VAR_7;
 int VAR_8 = 1, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9)
  VAR_5 *= VAR_0;





 if (VAR_4 < VAR_5)
  return 0;
 else
  VAR_6 = VAR_5;

 for (VAR_5 *= VAR_0; VAR_9 <= VAR_2; ++VAR_9) {
  int VAR_10 = VAR_5 > VAR_3 ? VAR_3 : VAR_5;
  VAR_7 = VAR_5 * VAR_0;
  if (VAR_7 < VAR_5) {
   VAR_4 = VAR_5 - 1;
  }







  if (VAR_4 < VAR_5) {
   return (VAR_8 + (VAR_4 - VAR_6) / (VAR_5 / VAR_10));
  }

  VAR_8 += VAR_10 - (VAR_10 / VAR_0);
  VAR_6 = VAR_5;
  VAR_5 = VAR_7;
 }





 return VAR_8;
}
