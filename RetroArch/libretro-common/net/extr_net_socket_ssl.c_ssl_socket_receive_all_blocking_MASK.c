
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ssl_state {int ctx; int net_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,size_t) ;

int FUNC_2(void *VAR_3, void *VAR_4, size_t VAR_5)
{
   struct ssl_state *VAR_6 = (struct ssl_state*)VAR_3;
   const uint8_t *VAR_7 = (const uint8_t*)VAR_4;

   FUNC_0(&VAR_6->net_ctx);

   while (1)
   {

      int VAR_8 = FUNC_1(&VAR_6->ctx, (unsigned char*)VAR_7, VAR_5);

      if (VAR_8 == VAR_1 || VAR_8 == VAR_2)
         continue;

      if (VAR_8 == VAR_0)
         break;

      if (VAR_8 == 0)
         break;

      if (VAR_8 < 0)
         return -1;
   }

   return 1;
}
