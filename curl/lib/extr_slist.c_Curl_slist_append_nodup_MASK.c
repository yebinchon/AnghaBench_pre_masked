
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {char* data; struct curl_slist* next; } ;


 int FUNC_0 (char*) ;
 struct curl_slist* FUNC_1 (int) ;
 struct curl_slist* FUNC_2 (struct curl_slist*) ;

struct curl_slist *FUNC_3(struct curl_slist *VAR_0, char *VAR_1)
{
  struct curl_slist *VAR_2;
  struct curl_slist *VAR_3;

  FUNC_0(VAR_1);

  VAR_3 = FUNC_1(sizeof(struct curl_slist));
  if(!VAR_3)
    return ((void*)0);

  VAR_3->next = ((void*)0);
  VAR_3->data = VAR_1;


  if(!VAR_0)
    return VAR_3;

  VAR_2 = FUNC_2(VAR_0);
  VAR_2->next = VAR_3;
  return VAR_0;
}
