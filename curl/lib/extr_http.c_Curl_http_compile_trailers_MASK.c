
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_slist {struct curl_slist* next; int data; } ;
struct TYPE_2__ {scalar_t__ crlf; scalar_t__ prefer_ascii; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef int Curl_send_buffer ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int **,char const*,int ) ;
 scalar_t__ FUNC_1 (int **,char*,int ,char const*) ;
 int FUNC_2 (struct Curl_easy*,char*) ;
 char* FUNC_3 (int ,char) ;
 int FUNC_4 (char const*) ;

CURLcode FUNC_5(struct curl_slist *VAR_1,
                                    Curl_send_buffer **VAR_2,
                                    struct Curl_easy *VAR_3)
{
  char *VAR_4 = ((void*)0);
  CURLcode VAR_5 = VAR_0;
  const char *VAR_6 = ((void*)0);
  const char *VAR_7 = ((void*)0);

  if(



     (VAR_3->set.crlf)) {

    VAR_6 = "\n";
    VAR_7 = "\x0a";
  }
  else {
    VAR_6 = "\r\n";
    VAR_7 = "\x0d\x0a";
  }

  while(VAR_1) {

    VAR_4 = FUNC_3(VAR_1->data, ':');
    if(VAR_4 && *(VAR_4 + 1) == ' ') {
      VAR_5 = FUNC_1(VAR_2, "%s%s", VAR_1->data,
                                VAR_6);
      if(VAR_5)
        return VAR_5;
    }
    else
      FUNC_2(VAR_3, "Malformatted trailing header ! Skipping trailer.");
    VAR_1 = VAR_1->next;
  }
  VAR_5 = FUNC_0(VAR_2, VAR_7,
                           FUNC_4(VAR_7));
  return VAR_5;
}
