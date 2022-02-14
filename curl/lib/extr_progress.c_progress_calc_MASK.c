
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int timediff_t ;
struct curltime {scalar_t__ tv_sec; } ;
struct connectdata {struct Curl_easy* data; } ;
struct TYPE_2__ {int downloaded; int uploaded; int dlspeed; int ulspeed; scalar_t__ lastshow; int speeder_c; int* speeder; int current_speed; struct curltime* speeder_time; scalar_t__ timespent; int start; } ;
struct Curl_easy {TYPE_1__ progress; } ;
typedef int curl_off_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct curltime,struct curltime) ;
 scalar_t__ FUNC_2 (struct curltime,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_3(struct connectdata *VAR_4, struct curltime VAR_5)
{
  curl_off_t VAR_6;
  curl_off_t VAR_7;
  struct Curl_easy *VAR_8 = VAR_4->data;
  curl_off_t VAR_9 = VAR_8->progress.downloaded;
  curl_off_t VAR_10 = VAR_8->progress.uploaded;
  bool VAR_11 = VAR_2;


  VAR_8->progress.timespent = FUNC_2(VAR_5, VAR_8->progress.start);
  VAR_6 = (curl_off_t)VAR_8->progress.timespent/1000000;
  VAR_7 = (curl_off_t)VAR_8->progress.timespent/1000;


  if(VAR_9 < VAR_0/1000)
    VAR_8->progress.dlspeed = (VAR_9 * 1000 / (VAR_7>0?VAR_7:1));
  else
    VAR_8->progress.dlspeed = (VAR_9 / (VAR_6>0?VAR_6:1));


  if(VAR_10 < VAR_0/1000)
    VAR_8->progress.ulspeed = (VAR_10 * 1000 / (VAR_7>0?VAR_7:1));
  else
    VAR_8->progress.ulspeed = (VAR_10 / (VAR_6>0?VAR_6:1));


  if(VAR_8->progress.lastshow != VAR_5.tv_sec) {
    int VAR_12;
    int VAR_13 = VAR_8->progress.speeder_c% VAR_1;
    VAR_8->progress.lastshow = VAR_5.tv_sec;
    VAR_11 = VAR_3;



    VAR_8->progress.speeder[ VAR_13 ] =
      VAR_8->progress.downloaded + VAR_8->progress.uploaded;


    VAR_8->progress.speeder_time [ VAR_13 ] = VAR_5;



    VAR_8->progress.speeder_c++;





    VAR_12 = ((VAR_8->progress.speeder_c >= VAR_1)?
                  VAR_1:VAR_8->progress.speeder_c) - 1;


    if(VAR_12) {
      int VAR_14;
      timediff_t VAR_15;




      VAR_14 = (VAR_8->progress.speeder_c >= VAR_1)?
        VAR_8->progress.speeder_c%VAR_1:0;


      VAR_15 = FUNC_1(VAR_5, VAR_8->progress.speeder_time[VAR_14]);
      if(0 == VAR_15)
        VAR_15 = 1;


      {
        curl_off_t VAR_16 = VAR_8->progress.speeder[VAR_13]-
          VAR_8->progress.speeder[VAR_14];

        if(VAR_16 > FUNC_0(4294967) )


          VAR_8->progress.current_speed = (curl_off_t)
            ((double)VAR_16/((double)VAR_15/1000.0));
        else


          VAR_8->progress.current_speed = VAR_16*FUNC_0(1000)/VAR_15;
      }
    }
    else

      VAR_8->progress.current_speed =
        VAR_8->progress.ulspeed + VAR_8->progress.dlspeed;

  }
  return VAR_11;
}
