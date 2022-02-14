
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {int dummy; } ;
struct SingleRequest {int dummy; } ;
struct TYPE_2__ {int maxdownload; } ;
struct Curl_easy {int conn; TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ FUNC_0 (struct connectdata*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct Curl_easy*,struct connectdata*) ;
 int FUNC_2 (struct Curl_easy*,struct connectdata*,int) ;
 int FUNC_3 (struct Curl_easy*) ;
 scalar_t__ FUNC_4 (struct connectdata*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct Curl_easy*,struct connectdata**,int*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

CURLcode FUNC_7(struct Curl_easy *VAR_3,
                      bool *VAR_4,
                      bool *VAR_5)
{
  CURLcode VAR_6;
  struct connectdata *VAR_7;

  *VAR_4 = VAR_1;


  FUNC_3(VAR_3);
  FUNC_6(&VAR_3->req, 0, sizeof(struct SingleRequest));
  VAR_3->req.maxdownload = -1;


  VAR_6 = FUNC_5(VAR_3, &VAR_7, VAR_4);

  if(!VAR_6) {
    if(FUNC_0(VAR_7))

      *VAR_5 = VAR_2;
    else if(!*VAR_4) {



      VAR_6 = FUNC_4(VAR_7, VAR_5);
    }
  }

  if(VAR_6 == VAR_0) {
    return VAR_6;
  }
  else if(VAR_6 && VAR_7) {


    FUNC_2(VAR_3, VAR_7, VAR_2);
  }
  else if(!VAR_6 && !VAR_3->conn)

    FUNC_1(VAR_3, VAR_7);

  return VAR_6;
}
