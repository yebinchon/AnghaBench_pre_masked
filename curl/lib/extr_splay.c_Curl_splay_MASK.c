
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curltime {int dummy; } ;
struct Curl_tree {struct Curl_tree* smaller; struct Curl_tree* larger; int key; } ;


 long FUNC_0 (struct curltime,int ) ;

struct Curl_tree *FUNC_1(struct curltime VAR_0,
                             struct Curl_tree *VAR_1)
{
  struct Curl_tree VAR_2, *VAR_3, *VAR_4, *VAR_5;

  if(VAR_1 == ((void*)0))
    return VAR_1;
  VAR_2.smaller = VAR_2.larger = ((void*)0);
  VAR_3 = VAR_4 = &VAR_2;

  for(;;) {
    long VAR_6 = FUNC_0(VAR_0, VAR_1->key);
    if(VAR_6 < 0) {
      if(VAR_1->smaller == ((void*)0))
        break;
      if(FUNC_0(VAR_0, VAR_1->smaller->key) < 0) {
        VAR_5 = VAR_1->smaller;
        VAR_1->smaller = VAR_5->larger;
        VAR_5->larger = VAR_1;
        VAR_1 = VAR_5;
        if(VAR_1->smaller == ((void*)0))
          break;
      }
      VAR_4->smaller = VAR_1;
      VAR_4 = VAR_1;
      VAR_1 = VAR_1->smaller;
    }
    else if(VAR_6 > 0) {
      if(VAR_1->larger == ((void*)0))
        break;
      if(FUNC_0(VAR_0, VAR_1->larger->key) > 0) {
        VAR_5 = VAR_1->larger;
        VAR_1->larger = VAR_5->smaller;
        VAR_5->smaller = VAR_1;
        VAR_1 = VAR_5;
        if(VAR_1->larger == ((void*)0))
          break;
      }
      VAR_3->larger = VAR_1;
      VAR_3 = VAR_1;
      VAR_1 = VAR_1->larger;
    }
    else
      break;
  }

  VAR_3->larger = VAR_1->smaller;
  VAR_4->smaller = VAR_1->larger;
  VAR_1->smaller = VAR_2.larger;
  VAR_1->larger = VAR_2.smaller;

  return VAR_1;
}
