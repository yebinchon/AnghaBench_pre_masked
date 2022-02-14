
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct curl_slist {struct curl_slist* next; int data; } ;
struct TYPE_4__ {struct curl_slist* cookielist; } ;
struct TYPE_3__ {int cookiesession; } ;
struct Curl_easy {TYPE_2__ change; struct CookieInfo* cookies; TYPE_1__ set; } ;
struct CookieInfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct CookieInfo* FUNC_0 (struct Curl_easy*,int ,struct CookieInfo*,int ) ;
 int FUNC_1 (struct Curl_easy*,int ,int ) ;
 int FUNC_2 (struct Curl_easy*,int ) ;
 int FUNC_3 (struct curl_slist*) ;
 int FUNC_4 (struct Curl_easy*,char*,int ) ;

void FUNC_5(struct Curl_easy *VAR_2)
{
  struct curl_slist *VAR_3 = VAR_2->change.cookielist;
  if(VAR_3) {
    FUNC_1(VAR_2, VAR_1, VAR_0);
    while(VAR_3) {
      struct CookieInfo *VAR_4 = FUNC_0(VAR_2,
                                        VAR_3->data,
                                        VAR_2->cookies,
                                        VAR_2->set.cookiesession);
      if(!VAR_4)



        FUNC_4(VAR_2, "ignoring failed cookie_init for %s\n", VAR_3->data);
      else
        VAR_2->cookies = VAR_4;
      VAR_3 = VAR_3->next;
    }
    FUNC_3(VAR_2->change.cookielist);
    VAR_2->change.cookielist = ((void*)0);
    FUNC_2(VAR_2, VAR_1);
  }
}
