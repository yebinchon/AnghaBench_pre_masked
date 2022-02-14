
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fd; int * ssl_ctx; scalar_t__ ssl; } ;
struct http_t {TYPE_1__ sock_state; } ;


 int FUNC_0 (struct http_t*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct http_t *VAR_0)
{
   if (!VAR_0)
      return;

   if (VAR_0->sock_state.fd >= 0)
   {
      FUNC_1(VAR_0->sock_state.fd);







   }
   FUNC_0(VAR_0);
}
