
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curltime {int dummy; } ;
struct Curl_tree {int payload; } ;
struct Curl_multi {int num_alive; int timetree; struct Curl_easy* easyp; scalar_t__ in_callback; } ;
struct Curl_easy {struct Curl_easy* next; } ;
typedef scalar_t__ CURLMcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct curltime FUNC_0 () ;
 int FUNC_1 (struct curltime,int ,struct Curl_tree**) ;
 int FUNC_2 (struct Curl_multi*) ;
 int FUNC_3 (struct Curl_multi*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct curltime,struct Curl_multi*,int ) ;
 scalar_t__ FUNC_6 (struct Curl_multi*,struct curltime,struct Curl_easy*) ;
 int VAR_3 ;
 int FUNC_7 (struct Curl_easy*,int *) ;
 int FUNC_8 (int *) ;

CURLMcode FUNC_9(struct Curl_multi *VAR_4, int *VAR_5)
{
  struct Curl_easy *VAR_6;
  CURLMcode VAR_7 = VAR_1;
  struct Curl_tree *VAR_8;
  struct curltime VAR_9 = FUNC_0();

  if(!FUNC_3(VAR_4))
    return VAR_0;

  if(VAR_4->in_callback)
    return VAR_2;

  VAR_6 = VAR_4->easyp;
  while(VAR_6) {
    CURLMcode VAR_10;
    FUNC_4(VAR_3);

    FUNC_7(VAR_6, &VAR_3);
    VAR_10 = FUNC_6(VAR_4, VAR_9, VAR_6);
    FUNC_8(&VAR_3);

    if(VAR_10)
      VAR_7 = VAR_10;

    VAR_6 = VAR_6->next;
  }
  do {
    VAR_4->timetree = FUNC_1(VAR_9, VAR_4->timetree, &VAR_8);
    if(VAR_8)

      (void)FUNC_5(VAR_9, VAR_4, VAR_8->payload);

  } while(VAR_8);

  *VAR_5 = VAR_4->num_alive;

  if(VAR_1 >= VAR_7)
    FUNC_2(VAR_4);

  return VAR_7;
}
