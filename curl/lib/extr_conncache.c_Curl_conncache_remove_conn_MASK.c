
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {int * data; struct connectbundle* bundle; } ;
struct connectbundle {scalar_t__ num_connections; } ;
struct conncache {int num_conn; } ;
struct TYPE_2__ {struct conncache* conn_cache; } ;
struct Curl_easy {TYPE_1__ state; } ;


 int FUNC_0 (struct Curl_easy*) ;
 int FUNC_1 (struct Curl_easy*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct connectbundle*,struct connectdata*) ;
 int FUNC_4 (struct conncache*,struct connectbundle*) ;
 int FUNC_5 (struct Curl_easy*,char*,int ) ;

void FUNC_6(struct Curl_easy *VAR_0,
                                struct connectdata *VAR_1, bool VAR_2)
{
  struct connectbundle *VAR_3 = VAR_1->bundle;
  struct conncache *VAR_4 = VAR_0->state.conn_cache;



  if(VAR_3) {
    if(VAR_2) {
      FUNC_0(VAR_0);
    }
    FUNC_3(VAR_3, VAR_1);
    if(VAR_3->num_connections == 0)
      FUNC_4(VAR_4, VAR_3);
    VAR_1->bundle = ((void*)0);
    if(VAR_4) {
      VAR_4->num_conn--;
      FUNC_2(FUNC_5(VAR_0, "The cache now contains %zu members\n",
                   VAR_4->num_conn));
    }
    VAR_1->data = ((void*)0);
    if(VAR_2) {
      FUNC_1(VAR_0);
    }
  }
}
