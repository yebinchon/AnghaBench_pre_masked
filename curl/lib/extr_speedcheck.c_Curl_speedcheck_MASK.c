
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int timediff_t ;
struct curltime {scalar_t__ tv_sec; } ;
struct TYPE_6__ {int low_speed_time; scalar_t__ low_speed_limit; } ;
struct TYPE_5__ {struct curltime keeps_speed; } ;
struct TYPE_4__ {scalar_t__ current_speed; } ;
struct Curl_easy {TYPE_3__ set; TYPE_2__ state; TYPE_1__ progress; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,int,int ) ;
 int FUNC_1 (struct curltime,struct curltime) ;
 int VAR_2 ;
 int FUNC_2 (struct Curl_easy*,char*,scalar_t__,int) ;

CURLcode FUNC_3(struct Curl_easy *VAR_3,
                         struct curltime VAR_4)
{
  if((VAR_3->progress.current_speed >= 0) && VAR_3->set.low_speed_time) {
    if(VAR_3->progress.current_speed < VAR_3->set.low_speed_limit) {
      if(!VAR_3->state.keeps_speed.tv_sec)

        VAR_3->state.keeps_speed = VAR_4;
      else {

        timediff_t VAR_5 = FUNC_1(VAR_4, VAR_3->state.keeps_speed);

        if(VAR_5 >= VAR_3->set.low_speed_time * 1000) {

          FUNC_2(VAR_3,
                "Operation too slow. "
                "Less than %ld bytes/sec transferred the last %ld seconds",
                VAR_3->set.low_speed_limit,
                VAR_3->set.low_speed_time);
          return VAR_1;
        }
      }
    }
    else

      VAR_3->state.keeps_speed.tv_sec = 0;
  }

  if(VAR_3->set.low_speed_limit)


    FUNC_0(VAR_3, 1000, VAR_2);

  return VAR_0;
}
