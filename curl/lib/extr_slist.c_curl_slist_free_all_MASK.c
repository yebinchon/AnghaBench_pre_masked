
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int data; struct curl_slist* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct curl_slist*) ;

void FUNC_2(struct curl_slist *VAR_0)
{
  struct curl_slist *VAR_1;
  struct curl_slist *VAR_2;

  if(!VAR_0)
    return;

  VAR_2 = VAR_0;
  do {
    VAR_1 = VAR_2->next;
    FUNC_0(VAR_2->data);
    FUNC_1(VAR_2);
    VAR_2 = VAR_1;
  } while(VAR_1);
}
