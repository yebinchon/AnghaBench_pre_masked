
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curltime {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct curl_llist {scalar_t__ size; int tail; } ;
struct Curl_multi {int timetree; } ;
struct TYPE_2__ {int timenode; struct curl_llist timeoutlist; struct curltime expiretime; } ;
struct Curl_easy {TYPE_1__ state; struct Curl_multi* multi; } ;


 int FUNC_0 (struct curl_llist*,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct Curl_easy*,char*,...) ;

void FUNC_3(struct Curl_easy *VAR_0)
{
  struct Curl_multi *VAR_1 = VAR_0->multi;
  struct curltime *VAR_2 = &VAR_0->state.expiretime;



  if(!VAR_1)
    return;

  if(VAR_2->tv_sec || VAR_2->tv_usec) {


    struct curl_llist *VAR_3 = &VAR_0->state.timeoutlist;
    int VAR_4;

    VAR_4 = FUNC_1(VAR_1->timetree,
                                &VAR_0->state.timenode,
                                &VAR_1->timetree);
    if(VAR_4)
      FUNC_2(VAR_0, "Internal error clearing splay node = %d\n", VAR_4);


    while(VAR_3->size > 0) {
      FUNC_0(VAR_3, VAR_3->tail, ((void*)0));
    }




    VAR_2->tv_sec = 0;
    VAR_2->tv_usec = 0;
  }
}
