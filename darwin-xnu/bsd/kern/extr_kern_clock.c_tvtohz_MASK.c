
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,long,long) ;
 int VAR_3 ;

int
FUNC_1(struct timeval *VAR_4)
{
 unsigned long VAR_5;
 long VAR_6, VAR_7;
 VAR_6 = VAR_4->tv_sec;
 VAR_7 = VAR_4->tv_usec;
 if (VAR_7 < 0) {
  VAR_6--;
  VAR_7 += 1000000;
 }
 if (VAR_6 < 0) {
  VAR_5 = 1;
 } else if (VAR_6 <= VAR_1 / 1000000)
  VAR_5 = (VAR_6 * 1000000 + (unsigned long)VAR_7 + (VAR_3 - 1))
   / VAR_3 + 1;
 else if (VAR_6 <= VAR_1 / VAR_2)
  VAR_5 = VAR_6 * VAR_2
   + ((unsigned long)VAR_7 + (VAR_3 - 1)) / VAR_3 + 1;
 else
  VAR_5 = VAR_1;
 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;
 return ((int)VAR_5);
}
