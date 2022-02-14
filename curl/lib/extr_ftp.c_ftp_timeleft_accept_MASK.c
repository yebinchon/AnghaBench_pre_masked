
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ timediff_t ;
struct curltime {int dummy; } ;
struct TYPE_3__ {int t_acceptdata; } ;
struct TYPE_4__ {scalar_t__ accepttimeout; } ;
struct Curl_easy {TYPE_1__ progress; TYPE_2__ set; } ;


 struct curltime FUNC_0 () ;
 scalar_t__ FUNC_1 (struct curltime,int ) ;
 scalar_t__ FUNC_2 (struct Curl_easy*,struct curltime*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static timediff_t FUNC_3(struct Curl_easy *VAR_2)
{
  timediff_t VAR_3 = VAR_0;
  timediff_t VAR_4;
  struct curltime VAR_5;

  if(VAR_2->set.accepttimeout > 0)
    VAR_3 = VAR_2->set.accepttimeout;

  VAR_5 = FUNC_0();


  VAR_4 = FUNC_2(VAR_2, &VAR_5, VAR_1);
  if(VAR_4 && (VAR_4 < VAR_3))


    VAR_3 = VAR_4;
  else {

    VAR_3 -= FUNC_1(VAR_5, VAR_2->progress.t_acceptdata);
    if(!VAR_3)

      return -1;
  }

  return VAR_3;
}
