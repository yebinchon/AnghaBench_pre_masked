
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long hour; long minute; long second; long year; long month; long day; } ;
typedef TYPE_1__ efi_time_t ;


 scalar_t__ FUNC_0 (long) ;
 unsigned long VAR_0 ;
 long VAR_1 ;
 size_t FUNC_1 (long) ;

int
FUNC_2 (unsigned long VAR_2, efi_time_t *VAR_3)
{
 const unsigned short int VAR_4[2][13] =
 {

  { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 },

  { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366 }
 };
 long int VAR_5, VAR_6, VAR_7;
 const unsigned short int *VAR_8;

 VAR_5 = VAR_2 / VAR_0;
 VAR_6 = VAR_2 % VAR_0;
 while (VAR_6 < 0) {
  VAR_6 += VAR_0;
  --VAR_5;
 }
 while (VAR_6 >= VAR_0) {
  VAR_6 -= VAR_0;
  ++VAR_5;
 }
 VAR_3->hour = VAR_6 / VAR_1;
 VAR_6 %= VAR_1;
 VAR_3->minute = VAR_6 / 60;
 VAR_3->second = VAR_6 % 60;

 VAR_7 = 1970;






 while (VAR_5 < 0 || VAR_5 >= (((VAR_7) % 4 == 0 && ((VAR_7) % 100 != 0 || (VAR_7) % 400 == 0)) ? 366 : 365)) {

  long int VAR_9 = VAR_7 + VAR_5 / 365 - (VAR_5 % 365 < 0);


  VAR_5 -= ((VAR_9 - VAR_7) * 365 + (((VAR_9 - 1) / (4) - ((VAR_9 - 1) % (4) < 0)) - ((VAR_9 - 1) / (100) - ((VAR_9 - 1) % (100) < 0)) + ((VAR_9 - 1) / (400) - ((VAR_9 - 1) % (400) < 0)))
    - (((VAR_7 - 1) / (4) - ((VAR_7 - 1) % (4) < 0)) - ((VAR_7 - 1) / (100) - ((VAR_7 - 1) % (100) < 0)) + ((VAR_7 - 1) / (400) - ((VAR_7 - 1) % (400) < 0))));
  VAR_7 = VAR_9;
 }
 VAR_3->year = VAR_7;
 VAR_8 = VAR_4[((VAR_7) % 4 == 0 && ((VAR_7) % 100 != 0 || (VAR_7) % 400 == 0))];
 for (VAR_7 = 11; VAR_5 < (long int) VAR_8[VAR_7]; --VAR_7)
  continue;
 VAR_5 -= VAR_8[VAR_7];
 VAR_3->month = VAR_7 + 1;
 VAR_3->day = VAR_5 + 1;
 return 1;
}
