
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct my_tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;



__attribute__((used)) static void FUNC_0(struct my_tm *VAR_0, time_t *VAR_1)
{
  static const int VAR_2 [12] =
    { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
  int VAR_3, VAR_4, VAR_5;

  VAR_4 = VAR_0->tm_year;
  VAR_3 = VAR_0->tm_mon;
  if(VAR_3 < 0) {
    VAR_4 += (11 - VAR_3) / 12;
    VAR_3 = 11 - (11 - VAR_3) % 12;
  }
  else if(VAR_3 >= 12) {
    VAR_4 -= VAR_3 / 12;
    VAR_3 = VAR_3 % 12;
  }

  VAR_5 = VAR_4 - (VAR_0->tm_mon <= 1);
  VAR_5 = ((VAR_5 / 4) - (VAR_5 / 100) + (VAR_5 / 400)
               - (1969 / 4) + (1969 / 100) - (1969 / 400));

  *VAR_1 = ((((time_t) (VAR_4 - 1970) * 365
          + VAR_5 + VAR_2[VAR_3] + VAR_0->tm_mday - 1) * 24
         + VAR_0->tm_hour) * 60 + VAR_0->tm_min) * 60 + VAR_0->tm_sec;
}
