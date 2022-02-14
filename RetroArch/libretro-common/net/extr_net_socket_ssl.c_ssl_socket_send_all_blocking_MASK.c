
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ssl_state {int ctx; int net_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,size_t) ;

int FUNC_2(void *VAR_2, const void *VAR_3, size_t VAR_4, bool VAR_5)
{
   struct ssl_state *VAR_6 = (struct ssl_state*)VAR_2;
   const uint8_t *VAR_7 = (const uint8_t*)VAR_3;
   int VAR_8;

   FUNC_0(&VAR_6->net_ctx);

   while ((VAR_8 = FUNC_1(&VAR_6->ctx, VAR_7, VAR_4)) <= 0)
   {
      if (VAR_8 != VAR_0 && VAR_8 != VAR_1)
         return 0;
   }

   return 1;
}
