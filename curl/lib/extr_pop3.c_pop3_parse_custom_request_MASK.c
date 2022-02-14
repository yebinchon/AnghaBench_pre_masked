
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct POP3 {int custom; } ;
struct TYPE_4__ {char** str; } ;
struct TYPE_3__ {struct POP3* protop; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct Curl_easy*,char const*,int ,int *,int *,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct Curl_easy *VAR_5 = VAR_3->data;
  struct POP3 *VAR_6 = VAR_5->req.protop;
  const char *VAR_7 = VAR_5->set.str[VAR_1];


  if(VAR_7)
    VAR_4 = FUNC_0(VAR_5, VAR_7, 0, &VAR_6->custom, ((void*)0), VAR_2);

  return VAR_4;
}
