
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fdt_property {char* data; } ;
struct TYPE_7__ {int fdt; } ;
struct TYPE_6__ {char* param; int len; int b; } ;
typedef TYPE_1__ DTOVERLAY_PARAM_T ;
typedef TYPE_2__ DTBLOB_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char const*,int) ;
 int FUNC_2 (int ,int,char const*,int ,int ) ;
 struct fdt_property* FUNC_3 (int ,int,char const*,int*) ;
 int FUNC_4 (int ,int,char const*,int ,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*,char) ;

int FUNC_7(DTBLOB_T *VAR_1, const DTOVERLAY_PARAM_T *VAR_2,
                           unsigned int VAR_3)
{
   int VAR_4 = 0;
   unsigned int VAR_5;

   for (VAR_5=0; (VAR_5<VAR_3) && (VAR_4 == 0); VAR_5++) {
      const DTOVERLAY_PARAM_T *VAR_6;
      const char *VAR_7, *VAR_8;
      int VAR_9, VAR_10;

      VAR_6 = VAR_2 + VAR_5;
      VAR_7 = VAR_6->param;
      VAR_8 = FUNC_6(VAR_7, '/');

      if (!VAR_8)
      {
         VAR_4 = FUNC_0(VAR_0);
         break;
      }


      if (VAR_8 == VAR_7)
         VAR_10 = 1;
      else
         VAR_10 = VAR_8 - VAR_7;


      VAR_9 = FUNC_1(VAR_1, VAR_7, VAR_10);
      if (VAR_9 >= 0)
      {
         const char *VAR_11 = VAR_8 + 1;
         int VAR_12;
         struct fdt_property *VAR_13;

         if ((FUNC_5(VAR_11, "bootargs") == 0) &&
            ((VAR_13 = FUNC_3(VAR_1->fdt, VAR_9, VAR_11, &VAR_12)) != ((void*)0)) &&
            (VAR_12 > 0) && *VAR_13->data)
         {
            VAR_13->data[VAR_12 - 1] = ' ';
            VAR_4 = FUNC_2(VAR_1->fdt, VAR_9, VAR_11, VAR_6->b, VAR_6->len);
         }
         else
            VAR_4 = FUNC_4(VAR_1->fdt, VAR_9, VAR_11, VAR_6->b, VAR_6->len);
      }
      else
         VAR_4 = VAR_9;
   }

   return VAR_4;
}
