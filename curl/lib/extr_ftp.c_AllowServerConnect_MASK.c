
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timediff_t ;
struct connectdata {struct Curl_easy* data; } ;
struct TYPE_2__ {scalar_t__ accepttimeout; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ FUNC_0 (struct connectdata*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct Curl_easy*,scalar_t__,int ) ;
 int FUNC_2 (struct Curl_easy*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct connectdata*) ;
 scalar_t__ FUNC_4 (struct connectdata*,int*) ;
 int VAR_4 ;
 int FUNC_5 (struct Curl_easy*,char*) ;
 scalar_t__ FUNC_6 (struct Curl_easy*) ;
 int FUNC_7 (struct Curl_easy*,char*) ;

__attribute__((used)) static CURLcode FUNC_8(struct connectdata *VAR_5, bool *VAR_6)
{
  struct Curl_easy *VAR_7 = VAR_5->data;
  timediff_t VAR_8;
  CURLcode VAR_9 = VAR_1;

  *VAR_6 = VAR_3;
  FUNC_7(VAR_7, "Preparing for accepting server on data port\n");


  FUNC_2(VAR_7, VAR_4);

  VAR_8 = FUNC_6(VAR_7);
  if(VAR_8 < 0) {

    FUNC_5(VAR_7, "Accept timeout occurred while waiting server connect");
    return VAR_0;
  }


  VAR_9 = FUNC_4(VAR_5, VAR_6);
  if(VAR_9)
    return VAR_9;

  if(*VAR_6) {
    VAR_9 = FUNC_0(VAR_5);
    if(VAR_9)
      return VAR_9;

    VAR_9 = FUNC_3(VAR_5);
    if(VAR_9)
      return VAR_9;
  }
  else {

    if(*VAR_6 == VAR_3) {
      FUNC_1(VAR_7, VAR_7->set.accepttimeout > 0 ?
                  VAR_7->set.accepttimeout: VAR_2, 0);
    }
  }

  return VAR_9;
}
