
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct curltime {unsigned int member_1; int member_0; } ;
struct Curl_tree {struct Curl_tree* samep; struct Curl_tree* samen; struct curltime key; struct Curl_tree* larger; struct Curl_tree* smaller; } ;


 struct Curl_tree* FUNC_0 (struct curltime,struct Curl_tree*) ;
 scalar_t__ FUNC_1 (struct curltime,struct curltime) ;

struct Curl_tree *FUNC_2(struct curltime VAR_0,
                                   struct Curl_tree *VAR_1,
                                   struct Curl_tree *VAR_2)
{
  static const struct curltime VAR_3 = {
    (time_t)-1, (unsigned int)-1
  };

  if(VAR_2 == ((void*)0))
    return VAR_1;

  if(VAR_1 != ((void*)0)) {
    VAR_1 = FUNC_0(VAR_0, VAR_1);
    if(FUNC_1(VAR_0, VAR_1->key) == 0) {




      VAR_2->key = VAR_3;

      VAR_2->samen = VAR_1;
      VAR_2->samep = VAR_1->samep;
      VAR_1->samep->samen = VAR_2;
      VAR_1->samep = VAR_2;

      return VAR_1;
    }
  }

  if(VAR_1 == ((void*)0)) {
    VAR_2->smaller = VAR_2->larger = ((void*)0);
  }
  else if(FUNC_1(VAR_0, VAR_1->key) < 0) {
    VAR_2->smaller = VAR_1->smaller;
    VAR_2->larger = VAR_1;
    VAR_1->smaller = ((void*)0);

  }
  else {
    VAR_2->larger = VAR_1->larger;
    VAR_2->smaller = VAR_1;
    VAR_1->larger = ((void*)0);
  }
  VAR_2->key = VAR_0;


  VAR_2->samen = VAR_2;
  VAR_2->samep = VAR_2;
  return VAR_2;
}
