
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_llist {int * tail; int * head; int dtor; scalar_t__ size; } ;
typedef int curl_llist_dtor ;



void
FUNC_0(struct curl_llist *VAR_0, curl_llist_dtor VAR_1)
{
  VAR_0->size = 0;
  VAR_0->dtor = VAR_1;
  VAR_0->head = ((void*)0);
  VAR_0->tail = ((void*)0);
}
