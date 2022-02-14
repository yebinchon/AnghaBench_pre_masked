
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; int tv_usec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*) ;
 int VAR_1 ;

int
FUNC_1(struct timeval *VAR_2)
{
 struct timeval VAR_3;
 long VAR_4;
 long VAR_5;

 FUNC_0(&VAR_3);
 VAR_5 = VAR_2->tv_sec - VAR_3.tv_sec;
 if (VAR_5 <= 0x7fffffff / 1000 - 1000)
  VAR_4 = ((VAR_2->tv_sec - VAR_3.tv_sec) * 1000 +
   (VAR_2->tv_usec - VAR_3.tv_usec) / 1000)
    / (VAR_1 / 1000);
 else if (VAR_5 <= 0x7fffffff / VAR_0)
  VAR_4 = VAR_5 * VAR_0;
 else
  VAR_4 = 0x7fffffff;

 return (VAR_4);
}
