
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char const*,int) ;
 int FUNC_1 (int ,int,char const*,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(DTBLOB_T *VAR_1, const char *VAR_2, int VAR_3)
{
   const char *VAR_4;
   const char *VAR_5;
   int VAR_6 = 0;

   if (!VAR_3)
      VAR_3 = FUNC_2(VAR_2);

   VAR_4 = VAR_2;
   VAR_5 = VAR_2 + VAR_3;

   if ((VAR_3 > 0) && (VAR_4[VAR_3 - 1] == '/'))
       VAR_5--;

   while (VAR_4 < VAR_5)
   {
      const char *VAR_7;
      int VAR_8;

      if (*VAR_4 != '/')
         return -VAR_0;


      VAR_4++;
      for (VAR_7 = VAR_4;
           (VAR_7 != VAR_5) && (*VAR_7 != '/');
           VAR_7++)
         continue;

      VAR_8 = FUNC_1(VAR_1->fdt, VAR_6, VAR_4,
                                               VAR_7 - VAR_4);
      if (VAR_8 >= 0)
         VAR_6 = VAR_8;
      else
         VAR_6 = FUNC_0(VAR_1->fdt, VAR_6, VAR_4,
                                            VAR_7 - VAR_4);
      if (VAR_6 < 0)
         break;

      VAR_4 = VAR_7;
   }

   if ((VAR_6 >= 0) && (VAR_4 != VAR_5))
      return -VAR_0;

   return VAR_6;
}
