
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (long) ;
 unsigned long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 size_t FUNC_1 (long) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_3, long VAR_4,
       int *VAR_5, int *VAR_6, int *VAR_7,
       int *VAR_8, int *VAR_9, int *VAR_10)
{

 static const unsigned short int VAR_11[2][13] =
 {

  { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 },

  { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366 }
 };
 long int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 const unsigned short int *VAR_17;

 VAR_12 = VAR_3 / VAR_0;
 VAR_13 = VAR_3 % VAR_0;
 VAR_13 += VAR_4;
 while (VAR_13 < 0) {
  VAR_13 += VAR_0;
  --VAR_12;
 }
 while (VAR_13 >= VAR_0) {
  VAR_13 -= VAR_0;
  ++VAR_12;
 }
 *VAR_8 = VAR_13 / VAR_1;
 VAR_13 %= VAR_1;
 *VAR_9 = VAR_13 / VAR_2;
 *VAR_10 = VAR_13 % VAR_2;

 VAR_15 = (4 + VAR_12) % 7;
 if (VAR_15 < 0) VAR_15 += 7;
 VAR_14 = 1970;






 while (VAR_12 < 0 || VAR_12 >= (((VAR_14) % 4 == 0 && ((VAR_14) % 100 != 0 || (VAR_14) % 400 == 0)) ? 366 : 365))
 {

  long int VAR_18 = VAR_14 + VAR_12 / 365 - (VAR_12 % 365 < 0);


  VAR_12 -= ((VAR_18 - VAR_14) * 365
    + (((VAR_18 - 1) / (4) - ((VAR_18 - 1) % (4) < 0)) - ((VAR_18 - 1) / (100) - ((VAR_18 - 1) % (100) < 0)) + ((VAR_18 - 1) / (400) - ((VAR_18 - 1) % (400) < 0)))
    - (((VAR_14 - 1) / (4) - ((VAR_14 - 1) % (4) < 0)) - ((VAR_14 - 1) / (100) - ((VAR_14 - 1) % (100) < 0)) + ((VAR_14 - 1) / (400) - ((VAR_14 - 1) % (400) < 0))));
  VAR_14 = VAR_18;
 }
 *VAR_5 = VAR_14 - 1900;
 VAR_16 = VAR_12;
 VAR_17 = VAR_11[((VAR_14) % 4 == 0 && ((VAR_14) % 100 != 0 || (VAR_14) % 400 == 0))];
 for (VAR_14 = 11; VAR_12 < (long int) VAR_17[VAR_14]; --VAR_14)
  continue;
 VAR_12 -= VAR_17[VAR_14];
 *VAR_6 = VAR_14;
 *VAR_7 = VAR_12 + 1;
 return;
}
