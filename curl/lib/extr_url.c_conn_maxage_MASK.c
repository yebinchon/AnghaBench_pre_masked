
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int timediff_t ;
struct curltime {int dummy; } ;
struct connectdata {int lastused; int data; } ;
struct TYPE_2__ {int maxage_conn; } ;
struct Curl_easy {TYPE_1__ set; } ;


 int FUNC_0 (struct curltime,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct Curl_easy*,char*,int) ;

__attribute__((used)) static bool FUNC_2(struct Curl_easy *VAR_2,
                        struct connectdata *VAR_3,
                        struct curltime VAR_4)
{
  if(!VAR_3->data) {
    timediff_t VAR_5 = FUNC_0(VAR_4, VAR_3->lastused);
    VAR_5 /= 1000;

    if(VAR_5 > VAR_2->set.maxage_conn) {
      FUNC_1(VAR_2, "Too old connection (%ld seconds), disconnect it\n",
            VAR_5);
      return VAR_1;
    }
  }
  return VAR_0;
}
