
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 int VAR_0 ;
 unsigned long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static png_uint_32
FUNC_3(const char *VAR_1, const char *VAR_2)

{
   char *VAR_3 = ((void*)0);
   unsigned long VAR_4 = FUNC_2(VAR_2, &VAR_3, 10);

   if (VAR_3 != ((void*)0) && *VAR_3 == 0 && VAR_4 > 0 && VAR_4 <= 0x7fffffff)
      return (png_uint_32) VAR_4;

   FUNC_1(VAR_0, "genpng: %s: invalid number %s\n", VAR_1, VAR_2);
   FUNC_0(1);
}
