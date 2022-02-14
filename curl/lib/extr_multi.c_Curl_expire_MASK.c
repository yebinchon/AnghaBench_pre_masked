
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int timediff_t ;
typedef scalar_t__ time_t ;
struct curltime {unsigned int tv_usec; scalar_t__ tv_sec; } ;
struct Curl_multi {int timetree; } ;
struct TYPE_5__ {struct Curl_easy* payload; } ;
struct TYPE_4__ {TYPE_2__ timenode; struct curltime expiretime; } ;
struct Curl_easy {TYPE_1__ state; struct Curl_multi* multi; } ;
typedef int expire_id ;


 struct curltime FUNC_0 () ;
 int FUNC_1 (struct curltime,int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;
 int FUNC_3 (struct curltime,struct curltime) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (struct Curl_easy*,char*,int) ;
 int FUNC_6 (struct Curl_easy*,struct curltime*,int ) ;
 int FUNC_7 (struct Curl_easy*,int ) ;

void FUNC_8(struct Curl_easy *VAR_1, timediff_t VAR_2, expire_id VAR_3)
{
  struct Curl_multi *VAR_4 = VAR_1->multi;
  struct curltime *VAR_5 = &VAR_1->state.expiretime;
  struct curltime VAR_6;



  if(!VAR_4)
    return;

  FUNC_4(VAR_3 < VAR_0);

  VAR_6 = FUNC_0();
  VAR_6.tv_sec += (time_t)(VAR_2/1000);
  VAR_6.tv_usec += (unsigned int)(VAR_2%1000)*1000;

  if(VAR_6.tv_usec >= 1000000) {
    VAR_6.tv_sec++;
    VAR_6.tv_usec -= 1000000;
  }


  FUNC_7(VAR_1, VAR_3);



  FUNC_6(VAR_1, &VAR_6, VAR_3);

  if(VAR_5->tv_sec || VAR_5->tv_usec) {



    timediff_t VAR_7 = FUNC_3(VAR_6, *VAR_5);
    int VAR_8;

    if(VAR_7 > 0) {


      return;
    }



    VAR_8 = FUNC_2(VAR_4->timetree,
                                &VAR_1->state.timenode,
                                &VAR_4->timetree);
    if(VAR_8)
      FUNC_5(VAR_1, "Internal error removing splay node = %d\n", VAR_8);
  }



  *VAR_5 = VAR_6;
  VAR_1->state.timenode.payload = VAR_1;
  VAR_4->timetree = FUNC_1(*VAR_5, VAR_4->timetree,
                                     &VAR_1->state.timenode);
}
