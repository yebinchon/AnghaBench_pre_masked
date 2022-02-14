
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct time_node {scalar_t__ eid; } ;
struct curl_llist_element {scalar_t__ ptr; struct curl_llist_element* next; } ;
struct curl_llist {struct curl_llist_element* head; } ;
struct TYPE_2__ {struct curl_llist timeoutlist; } ;
struct Curl_easy {TYPE_1__ state; } ;
typedef scalar_t__ expire_id ;


 int FUNC_0 (struct curl_llist*,struct curl_llist_element*,int *) ;

__attribute__((used)) static void
FUNC_1(struct Curl_easy *VAR_0, expire_id VAR_1)
{
  struct curl_llist_element *VAR_2;
  struct curl_llist *VAR_3 = &VAR_0->state.timeoutlist;

  for(VAR_2 = VAR_3->head; VAR_2; VAR_2 = VAR_2->next) {
    struct time_node *VAR_4 = (struct time_node *)VAR_2->ptr;
    if(VAR_4->eid == VAR_1) {
      FUNC_0(VAR_3, VAR_2, ((void*)0));
      return;
    }
  }
}
