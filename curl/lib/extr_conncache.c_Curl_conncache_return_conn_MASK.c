
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {int lastused; struct Curl_easy* data; } ;
struct Curl_easy {TYPE_1__* multi; } ;
struct TYPE_2__ {int maxconnects; int num_easy; } ;


 struct connectdata* FUNC_0 (struct Curl_easy*) ;
 size_t FUNC_1 (struct Curl_easy*) ;
 int FUNC_2 (struct Curl_easy*,struct connectdata*,int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct Curl_easy*,char*) ;

bool FUNC_5(struct connectdata *VAR_2)
{
  struct Curl_easy *VAR_3 = VAR_2->data;


  size_t VAR_4 =
    (VAR_3->multi->maxconnects < 0) ? VAR_3->multi->num_easy * 4:
    VAR_3->multi->maxconnects;
  struct connectdata *VAR_5 = ((void*)0);

  VAR_2->data = ((void*)0);
  VAR_2->lastused = FUNC_3();
  if(VAR_4 > 0 &&
     FUNC_1(VAR_3) > VAR_4) {
    FUNC_4(VAR_3, "Connection cache is full, closing the oldest one.\n");

    VAR_5 = FUNC_0(VAR_3);
    if(VAR_5) {

      (void)FUNC_2(VAR_3, VAR_5, VAR_0);
    }
  }

  return (VAR_5 == VAR_2) ? VAR_0 : VAR_1;

}
