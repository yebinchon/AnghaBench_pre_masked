
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static long FUNC_1(struct timespec *VAR_3)
{
 long VAR_4;
 int VAR_5 = 1000;

 if (VAR_3->tv_sec < 0)
  return 0;

 if (FUNC_0(VAR_2) > 0)
  VAR_5 = VAR_5 / 5;

 if (VAR_3->tv_sec > VAR_0 / (VAR_1/VAR_5))
  return VAR_0;

 VAR_4 = VAR_3->tv_nsec / VAR_5;
 VAR_4 += VAR_3->tv_sec * (VAR_1/VAR_5);

 if (VAR_4 > VAR_0)
  return VAR_0;

 return VAR_4;
}
