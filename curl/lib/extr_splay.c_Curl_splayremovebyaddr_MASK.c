
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct curltime {unsigned int member_1; int member_0; } ;
struct Curl_tree {struct Curl_tree* larger; struct Curl_tree* smaller; int key; TYPE_1__* samep; struct Curl_tree* samen; } ;
struct TYPE_2__ {struct Curl_tree* samen; } ;


 struct Curl_tree* FUNC_0 (int ,struct Curl_tree*) ;
 scalar_t__ FUNC_1 (struct curltime const,int ) ;

int FUNC_2(struct Curl_tree *VAR_0,
                           struct Curl_tree *VAR_1,
                           struct Curl_tree **VAR_2)
{
  static const struct curltime VAR_3 = {
    (time_t)-1, (unsigned int)-1
  };
  struct Curl_tree *VAR_4;

  if(!VAR_0 || !VAR_1)
    return 1;

  if(FUNC_1(VAR_3, VAR_1->key) == 0) {


    if(VAR_1->samen == VAR_1)

      return 3;

    VAR_1->samep->samen = VAR_1->samen;
    VAR_1->samen->samep = VAR_1->samep;


    VAR_1->samen = VAR_1;

    *VAR_2 = VAR_0;
    return 0;
  }

  VAR_0 = FUNC_0(VAR_1->key, VAR_0);
  if(VAR_0 != VAR_1)
    return 2;



  VAR_4 = VAR_0->samen;
  if(VAR_4 != VAR_0) {



    VAR_4->key = VAR_0->key;
    VAR_4->larger = VAR_0->larger;
    VAR_4->smaller = VAR_0->smaller;
    VAR_4->samep = VAR_0->samep;
    VAR_0->samep->samen = VAR_4;
  }
  else {

    if(VAR_0->smaller == ((void*)0))
      VAR_4 = VAR_0->larger;
    else {
      VAR_4 = FUNC_0(VAR_1->key, VAR_0->smaller);
      VAR_4->larger = VAR_0->larger;
    }
  }

  *VAR_2 = VAR_4;

  return 0;
}
