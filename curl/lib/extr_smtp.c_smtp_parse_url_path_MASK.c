
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smtp_conn {int domain; } ;
struct TYPE_4__ {struct smtp_conn smtpc; } ;
struct connectdata {struct Curl_easy* data; TYPE_1__ proto; } ;
struct TYPE_6__ {char* path; } ;
struct TYPE_5__ {TYPE_3__ up; } ;
struct Curl_easy {TYPE_2__ state; } ;
typedef int localhost ;
typedef int CURLcode ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct Curl_easy*,char const*,int ,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_2)
{

  struct Curl_easy *VAR_3 = VAR_2->data;
  struct smtp_conn *VAR_4 = &VAR_2->proto.smtpc;
  const char *VAR_5 = &VAR_3->state.up.path[1];
  char VAR_6[VAR_0 + 1];


  if(!*VAR_5) {
    if(!FUNC_0(VAR_6, sizeof(VAR_6)))
      VAR_5 = VAR_6;
    else
      VAR_5 = "localhost";
  }


  return FUNC_1(VAR_2->data, VAR_5, 0, &VAR_4->domain, ((void*)0), VAR_1);
}
