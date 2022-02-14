
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ssl_state {int ctx; int net_ctx; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,size_t) ;

ssize_t FUNC_3(void *VAR_1, bool *VAR_2, void *VAR_3, size_t VAR_4)
{
   struct ssl_state *VAR_5 = (struct ssl_state*)VAR_1;
   const uint8_t *VAR_6 = (const uint8_t*)VAR_3;

   ssize_t VAR_7;

   FUNC_1(&VAR_5->net_ctx);

   VAR_7 = FUNC_2(&VAR_5->ctx, (unsigned char*)VAR_6, VAR_4);

   if (VAR_7 > 0)
      return VAR_7;

   if (VAR_7 == 0)
   {

      *VAR_2 = 1;
      return -1;
   }

   if (FUNC_0((int)VAR_7) || VAR_7 == VAR_0)
      return 0;

   *VAR_2 = 1;
   return -1;
}
