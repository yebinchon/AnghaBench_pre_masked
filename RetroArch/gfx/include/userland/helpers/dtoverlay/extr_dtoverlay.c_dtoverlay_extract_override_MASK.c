
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fdt32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int,char const*,...) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*,int ) ;
 char* FUNC_4 (char const*,int ,int) ;
 char const* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_7,
                                      int *VAR_8,
                                      const char **VAR_9, int *VAR_10,
                                      const char **VAR_11, int *VAR_12,
          int *VAR_13, int *VAR_14)
{
   const char *VAR_15;
   const char *VAR_16, *VAR_17;
   int VAR_18, VAR_19, VAR_20, VAR_21;
   const char *VAR_22 = ".;:#?";
   int VAR_23;

   VAR_15 = *VAR_9;
   VAR_18 = *VAR_10;
   if (VAR_18 <= 0)
   {
      if (VAR_18 < 0)
  return VAR_18;
      *VAR_8 = 0;
      *VAR_11 = ((void*)0);
      return VAR_1;
   }


   if (VAR_18 < (sizeof(fdt32_t) + 1 + 1))
   {
      FUNC_2("  override %s: data is truncated or mangled",
                      VAR_7);
      return -VAR_6;
   }

   VAR_21 = FUNC_3(VAR_15, 0);
   *VAR_8 = VAR_21;

   VAR_15 += sizeof(fdt32_t);
   VAR_18 -= sizeof(fdt32_t);

   VAR_17 = FUNC_4(VAR_15, 0, VAR_18);
   if (!VAR_17)
   {
      FUNC_2("  override %s: string is not NUL-terminated",
                      VAR_7);
      return -VAR_6;
   }

   VAR_16 = VAR_15;

   VAR_19 = VAR_17 - VAR_16;
   *VAR_9 = VAR_15 + (VAR_19 + 1);
   *VAR_10 = VAR_18 - (VAR_19 + 1);

   if (VAR_21 <= 0)
   {
      if (VAR_21 < 0)
         return -VAR_5;

      *VAR_11 = VAR_16;
      *VAR_12 = VAR_19;
      return VAR_3;
   }

   VAR_20 = FUNC_6(VAR_16, VAR_22);

   *VAR_11 = VAR_16;
   *VAR_12 = VAR_20;
   if (VAR_20 < VAR_19)
   {

      char VAR_24 = VAR_16[VAR_20];
      if (VAR_24 == '?')
      {

         *VAR_13 = 0;
         *VAR_14 = 0;
         VAR_23 = VAR_0;
         FUNC_1("  override %s: boolean target %.*s",
                         VAR_7, VAR_20, VAR_16);
      }
      else
      {

         *VAR_13 = FUNC_0(VAR_16 + VAR_20 + 1);
         *VAR_14 = 1 << (FUNC_5(VAR_22, VAR_24) - VAR_22);
         VAR_23 = VAR_2;
         FUNC_1("  override %s: cell target %.*s @ offset %d (size %d)",
                         VAR_7, VAR_20, VAR_16, *VAR_13, *VAR_14);
      }
   }
   else
   {
      *VAR_13 = -1;
      *VAR_14 = 0;
      VAR_23 = VAR_4;
      FUNC_1("  override %s: string target '%.*s'",
                      VAR_7, VAR_20, VAR_16);
   }

   return VAR_23;
}
