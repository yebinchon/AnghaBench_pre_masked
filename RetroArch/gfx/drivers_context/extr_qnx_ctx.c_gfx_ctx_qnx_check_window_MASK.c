
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int egl; } ;
typedef TYPE_1__ qnx_ctx_data_t ;


 int FUNC_0 (int *,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, bool *VAR_1,
      bool *VAR_2, unsigned *VAR_3, unsigned *VAR_4,
      bool VAR_5)
{
   unsigned VAR_6, VAR_7;
   qnx_ctx_data_t *VAR_8 = (qnx_ctx_data_t*)VAR_0;

   *VAR_1 = 0;





   if (VAR_6 != *VAR_3 || VAR_7 != *VAR_4)
   {
      *VAR_3 = VAR_6;
      *VAR_4 = VAR_7;
      *VAR_2 = 1;
   }


   if (VAR_5)
      *VAR_1 = 1;
}
