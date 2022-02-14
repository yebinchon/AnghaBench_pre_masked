
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int switch_ctx_data_t ;




 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
                                      unsigned *VAR_1, unsigned *VAR_2)
{
   switch_ctx_data_t *VAR_3 = (switch_ctx_data_t *)VAR_0;

   switch (FUNC_0())
      {
         default:
         case 128:
            *VAR_1 = 1280;
            *VAR_2 = 720;
            break;
         case 129:
            *VAR_1 = 1920;
            *VAR_2 = 1080;
            break;
      }
}
