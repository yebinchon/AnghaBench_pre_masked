
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Curl_multi {int dummy; } ;
struct TYPE_4__ {int result; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef int CURLcode ;
typedef TYPE_2__ CURLMsg ;
typedef scalar_t__ CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_0 (struct Curl_multi*,int*) ;
 scalar_t__ FUNC_1 (struct Curl_multi*,int*) ;
 scalar_t__ FUNC_2 (struct Curl_multi*,int *,int ,int,int *) ;

__attribute__((used)) static CURLcode FUNC_3(struct Curl_multi *VAR_7)
{
  bool VAR_8 = VAR_5;
  CURLMcode VAR_9 = VAR_3;
  CURLcode VAR_10 = VAR_1;

  while(!VAR_8 && !VAR_9) {
    int VAR_11 = 0;

    VAR_9 = FUNC_2(VAR_7, ((void*)0), 0, 1000, ((void*)0));

    if(!VAR_9)
      VAR_9 = FUNC_1(VAR_7, &VAR_11);


    if(!VAR_9 && !VAR_11) {
      int VAR_12;
      CURLMsg *VAR_13 = FUNC_0(VAR_7, &VAR_12);
      if(VAR_13) {
        VAR_10 = VAR_13->data.result;
        VAR_8 = VAR_6;
      }
    }
  }


  if(VAR_9) {
    VAR_10 = (VAR_9 == VAR_4) ? VAR_2 :


              VAR_0;
  }

  return VAR_10;
}
