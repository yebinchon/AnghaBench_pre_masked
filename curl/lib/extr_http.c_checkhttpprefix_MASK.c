
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_slist {char* data; struct curl_slist* next; } ;
struct TYPE_2__ {struct curl_slist* http200aliases; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef scalar_t__ statusline ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (struct Curl_easy*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static statusline
FUNC_6(struct Curl_easy *VAR_5,
                const char *VAR_6, size_t VAR_7)
{
  struct curl_slist *VAR_8 = VAR_5->set.http200aliases;
  statusline VAR_9 = VAR_2;
  statusline VAR_10 = VAR_7 >= 5? VAR_3 : VAR_4;
  while(VAR_8) {
    if(FUNC_1(VAR_8->data, VAR_6, VAR_7)) {
      VAR_9 = VAR_10;
      break;
    }
    VAR_8 = VAR_8->next;
  }

  if((VAR_9 != VAR_3) && (FUNC_1("HTTP/", VAR_6, VAR_7)))
    VAR_9 = VAR_10;




  return VAR_9;
}
