
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mimepost; int ** str; } ;
struct TYPE_3__ {int * url; void* url_alloc; int * referer; void* referer_alloc; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ change; } ;
typedef enum dupstring { ____Placeholder_dupstring } dupstring ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct Curl_easy *VAR_2)
{

  enum dupstring VAR_3;
  for(VAR_3 = (enum dupstring)0; VAR_3 < VAR_1; VAR_3++) {
    FUNC_1(VAR_2->set.str[VAR_3]);
  }

  if(VAR_2->change.referer_alloc) {
    FUNC_1(VAR_2->change.referer);
    VAR_2->change.referer_alloc = VAR_0;
  }
  VAR_2->change.referer = ((void*)0);
  if(VAR_2->change.url_alloc) {
    FUNC_1(VAR_2->change.url);
    VAR_2->change.url_alloc = VAR_0;
  }
  VAR_2->change.url = ((void*)0);

  FUNC_0(&VAR_2->set.mimepost);
}
