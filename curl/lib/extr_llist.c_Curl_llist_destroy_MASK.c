
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_llist {scalar_t__ size; int tail; } ;


 int FUNC_0 (struct curl_llist*,int ,void*) ;

void
FUNC_1(struct curl_llist *VAR_0, void *VAR_1)
{
  if(VAR_0) {
    while(VAR_0->size > 0)
      FUNC_0(VAR_0, VAR_0->tail, VAR_1);
  }
}
