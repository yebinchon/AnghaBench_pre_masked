
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slist_wc {struct curl_slist* last; struct curl_slist* first; } ;
struct curl_slist {struct curl_slist* next; } ;


 struct curl_slist* FUNC_0 (int *,char const*) ;
 int FUNC_1 (struct curl_slist*) ;
 struct slist_wc* FUNC_2 (int) ;

struct slist_wc *FUNC_3(struct slist_wc *VAR_0,
                                 const char *VAR_1)
{
  struct curl_slist *VAR_2 = FUNC_0(((void*)0), VAR_1);

  if(!VAR_2)
    return ((void*)0);

  if(!VAR_0) {
    VAR_0 = FUNC_2(sizeof(struct slist_wc));

    if(!VAR_0) {
      FUNC_1(VAR_2);
      return ((void*)0);
    }

    VAR_0->first = VAR_2;
    VAR_0->last = VAR_2;
    return VAR_0;
  }

  VAR_0->last->next = VAR_2;
  VAR_0->last = VAR_0->last->next;
  return VAR_0;
}
