
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {scalar_t__ connection_id; struct Curl_easy* data; } ;
struct connectbundle {int dummy; } ;
struct conncache {int num_conn; int next_connection_id; } ;
struct TYPE_2__ {int conn_cache; } ;
struct Curl_easy {TYPE_1__ state; } ;
typedef int key ;
typedef scalar_t__ CURLcode ;


 int FUNC_0 (struct Curl_easy*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct connectbundle* FUNC_1 (struct connectdata*,int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct connectbundle*,struct connectdata*) ;
 scalar_t__ FUNC_4 (struct Curl_easy*,struct connectbundle**) ;
 int FUNC_5 (struct connectbundle*) ;
 int FUNC_6 (int ,char*,struct connectbundle*) ;
 int FUNC_7 (struct connectdata*,char*,int,int *) ;
 int FUNC_8 (struct Curl_easy*,char*,scalar_t__,int ) ;

CURLcode FUNC_9(struct conncache *VAR_3,
                                 struct connectdata *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  struct connectbundle *VAR_6;
  struct connectbundle *VAR_7 = ((void*)0);
  struct Curl_easy *VAR_8 = VAR_4->data;


  VAR_6 = FUNC_1(VAR_4, VAR_8->state.conn_cache, ((void*)0));
  if(!VAR_6) {
    int VAR_9;
    char VAR_10[VAR_2];

    VAR_5 = FUNC_4(VAR_8, &VAR_7);
    if(VAR_5) {
      goto unlock;
    }

    FUNC_7(VAR_4, VAR_10, sizeof(VAR_10), ((void*)0));
    VAR_9 = FUNC_6(VAR_8->state.conn_cache, VAR_10, VAR_7);

    if(!VAR_9) {
      FUNC_5(VAR_7);
      VAR_5 = VAR_1;
      goto unlock;
    }
    VAR_6 = VAR_7;
  }

  FUNC_3(VAR_6, VAR_4);
  VAR_4->connection_id = VAR_3->next_connection_id++;
  VAR_3->num_conn++;

  FUNC_2(FUNC_8(VAR_4->data, "Added connection %ld. "
               "The cache now contains %zu members\n",
               VAR_4->connection_id, VAR_3->num_conn));

  unlock:
  FUNC_0(VAR_8);

  return VAR_5;
}
