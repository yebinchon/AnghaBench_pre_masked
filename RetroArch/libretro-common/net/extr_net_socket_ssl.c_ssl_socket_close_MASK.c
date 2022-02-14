
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct ssl_state {TYPE_1__ net_ctx; int ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(void *VAR_0)
{
   struct ssl_state *VAR_1 = (struct ssl_state*)VAR_0;

   FUNC_0(&VAR_1->ctx);

   FUNC_1(VAR_1->net_ctx.fd);
}
