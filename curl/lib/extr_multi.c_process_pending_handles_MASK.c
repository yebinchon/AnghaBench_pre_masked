
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct curl_llist_element {struct Curl_easy* ptr; } ;
struct TYPE_4__ {struct curl_llist_element* head; } ;
struct Curl_multi {TYPE_2__ pending; } ;
struct TYPE_3__ {int previouslypending; } ;
struct Curl_easy {scalar_t__ mstate; TYPE_1__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct Curl_easy*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct curl_llist_element*,int *) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct Curl_easy*,int ) ;

__attribute__((used)) static void FUNC_4(struct Curl_multi *VAR_4)
{
  struct curl_llist_element *VAR_5 = VAR_4->pending.head;
  if(VAR_5) {
    struct Curl_easy *VAR_6 = VAR_5->ptr;

    FUNC_2(VAR_6->mstate == VAR_1);

    FUNC_3(VAR_6, VAR_0);


    FUNC_1(&VAR_4->pending, VAR_5, ((void*)0));


    FUNC_0(VAR_6, 0, VAR_2);


    VAR_6->state.previouslypending = VAR_3;
  }
}
