
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct TYPE_2__ {int infilesize; } ;
struct Curl_easy {TYPE_1__ state; } ;
typedef int smtpstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,int ) ;
 int FUNC_1 (struct Curl_easy*,int,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct Curl_easy*,char*,int) ;
 int FUNC_3 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_5, int VAR_6,
                                     smtpstate VAR_7)
{
  CURLcode VAR_8 = VAR_0;
  struct Curl_easy *VAR_9 = VAR_5->data;

  (void)VAR_7;

  if(VAR_6 != 354) {
    FUNC_2(VAR_9, "DATA failed: %d", VAR_6);
    VAR_8 = VAR_1;
  }
  else {

    FUNC_0(VAR_9, VAR_9->state.infilesize);


    FUNC_1(VAR_9, -1, -1, VAR_2, VAR_3);


    FUNC_3(VAR_5, VAR_4);
  }

  return VAR_8;
}
