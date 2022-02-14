
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct curl_llist_element {struct Curl_message* ptr; } ;
struct TYPE_3__ {struct curl_llist_element* head; } ;
struct Curl_multi {TYPE_1__ msglist; int in_callback; } ;
struct Curl_message {int extmsg; } ;
typedef int CURLMsg ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct curl_llist_element*,int *) ;
 scalar_t__ FUNC_2 (struct Curl_multi*) ;
 int FUNC_3 (scalar_t__) ;

CURLMsg *FUNC_4(struct Curl_multi *VAR_0, int *VAR_1)
{
  struct Curl_message *VAR_2;

  *VAR_1 = 0;

  if(FUNC_2(VAR_0) &&
     !VAR_0->in_callback &&
     FUNC_0(&VAR_0->msglist)) {

    struct curl_llist_element *VAR_3;


    VAR_3 = VAR_0->msglist.head;

    VAR_2 = VAR_3->ptr;


    FUNC_1(&VAR_0->msglist, VAR_3, ((void*)0));

    *VAR_1 = FUNC_3(FUNC_0(&VAR_0->msglist));

    return &VAR_2->extmsg;
  }
  return ((void*)0);
}
