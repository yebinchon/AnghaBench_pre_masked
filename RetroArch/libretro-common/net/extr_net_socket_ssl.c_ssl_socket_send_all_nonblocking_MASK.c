
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ssl_state {int ctx; int net_ctx; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,size_t) ;

ssize_t FUNC_2(void *VAR_0, const void *VAR_1, size_t VAR_2, bool VAR_3)
{
   struct ssl_state *VAR_4 = (struct ssl_state*)VAR_0;
   const uint8_t *VAR_5 = (const uint8_t*)VAR_1;
   ssize_t VAR_6 = VAR_2;
   int VAR_7;

   FUNC_0(&VAR_4->net_ctx);

   VAR_7 = FUNC_1(&VAR_4->ctx, VAR_5, VAR_2);

   if (VAR_7 <= 0)
      return -1;

   return VAR_6;
}
