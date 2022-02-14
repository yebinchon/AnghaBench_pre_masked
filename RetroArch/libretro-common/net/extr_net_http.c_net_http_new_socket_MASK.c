
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int ssl_ctx; scalar_t__ ssl; } ;
struct http_connection_t {TYPE_1__ sock_state; int domain; int port; } ;
struct addrinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,void*,int) ;
 int FUNC_3 (void**,int ,int ,int ) ;
 int FUNC_4 (void**) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,void*,int,int) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct http_connection_t *VAR_1)
{
   int VAR_2;
   struct addrinfo *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
   int VAR_5 = FUNC_3(
         (void**)&VAR_3, VAR_1->port, VAR_1->domain, VAR_0);
   VAR_4 = VAR_3;

   while (VAR_5 >= 0)
   {
      {
         VAR_2 = FUNC_2(VAR_5, (void*)VAR_4, 1);

         if (VAR_2 >= 0 && FUNC_5(VAR_5))
            break;

         FUNC_1(VAR_5);
      }

      VAR_5 = FUNC_4((void**)&VAR_4);
   }

   if (VAR_3)
      FUNC_0(VAR_3);

   VAR_1->sock_state.fd = VAR_5;

   return VAR_5;
}
