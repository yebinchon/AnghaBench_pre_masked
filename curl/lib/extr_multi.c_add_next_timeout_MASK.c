
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timediff_t ;
struct time_node {int time; } ;
struct curltime {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct curl_llist_element {scalar_t__ ptr; struct curl_llist_element* next; } ;
struct curl_llist {struct curl_llist_element* head; } ;
struct Curl_multi {int timetree; } ;
struct TYPE_2__ {int timenode; struct curl_llist timeoutlist; struct curltime expiretime; } ;
struct Curl_easy {TYPE_1__ state; } ;
typedef int CURLMcode ;


 int VAR_0 ;
 int FUNC_0 (struct curl_llist*,struct curl_llist_element*,int *) ;
 int FUNC_1 (struct curltime,int ,int *) ;
 scalar_t__ FUNC_2 (int ,struct curltime) ;
 int FUNC_3 (struct curltime*,int *,int) ;

__attribute__((used)) static CURLMcode FUNC_4(struct curltime VAR_1,
                                  struct Curl_multi *VAR_2,
                                  struct Curl_easy *VAR_3)
{
  struct curltime *VAR_4 = &VAR_3->state.expiretime;
  struct curl_llist *VAR_5 = &VAR_3->state.timeoutlist;
  struct curl_llist_element *VAR_6;
  struct time_node *VAR_7 = ((void*)0);




  for(VAR_6 = VAR_5->head; VAR_6;) {
    struct curl_llist_element *VAR_8 = VAR_6->next;
    timediff_t VAR_9;
    VAR_7 = (struct time_node *)VAR_6->ptr;
    VAR_9 = FUNC_2(VAR_7->time, VAR_1);
    if(VAR_9 <= 0)

      FUNC_0(VAR_5, VAR_6, ((void*)0));
    else

      break;
    VAR_6 = VAR_8;
  }
  VAR_6 = VAR_5->head;
  if(!VAR_6) {


    VAR_4->tv_sec = 0;
    VAR_4->tv_usec = 0;
  }
  else {

    FUNC_3(VAR_4, &VAR_7->time, sizeof(*VAR_4));



    VAR_2->timetree = FUNC_1(*VAR_4, VAR_2->timetree,
                                       &VAR_3->state.timenode);
  }
  return VAR_0;
}
