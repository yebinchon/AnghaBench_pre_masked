
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 char* FUNC_4 (int ,int,int*) ;
 void* FUNC_5 (int ,int,char const**,int*) ;
 void* FUNC_6 (int ,int,char const*,int*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,char const*,int) ;
 int FUNC_10 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_11(DTBLOB_T *VAR_2, int VAR_3,
                                       int VAR_4, uint32_t VAR_5)
{




   int VAR_6 = 0;
   int VAR_7;
   int VAR_8;


   for (VAR_7 = FUNC_2(VAR_2->fdt, VAR_3);
        (VAR_7 >= 0) && (VAR_6 == 0);
        VAR_7 = FUNC_7(VAR_2->fdt, VAR_7))
   {
      const char *VAR_9;
      const void *VAR_10;
      int VAR_11;
      void *VAR_12;
      int VAR_13;
      int VAR_14;

      VAR_10 = FUNC_5(VAR_2->fdt, VAR_7,
                                       &VAR_9, &VAR_11);
      if (!VAR_10)
         return -VAR_1;

      VAR_12 = FUNC_6(VAR_2->fdt, VAR_4, VAR_9, &VAR_13);
      if (!VAR_12)
         return -VAR_0;

      for (VAR_14 = 0; (VAR_14 + 4) <= VAR_11; VAR_14 += 4)
      {
         uint32_t VAR_15;
         int VAR_16 = FUNC_0(VAR_10, VAR_14);
         if ((VAR_16 + 4) > VAR_13)
            return -VAR_0;

         VAR_15 = VAR_5 + FUNC_0(VAR_12, VAR_16);
         FUNC_10("  phandle fixup %d+%d->%d", VAR_5, VAR_15 - VAR_5, VAR_15);

         FUNC_1(VAR_12, VAR_16, VAR_15);
      }
   }


   for (VAR_8 = FUNC_3(VAR_2->fdt, VAR_3);
        (VAR_8 >= 0) && (VAR_6 == 0);
        VAR_8 = FUNC_8(VAR_2->fdt, VAR_8))
   {
      const char *VAR_17;
      int VAR_18;
      int VAR_19;

      VAR_17 = FUNC_4(VAR_2->fdt, VAR_8, &VAR_18);

      VAR_19 = FUNC_9(VAR_2->fdt, VAR_4,
                                                 VAR_17, VAR_18);

      if (VAR_19 >= 0)
      {
         VAR_6 = FUNC_11(VAR_2, VAR_8, VAR_19,
                                           VAR_5);
      }
      else
      {
         VAR_6 = VAR_19;
      }
   }

   return VAR_6;
}
