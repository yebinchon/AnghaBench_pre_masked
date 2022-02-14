
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* conn_cache; } ;
struct Curl_easy {TYPE_2__ state; } ;
struct TYPE_3__ {size_t num_conn; } ;


 int FUNC_0 (struct Curl_easy*) ;
 int FUNC_1 (struct Curl_easy*) ;

size_t FUNC_2(struct Curl_easy *VAR_0)
{
  size_t VAR_1;
  FUNC_0(VAR_0);
  VAR_1 = VAR_0->state.conn_cache->num_conn;
  FUNC_1(VAR_0);
  return VAR_1;
}
