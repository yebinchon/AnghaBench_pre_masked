
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_socket_state_t {int fd; int ssl_ctx; scalar_t__ ssl; } ;


 int FUNC_0 (int ,char const*,size_t,int) ;
 int FUNC_1 (int ,char const*,size_t,int) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(
      struct http_socket_state_t *VAR_0, bool *VAR_1, const char *VAR_2)
{
   size_t VAR_3;
   if (*VAR_1)
      return;
   VAR_3 = FUNC_2(VAR_2);
   {
      if (!FUNC_0(
               VAR_0->fd, VAR_2, VAR_3, 1))
         *VAR_1 = 1;
   }
}
