
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* timeserver; scalar_t__* proxy_user; scalar_t__* http_proxy; } ;
typedef TYPE_1__ conf_t ;


 int VAR_0 ;

int FUNC_0(conf_t *VAR_1)
{
  int VAR_2;

  *VAR_1->http_proxy = 0;
  for(VAR_2 = 0; VAR_2<VAR_0; VAR_2++)
    VAR_1->proxy_user[VAR_2] = 0;
  *VAR_1->timeserver = 0;
  return 1;
}
