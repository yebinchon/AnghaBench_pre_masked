
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int,scalar_t__*) ;

__attribute__((used)) static boolean_t
FUNC_2(
 struct timeval *VAR_2)
{
 FUNC_0(VAR_2->tv_usec >= 0);
 FUNC_0(VAR_2->tv_sec >= 0);

 if (VAR_2->tv_usec >= 1000000) {
  if (FUNC_1(VAR_2->tv_sec, VAR_2->tv_usec / 1000000, &VAR_2->tv_sec))
   return VAR_0;
  VAR_2->tv_usec = VAR_2->tv_usec % 1000000;
 }

 return VAR_1;
}
