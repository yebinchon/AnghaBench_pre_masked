
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct POP3 {int id; } ;
struct TYPE_5__ {char* path; } ;
struct TYPE_6__ {TYPE_2__ up; } ;
struct TYPE_4__ {struct POP3* protop; } ;
struct Curl_easy {TYPE_3__ state; TYPE_1__ req; } ;
typedef int CURLcode ;


 int FUNC_0 (struct Curl_easy*,char const*,int ,int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_1)
{

  struct Curl_easy *VAR_2 = VAR_1->data;
  struct POP3 *VAR_3 = VAR_2->req.protop;
  const char *VAR_4 = &VAR_2->state.up.path[1];


  return FUNC_0(VAR_2, VAR_4, 0, &VAR_3->id, ((void*)0), VAR_0);
}
