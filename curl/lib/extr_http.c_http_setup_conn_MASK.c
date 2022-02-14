
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connectdata {int transport; TYPE_2__* handler; struct Curl_easy* data; } ;
struct HTTP {int form; } ;
struct TYPE_4__ {scalar_t__ httpversion; } ;
struct TYPE_6__ {struct HTTP* protop; } ;
struct Curl_easy {TYPE_1__ set; TYPE_3__ req; } ;
struct TYPE_5__ {int flags; } ;
typedef int CURLcode ;


 int FUNC_0 (struct connectdata*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct Curl_easy*) ;
 int FUNC_3 (int *,struct Curl_easy*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct HTTP* FUNC_5 (int,int) ;
 int FUNC_6 (struct Curl_easy*,char*) ;

__attribute__((used)) static CURLcode FUNC_7(struct connectdata *VAR_6)
{


  struct HTTP *VAR_7;
  struct Curl_easy *VAR_8 = VAR_6->data;
  FUNC_4(VAR_8->req.protop == ((void*)0));

  VAR_7 = FUNC_5(1, sizeof(struct HTTP));
  if(!VAR_7)
    return VAR_1;

  FUNC_3(&VAR_7->form, VAR_6->data);
  VAR_8->req.protop = VAR_7;

  if(VAR_8->set.httpversion == VAR_3) {
    if(VAR_6->handler->flags & VAR_4)


      VAR_6->transport = VAR_5;
    else {
      FUNC_6(VAR_8, "HTTP/3 requested for non-HTTPS URL");
      return VAR_2;
    }
  }
  else {
    if(!FUNC_0(VAR_6))

      FUNC_1(VAR_6);
    FUNC_2(VAR_8);
  }
  return VAR_0;
}
