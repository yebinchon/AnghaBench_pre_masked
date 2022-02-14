
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Curl_easy {int dummy; } ;
struct TYPE_3__ {int state; struct Curl_easy* easy; } ;
typedef TYPE_1__ curl_mimepart ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,int ,int *) ;

void FUNC_2(curl_mimepart *VAR_1, struct Curl_easy *VAR_2)
{
  FUNC_0((char *) VAR_1, 0, sizeof(*VAR_1));
  VAR_1->easy = VAR_2;
  FUNC_1(&VAR_1->state, VAR_0, ((void*)0));
}
