
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ max_phandle; void* fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*,int) ;
 int FUNC_4 (void*,int,int *) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (void*) ;

DTBLOB_T *FUNC_7(void *VAR_1, int VAR_2)
{
   DTBLOB_T *VAR_3 = ((void*)0);
   int VAR_4;
   int VAR_5;
   int VAR_6;

   VAR_6 = FUNC_2(VAR_1);
   if (VAR_6 != 0)
   {
      FUNC_1("not a valid FDT - err %d", VAR_6);
      goto error_exit;
   }

   VAR_5 = FUNC_6(VAR_1);

   if (VAR_2 < VAR_5)
   {
      FUNC_1("fdt is too large");
      VAR_6 = -VAR_0;
      goto error_exit;
   }

   if (VAR_2 > VAR_5)
         FUNC_5(VAR_1, VAR_2);

   VAR_3 = FUNC_0(1, sizeof(DTBLOB_T));
   if (!VAR_3)
   {
      FUNC_1("out of memory");
      goto error_exit;
   }

   VAR_3->fdt = VAR_1;
   VAR_3->max_phandle = 0;




   for (VAR_4 = 0;
        VAR_4 >= 0;
        VAR_4 = FUNC_4(VAR_1, VAR_4, ((void*)0)))
   {
      uint32_t VAR_7 = FUNC_3(VAR_1, VAR_4);
      if (VAR_7 > VAR_3->max_phandle)
         VAR_3->max_phandle = VAR_7;
   }

error_exit:
   return VAR_3;
}
