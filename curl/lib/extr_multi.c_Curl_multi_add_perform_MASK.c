
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;
struct SingleRequest {int keepon; } ;
struct Curl_multi {scalar_t__ in_callback; } ;
struct Curl_easy {struct SingleRequest req; } ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,struct connectdata*) ;
 int FUNC_1 (struct Curl_easy*,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct Curl_multi*,struct Curl_easy*) ;
 int FUNC_3 (struct Curl_easy*,int ) ;

CURLMcode FUNC_4(struct Curl_multi *VAR_3,
                                 struct Curl_easy *VAR_4,
                                 struct connectdata *VAR_5)
{
  CURLMcode VAR_6;

  if(VAR_3->in_callback)
    return VAR_0;

  VAR_6 = FUNC_2(VAR_3, VAR_4);
  if(!VAR_6) {
    struct SingleRequest *VAR_7 = &VAR_4->req;



    FUNC_1(VAR_4, ((void*)0));


    FUNC_3(VAR_4, VAR_1);
    FUNC_0(VAR_4, VAR_5);
    VAR_7->keepon |= VAR_2;
  }
  return VAR_6;
}
