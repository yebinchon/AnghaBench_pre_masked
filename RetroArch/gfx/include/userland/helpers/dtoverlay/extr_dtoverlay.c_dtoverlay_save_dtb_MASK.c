
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long trailer_len; int trailer; int fdt; } ;
typedef int FILE ;
typedef TYPE_1__ DTBLOB_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 long FUNC_3 (int ) ;
 int * FUNC_4 (char const*,char*) ;
 long FUNC_5 (int ,int,long,int *) ;

int FUNC_6(const DTBLOB_T *VAR_0, const char *VAR_1)
{
   FILE *VAR_2 = FUNC_4(VAR_1, "wb");
   int VAR_3 = 0;

   if (VAR_2)
   {
      long VAR_4 = FUNC_3(VAR_0->fdt);
      if (VAR_4 != FUNC_5(VAR_0->fdt, 1, VAR_4, VAR_2))
      {
         FUNC_1("fwrite failed");
         VAR_3 = -2;
         goto error_exit;
      }
      if (VAR_0->trailer_len &&
          (FUNC_5(VAR_0->trailer, 1, VAR_0->trailer_len, VAR_2) != VAR_0->trailer_len))
      {
         FUNC_1("fwrite failed");
         VAR_3 = -2;
         goto error_exit;
      }

      FUNC_0("Wrote %ld bytes to '%s'", VAR_4, VAR_1);
      FUNC_2(VAR_2);
   }
   else
   {
      FUNC_0("Failed to create '%s'", VAR_1);
      VAR_3 = -1;
   }

error_exit:
   return VAR_3;
}
