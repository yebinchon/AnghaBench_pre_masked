
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subparts; } ;
typedef TYPE_1__ tool_mime ;
typedef int curl_mime ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;

CURLcode FUNC_3(CURL *VAR_2, tool_mime *VAR_3, curl_mime **VAR_4)
{
  CURLcode VAR_5 = VAR_0;

  *VAR_4 = FUNC_1(VAR_2);
  if(!*VAR_4)
    VAR_5 = VAR_1;
  else
    VAR_5 = FUNC_2(VAR_2, VAR_3->subparts, *VAR_4);
  if(VAR_5) {
    FUNC_0(*VAR_4);
    *VAR_4 = ((void*)0);
  }
  return VAR_5;
}
