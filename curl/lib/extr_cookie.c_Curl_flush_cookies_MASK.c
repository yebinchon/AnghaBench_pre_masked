
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * cookielist; } ;
struct TYPE_4__ {scalar_t__* str; } ;
struct Curl_easy {int * cookies; TYPE_3__* share; TYPE_2__ change; TYPE_1__ set; } ;
struct TYPE_6__ {int * cookies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct Curl_easy*) ;
 int FUNC_2 (struct Curl_easy*,int ,int ) ;
 int FUNC_3 (struct Curl_easy*,int ) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct Curl_easy*,char*,scalar_t__) ;

void FUNC_7(struct Curl_easy *VAR_3, bool VAR_4)
{
  if(VAR_3->set.str[VAR_2]) {
    if(VAR_3->change.cookielist) {



      FUNC_1(VAR_3);
    }

    FUNC_2(VAR_3, VAR_1, VAR_0);


    if(FUNC_4(VAR_3->cookies, VAR_3->set.str[VAR_2]))
      FUNC_6(VAR_3, "WARNING: failed to save cookies in %s\n",
            VAR_3->set.str[VAR_2]);
  }
  else {
    if(VAR_4 && VAR_3->change.cookielist) {


      FUNC_5(VAR_3->change.cookielist);
      VAR_3->change.cookielist = ((void*)0);
    }
    FUNC_2(VAR_3, VAR_1, VAR_0);
  }

  if(VAR_4 && (!VAR_3->share || (VAR_3->cookies != VAR_3->share->cookies))) {
    FUNC_0(VAR_3->cookies);
    VAR_3->cookies = ((void*)0);
  }
  FUNC_3(VAR_3, VAR_1);
}
