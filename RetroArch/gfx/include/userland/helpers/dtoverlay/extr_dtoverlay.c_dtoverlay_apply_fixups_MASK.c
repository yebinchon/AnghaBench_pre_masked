
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ fixup_type_t ;
struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void const*,unsigned long) ;
 int FUNC_1 (void*,unsigned long,scalar_t__) ;
 void* FUNC_2 (int ,int,char const*,int,int*) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (char*,char const*,scalar_t__,...) ;
 char* FUNC_5 (char const*,char) ;
 unsigned long FUNC_6 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_7(DTBLOB_T *VAR_2, const char *VAR_3,
                                  uint32_t VAR_4, fixup_type_t VAR_5)
{
   const char *VAR_6 = VAR_3;

   while (VAR_6[0])
   {
      const char *VAR_7, *VAR_8;
      char *VAR_9;
      const void *VAR_10;
      int VAR_11;
      int VAR_12;
      unsigned long VAR_13;
      uint32_t VAR_14;

      VAR_7 = FUNC_5(VAR_6, ':');
      if (!VAR_7)
         return -VAR_0;
      VAR_7++;

      VAR_8 = FUNC_5(VAR_7, ':');
      if (!VAR_8)
         return -VAR_0;
      VAR_8++;

      VAR_13 = FUNC_6(VAR_8, &VAR_9, 10);
      if ((VAR_9 == VAR_8) || (VAR_9[0] != 0))
         return -VAR_0;

      VAR_12 = FUNC_3(VAR_2->fdt, VAR_6, VAR_7 - 1 - VAR_6);
      if (VAR_12 < 0)
         return VAR_12;

      VAR_10 = FUNC_2(VAR_2->fdt, VAR_12, VAR_7,
                                     VAR_8 - 1 - VAR_7, &VAR_11);
      if (!VAR_10)
         return VAR_11;
      if (VAR_13 > (VAR_11 - 4))
         return -VAR_0;




      if (VAR_5 == VAR_1)
      {
         VAR_14 = VAR_4 + FUNC_0(VAR_10, VAR_13);
         FUNC_4("  phandle fixup %d+%d->%d", VAR_4, VAR_14 - VAR_4, VAR_14);
      }
      else
      {
         VAR_14 = VAR_4;
         FUNC_4("  phandle ref '%s'->%d", VAR_7, VAR_14);
      }

      FUNC_1((void *)VAR_10, VAR_13, VAR_14);

      VAR_6 = VAR_9 + 1;
   }

   return 0;
}
