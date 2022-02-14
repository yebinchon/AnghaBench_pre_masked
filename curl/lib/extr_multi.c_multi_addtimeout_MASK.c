
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timediff_t ;
struct time_node {size_t eid; int list; int time; } ;
struct curltime {int dummy; } ;
struct curl_llist_element {scalar_t__ ptr; struct curl_llist_element* next; } ;
struct curl_llist {struct curl_llist_element* head; } ;
struct TYPE_2__ {struct time_node* expires; struct curl_llist timeoutlist; } ;
struct Curl_easy {TYPE_1__ state; } ;
typedef size_t expire_id ;
typedef int CURLMcode ;


 int VAR_0 ;
 size_t FUNC_0 (struct curl_llist*) ;
 int FUNC_1 (struct curl_llist*,struct curl_llist_element*,struct time_node*,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct curltime*,int) ;

__attribute__((used)) static CURLMcode
FUNC_4(struct Curl_easy *VAR_1,
                 struct curltime *VAR_2,
                 expire_id VAR_3)
{
  struct curl_llist_element *VAR_4;
  struct time_node *VAR_5;
  struct curl_llist_element *VAR_6 = ((void*)0);
  size_t VAR_7;
  struct curl_llist *VAR_8 = &VAR_1->state.timeoutlist;

  VAR_5 = &VAR_1->state.expires[VAR_3];


  FUNC_3(&VAR_5->time, VAR_2, sizeof(*VAR_2));
  VAR_5->eid = VAR_3;

  VAR_7 = FUNC_0(VAR_8);
  if(VAR_7) {

    for(VAR_4 = VAR_8->head; VAR_4; VAR_4 = VAR_4->next) {
      struct time_node *VAR_9 = (struct time_node *)VAR_4->ptr;
      timediff_t VAR_10 = FUNC_2(VAR_9->time, VAR_5->time);
      if(VAR_10 > 0)
        break;
      VAR_6 = VAR_4;
    }

  }



  FUNC_1(VAR_8, VAR_6, VAR_5, &VAR_5->list);
  return VAR_0;
}
