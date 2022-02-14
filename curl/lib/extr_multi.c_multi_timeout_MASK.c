
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ timediff_t ;
struct curltime {int member_1; int member_0; } ;
struct Curl_multi {TYPE_1__* timetree; } ;
struct TYPE_3__ {int key; } ;
typedef int CURLMcode ;


 int VAR_0 ;
 struct curltime FUNC_0 () ;
 TYPE_1__* FUNC_1 (struct curltime,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,struct curltime) ;
 scalar_t__ FUNC_3 (int ,struct curltime) ;

__attribute__((used)) static CURLMcode FUNC_4(struct Curl_multi *VAR_1,
                               long *VAR_2)
{
  static struct curltime VAR_3 = {0, 0};

  if(VAR_1->timetree) {

    struct curltime VAR_4 = FUNC_0();


    VAR_1->timetree = FUNC_1(VAR_3, VAR_1->timetree);

    if(FUNC_2(VAR_1->timetree->key, VAR_4) > 0) {

      timediff_t VAR_5 = FUNC_3(VAR_1->timetree->key, VAR_4);
      if(VAR_5 <= 0)







        *VAR_2 = 1;
      else


        *VAR_2 = (long)VAR_5;
    }
    else

      *VAR_2 = 0;
  }
  else
    *VAR_2 = -1;

  return VAR_0;
}
