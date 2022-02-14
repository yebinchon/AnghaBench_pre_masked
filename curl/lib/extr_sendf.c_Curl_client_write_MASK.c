
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char transfertype; } ;
struct TYPE_5__ {TYPE_1__ ftpc; } ;
struct connectdata {TYPE_2__ proto; TYPE_3__* handler; struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
struct TYPE_6__ {int protocol; } ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,char*,size_t) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct connectdata*,int,char*,size_t) ;
 size_t FUNC_3 (struct Curl_easy*,char*,size_t) ;
 size_t FUNC_4 (char*) ;

CURLcode FUNC_5(struct connectdata *VAR_2,
                           int VAR_3,
                           char *VAR_4,
                           size_t VAR_5)
{
  struct Curl_easy *VAR_6 = VAR_2->data;

  if(0 == VAR_5)
    VAR_5 = FUNC_4(VAR_4);

  FUNC_1(VAR_3 <= 3);


  if((VAR_3 & VAR_0) &&
    (VAR_2->handler->protocol & VAR_1) &&
    VAR_2->proto.ftpc.transfertype == 'A') {

    CURLcode VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5);

    if(VAR_7)
      return VAR_7;





    }

  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
}
