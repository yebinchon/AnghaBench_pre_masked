
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {struct curl_slist* next; } ;



__attribute__((used)) static struct curl_slist *FUNC_0(struct curl_slist *VAR_0)
{
  struct curl_slist *VAR_1;


  if(!VAR_0)
    return ((void*)0);


  VAR_1 = VAR_0;
  while(VAR_1->next) {
    VAR_1 = VAR_1->next;
  }
  return VAR_1;
}
