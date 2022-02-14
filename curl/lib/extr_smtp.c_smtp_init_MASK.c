
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct SMTP {int dummy; } ;
struct TYPE_2__ {struct SMTP* protop; } ;
struct Curl_easy {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 struct SMTP* FUNC_0 (int,int) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_2)
{
  CURLcode VAR_3 = VAR_0;
  struct Curl_easy *VAR_4 = VAR_2->data;
  struct SMTP *VAR_5;

  VAR_5 = VAR_4->req.protop = FUNC_0(sizeof(struct SMTP), 1);
  if(!VAR_5)
    VAR_3 = VAR_1;

  return VAR_3;
}
