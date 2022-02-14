
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* to_write; size_t to_write_len; int write_watcher; TYPE_1__* server; int after_write_cb; scalar_t__ written; } ;
typedef TYPE_2__ ebb_connection ;
typedef int ebb_after_write_cb ;
struct TYPE_4__ {int loop; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;

int
FUNC_3(ebb_connection *VAR_1, const char *VAR_2, size_t VAR_3, ebb_after_write_cb VAR_4)
{
  if(FUNC_2(&VAR_1->write_watcher))
    return 0;
  FUNC_0(!VAR_0);
  VAR_1->to_write = VAR_2;
  VAR_1->to_write_len = VAR_3;
  VAR_1->written = 0;
  VAR_1->after_write_cb = VAR_4;
  FUNC_1(VAR_1->server->loop, &VAR_1->write_watcher);
  return 1;
}
