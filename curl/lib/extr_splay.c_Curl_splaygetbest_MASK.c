
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curltime {int member_1; int member_0; } ;
struct Curl_tree {struct Curl_tree* larger; TYPE_1__* samep; int smaller; int key; struct Curl_tree* samen; } ;
struct TYPE_2__ {struct Curl_tree* samen; } ;


 struct Curl_tree* FUNC_0 (struct curltime,struct Curl_tree*) ;
 scalar_t__ FUNC_1 (struct curltime,int ) ;

struct Curl_tree *FUNC_2(struct curltime VAR_0,
                                    struct Curl_tree *VAR_1,
                                    struct Curl_tree **VAR_2)
{
  static struct curltime VAR_3 = {0, 0};
  struct Curl_tree *VAR_4;

  if(!VAR_1) {
    *VAR_2 = ((void*)0);
    return ((void*)0);
  }


  VAR_1 = FUNC_0(VAR_3, VAR_1);
  if(FUNC_1(VAR_0, VAR_1->key) < 0) {

    *VAR_2 = ((void*)0);
    return VAR_1;
  }


  VAR_4 = VAR_1->samen;
  if(VAR_4 != VAR_1) {




    VAR_4->key = VAR_1->key;
    VAR_4->larger = VAR_1->larger;
    VAR_4->smaller = VAR_1->smaller;
    VAR_4->samep = VAR_1->samep;
    VAR_1->samep->samen = VAR_4;

    *VAR_2 = VAR_1;
    return VAR_4;
  }


  VAR_4 = VAR_1->larger;
  *VAR_2 = VAR_1;

  return VAR_4;
}
