
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; long tm_wday; long tm_yday; size_t tm_mon; long tm_mday; int tm_isdst; scalar_t__ tm_year; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int** VAR_7 ;
 long* VAR_8 ;

struct tm * FUNC_1(const time_t * VAR_9, struct tm *VAR_10)
{
  long VAR_11, VAR_12;
  int VAR_13;
  int VAR_14;
  const int *VAR_15;

  VAR_11 = ((long) *VAR_9) / VAR_3;
  VAR_12 = ((long) *VAR_9) % VAR_3;
  while (VAR_12 < 0)
    {
      VAR_12 += VAR_3;
      --VAR_11;
    }
  while (VAR_12 >= VAR_3)
    {
      VAR_12 -= VAR_3;
      ++VAR_11;
    }


  VAR_10->tm_hour = (int) (VAR_12 / VAR_4);
  VAR_12 %= VAR_4;
  VAR_10->tm_min = (int) (VAR_12 / VAR_5);
  VAR_10->tm_sec = (int) (VAR_12 % VAR_5);


  if ((VAR_10->tm_wday = ((VAR_1 + VAR_11) % VAR_0)) < 0)
    VAR_10->tm_wday += VAR_0;


  VAR_13 = VAR_2;
  if (VAR_11 >= 0)
    {
      for (;;)
 {
   VAR_14 = FUNC_0(VAR_13);
   if (VAR_11 < VAR_8[VAR_14])
     break;
   VAR_13++;
   VAR_11 -= VAR_8[VAR_14];
 }
    }
  else
    {
      do
 {
   --VAR_13;
   VAR_14 = FUNC_0(VAR_13);
   VAR_11 += VAR_8[VAR_14];
 } while (VAR_11 < 0);
    }

  VAR_10->tm_year = VAR_13 - VAR_6;
  VAR_10->tm_yday = VAR_11;
  VAR_15 = VAR_7[VAR_14];
  for (VAR_10->tm_mon = 0; VAR_11 >= VAR_15[VAR_10->tm_mon]; ++VAR_10->tm_mon)
    VAR_11 -= VAR_15[VAR_10->tm_mon];
  VAR_10->tm_mday = VAR_11 + 1;


  VAR_10->tm_isdst = -1;

  return (VAR_10);
}
