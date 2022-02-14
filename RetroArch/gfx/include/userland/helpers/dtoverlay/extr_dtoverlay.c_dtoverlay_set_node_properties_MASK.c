
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fdt; } ;
struct TYPE_6__ {int len; int b; int param; } ;
typedef TYPE_1__ DTOVERLAY_PARAM_T ;
typedef TYPE_2__ DTBLOB_T ;


 int FUNC_0 (TYPE_2__*,char const*,int ) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int,int ,int ,int ) ;

int FUNC_3(DTBLOB_T *VAR_0, const char *VAR_1,
                                  DTOVERLAY_PARAM_T *VAR_2,
                                  unsigned int VAR_3)
{
   int VAR_4 = 0;
   int VAR_5;

   VAR_5 = FUNC_1(VAR_0->fdt, VAR_1);
   if (VAR_5 < 0)
      VAR_5 = FUNC_0(VAR_0, VAR_1, 0);
   if (VAR_5 >= 0)
   {
      int VAR_6;
      for (VAR_6 = 0; (VAR_6 < VAR_3) && (VAR_4 == 0); VAR_6++)
      {
         DTOVERLAY_PARAM_T *VAR_7;

         VAR_7 = VAR_2 + VAR_6;
         VAR_4 = FUNC_2(VAR_0->fdt, VAR_5, VAR_7->param, VAR_7->b, VAR_7->len);
      }
   }
   else
      VAR_4 = VAR_5;
   return VAR_4;
}
