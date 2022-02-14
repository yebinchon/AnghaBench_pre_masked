
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {struct curl_slist* next; int data; } ;


 struct curl_slist* FUNC_0 (struct curl_slist*,int ) ;
 int FUNC_1 (struct curl_slist*) ;

struct curl_slist *FUNC_2(struct curl_slist *VAR_0)
{
  struct curl_slist *VAR_1 = ((void*)0);
  struct curl_slist *VAR_2;

  while(VAR_0) {
    VAR_2 = FUNC_0(VAR_1, VAR_0->data);

    if(!VAR_2) {
      FUNC_1(VAR_1);
      return ((void*)0);
    }

    VAR_1 = VAR_2;
    VAR_0 = VAR_0->next;
  }
  return VAR_1;
}
