
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Curl_easy {int dummy; } ;
struct TYPE_4__ {int state; int * boundary; int * lastpart; int * firstpart; int * parent; struct Curl_easy* easy; } ;
typedef TYPE_1__ curl_mime ;


 scalar_t__ FUNC_0 (struct Curl_easy*,unsigned char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,char,int) ;
 int FUNC_4 (int *,int ,int *) ;

curl_mime *FUNC_5(struct Curl_easy *VAR_2)
{
  curl_mime *VAR_3;

  VAR_3 = (curl_mime *) FUNC_2(sizeof(*VAR_3));

  if(VAR_3) {
    VAR_3->easy = VAR_2;
    VAR_3->parent = ((void*)0);
    VAR_3->firstpart = ((void*)0);
    VAR_3->lastpart = ((void*)0);

    FUNC_3(VAR_3->boundary, '-', 24);
    if(FUNC_0(VAR_2, (unsigned char *) &VAR_3->boundary[24],
                     VAR_1 + 1)) {

      FUNC_1(VAR_3);
      return ((void*)0);
    }
    FUNC_4(&VAR_3->state, VAR_0, ((void*)0));
  }

  return VAR_3;
}
