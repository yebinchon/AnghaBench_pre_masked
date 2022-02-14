
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdt_is_malloced; void* fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (void*,void*,int) ;

int FUNC_5(DTBLOB_T *VAR_1, int VAR_2)
{
   int VAR_3 = FUNC_1(VAR_1->fdt);
   int VAR_4 = 0;

   if (VAR_2 < 0)
      VAR_2 = VAR_3 - VAR_2;

   if (VAR_2 > VAR_3)
   {
      void *VAR_5;
      VAR_5 = FUNC_3(VAR_2);
      if (VAR_5)
      {
         FUNC_4(VAR_5, VAR_1->fdt, VAR_3);
         FUNC_0(VAR_5, VAR_2);

         if (VAR_1->fdt_is_malloced)
            FUNC_2(VAR_1->fdt);

         VAR_1->fdt = VAR_5;
         VAR_1->fdt_is_malloced = 1;
      }
      else
      {
         VAR_4 = -VAR_0;
      }
   }
   else if (VAR_2 < VAR_3)
   {

      VAR_4 = -VAR_0;
   }

   return VAR_4;
}
