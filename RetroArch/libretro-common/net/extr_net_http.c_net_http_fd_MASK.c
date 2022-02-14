
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct http_t {TYPE_1__ sock_state; } ;



int FUNC_0(struct http_t *VAR_0)
{
   if (!VAR_0)
      return -1;
   return VAR_0->sock_state.fd;
}
