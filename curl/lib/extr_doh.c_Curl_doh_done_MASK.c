
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * headers; int pending; } ;
struct TYPE_6__ {TYPE_2__ doh; } ;
struct TYPE_4__ {struct Curl_easy* dohfor; } ;
struct Curl_easy {TYPE_3__ req; TYPE_1__ set; } ;
typedef scalar_t__ CURLcode ;


 int FUNC_0 (struct Curl_easy*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct Curl_easy*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct Curl_easy *VAR_1, CURLcode VAR_2)
{
  struct Curl_easy *VAR_3 = VAR_1->set.dohfor;

  VAR_3->req.doh.pending--;
  FUNC_3(VAR_3, "a DOH request is completed, %u to go\n", VAR_3->req.doh.pending);
  if(VAR_2)
    FUNC_3(VAR_3, "DOH request %s\n", FUNC_1(VAR_2));

  if(!VAR_3->req.doh.pending) {

    FUNC_2(VAR_3->req.doh.headers);
    VAR_3->req.doh.headers = ((void*)0);
    FUNC_0(VAR_3, 0, VAR_0);
  }
  return 0;
}
