
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timediff_t ;
struct curltime {int dummy; } ;
struct TYPE_4__ {int t_startop; int t_startsingle; } ;
struct TYPE_3__ {scalar_t__ timeout; scalar_t__ connecttimeout; } ;
struct Curl_easy {TYPE_2__ progress; TYPE_1__ set; } ;


 struct curltime FUNC_0 () ;
 int FUNC_1 (struct curltime,int ) ;
 int VAR_0 ;

timediff_t FUNC_2(struct Curl_easy *VAR_1,
                         struct curltime *VAR_2,
                         bool VAR_3)
{
  int VAR_4 = 0;
  timediff_t VAR_5 = VAR_3?VAR_0:0;
  struct curltime VAR_6;



  if(VAR_1->set.timeout > 0)
    VAR_4 |= 1;
  if(VAR_3 && (VAR_1->set.connecttimeout > 0))
    VAR_4 |= 2;

  switch(VAR_4) {
  case 1:
    VAR_5 = VAR_1->set.timeout;
    break;
  case 2:
    VAR_5 = VAR_1->set.connecttimeout;
    break;
  case 3:
    if(VAR_1->set.timeout < VAR_1->set.connecttimeout)
      VAR_5 = VAR_1->set.timeout;
    else
      VAR_5 = VAR_1->set.connecttimeout;
    break;
  default:

    if(!VAR_3)



      return 0;
    break;
  }

  if(!VAR_2) {
    VAR_6 = FUNC_0();
    VAR_2 = &VAR_6;
  }


  if(VAR_3)

    VAR_5 -= FUNC_1(*VAR_2, VAR_1->progress.t_startsingle);
  else

    VAR_5 -= FUNC_1(*VAR_2, VAR_1->progress.t_startop);
  if(!VAR_5)

    return -1;

  return VAR_5;
}
