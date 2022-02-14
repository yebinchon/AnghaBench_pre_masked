
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct curl_slist {char* data; struct curl_slist* next; } ;
struct TYPE_3__ {struct curl_slist* first; } ;
typedef int CURLcode ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char const*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 char** VAR_3 ;

CURLcode FUNC_3(void)
{

  if(VAR_2) {
    int VAR_4;
    struct curl_slist *VAR_5;
    const char *VAR_6;
    FUNC_0(FUNC_1(&VAR_1, ""));

    for(VAR_4 = 0; ((VAR_6 = VAR_3[VAR_4]) != ((void*)0)); VAR_4++)
      FUNC_0(FUNC_1(&VAR_1, VAR_6));

    if(VAR_2) {
      for(VAR_5 = VAR_2->first; VAR_5; VAR_5 = VAR_5->next)
        FUNC_0(FUNC_1(&VAR_1, VAR_5->data));
    }
    FUNC_0(FUNC_1(&VAR_1, ""));
    FUNC_0(FUNC_1(&VAR_1, "*/"));

    FUNC_2(VAR_2);
    VAR_2 = ((void*)0);
  }

  FUNC_0(FUNC_1(&VAR_1, ""));
  FUNC_0(FUNC_1(&VAR_1, "ret = curl_easy_perform(hnd);"));
  FUNC_0(FUNC_1(&VAR_1, ""));

  return VAR_0;
}
