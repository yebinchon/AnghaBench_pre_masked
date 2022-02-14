
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static const char *FUNC_1(void)
{
   static const char *VAR_0[] = {
      "/usr/share/fonts/TTF/DejaVuSansMono.ttf",
      "/usr/share/fonts/TTF/DejaVuSans.ttf",
      "/usr/share/fonts/truetype/ttf-dejavu/DejaVuSansMono.ttf",
      "/usr/share/fonts/truetype/ttf-dejavu/DejaVuSans.ttf",
      "/usr/share/fonts/truetype/dejavu/DejaVuSansMono.ttf",
      "/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf",
      "osd-font.ttf",

      ((void*)0)
   };

   const char **VAR_1;

   for (VAR_1 = VAR_0; *VAR_1; ++VAR_1)
      if (FUNC_0(*VAR_1))
         return *VAR_1;

   return ((void*)0);
}
