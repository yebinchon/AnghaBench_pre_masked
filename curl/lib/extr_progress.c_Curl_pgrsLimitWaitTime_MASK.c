
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timediff_t ;
typedef int time_t ;
struct curltime {int dummy; } ;
typedef int curl_off_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct curltime,struct curltime) ;
 int VAR_1 ;

timediff_t FUNC_2(curl_off_t VAR_2,
                                  curl_off_t VAR_3,
                                  curl_off_t VAR_4,
                                  struct curltime VAR_5,
                                  struct curltime VAR_6)
{
  curl_off_t VAR_7 = VAR_2 - VAR_3;
  timediff_t VAR_8;
  timediff_t VAR_9;

  if(!VAR_4 || !VAR_7)
    return 0;





  if(VAR_7 < VAR_0/1000)
    VAR_8 = (time_t) (FUNC_0(1000) * VAR_7 / VAR_4);
  else {
    VAR_8 = (time_t) (VAR_7 / VAR_4);
    if(VAR_8 < VAR_1/1000)
      VAR_8 *= 1000;
    else
      VAR_8 = VAR_1;
  }





  VAR_9 = FUNC_1(VAR_6, VAR_5);
  if(VAR_9 < VAR_8) {


    return (VAR_8 - VAR_9);
  }

  return 0;
}
