
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timediff_t ;
struct curltime {int tv_sec; int tv_usec; } ;


 int VAR_0 ;
 int VAR_1 ;

timediff_t FUNC_0(struct curltime VAR_2, struct curltime VAR_3)
{
  timediff_t VAR_4 = (timediff_t)VAR_2.tv_sec-VAR_3.tv_sec;
  if(VAR_4 >= (VAR_0/1000))
    return VAR_0;
  else if(VAR_4 <= (VAR_1/1000))
    return VAR_1;
  return VAR_4 * 1000 + (VAR_2.tv_usec-VAR_3.tv_usec)/1000;
}
