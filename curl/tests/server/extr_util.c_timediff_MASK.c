
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timediff_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int VAR_0 ;
 int VAR_1 ;

long FUNC_0(struct timeval VAR_2, struct timeval VAR_3)
{
  timediff_t VAR_4 = VAR_2.tv_sec-VAR_3.tv_sec;
  if(VAR_4 >= (VAR_0/1000))
    return VAR_0;
  else if(VAR_4 <= (VAR_1/1000))
    return VAR_1;
  return (long)(VAR_2.tv_sec-VAR_3.tv_sec)*1000+
    (long)(VAR_2.tv_usec-VAR_3.tv_usec)/1000;
}
