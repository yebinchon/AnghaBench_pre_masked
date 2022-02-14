
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_64t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_yday; unsigned int tm_wday; scalar_t__ tm_isdst; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int* VAR_6 ;

time_64t FUNC_4(struct tm *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_8 = VAR_7->tm_year + 1900;
 VAR_9 = VAR_7->tm_mon;
 VAR_10 = VAR_7->tm_mday - 1;
 VAR_11 = VAR_7->tm_hour;
 VAR_12 = VAR_7->tm_min;
 VAR_13 = VAR_7->tm_sec;

 FUNC_0(VAR_13, VAR_12, 60);
 FUNC_0(VAR_12, VAR_11, 60);
 FUNC_0(VAR_11, VAR_10, 24);
 FUNC_0(VAR_9, VAR_8, 12);
 if (VAR_10 < 0)
  do {
   if (--VAR_9 < 0) {
    --VAR_8;
    VAR_9 = 11;
   }
   VAR_10 += FUNC_2(VAR_9, VAR_8);
  } while (VAR_10 < 0);
 else
  while (VAR_10 >= FUNC_2(VAR_9, VAR_8)) {
   VAR_10 -= FUNC_2(VAR_9, VAR_8);
   if (++VAR_9 >= 12) {
    ++VAR_8;
    VAR_9 = 0;
   }
  }


  VAR_7->tm_year = VAR_8 - 1900;
  VAR_7->tm_mon = VAR_9;
  VAR_7->tm_mday = VAR_10 + 1;
  VAR_7->tm_hour = VAR_11;
  VAR_7->tm_min = VAR_12;
  VAR_7->tm_sec = VAR_13;


  VAR_10 += VAR_6[VAR_9] + (VAR_9 > 1 && FUNC_1 (VAR_8));
  VAR_7->tm_yday = VAR_10;


  VAR_10 = (unsigned)VAR_10 + 365 * (unsigned)(VAR_8 - 1970) +
   (unsigned)(FUNC_3 (VAR_8));
  VAR_7->tm_wday = ((unsigned)VAR_10 + 4) % 7;
  VAR_7->tm_isdst = 0;

  if (VAR_8 < 1970)
   return (time_64t)-1;
  return (time_64t)(86400L * (unsigned long)(unsigned)VAR_10 +
   3600L * (unsigned long)VAR_11 +
   (unsigned long)(60 * VAR_12 + VAR_13));
}
