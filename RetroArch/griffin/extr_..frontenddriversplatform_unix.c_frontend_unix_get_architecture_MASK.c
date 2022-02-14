
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* machine; } ;
typedef enum frontend_architecture { ____Placeholder_frontend_architecture } frontend_architecture ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (struct utsname*) ;

__attribute__((used)) static enum frontend_architecture FUNC_2(void)
{
   struct utsname VAR_9;
   const char *VAR_10 = ((void*)0);

   if (FUNC_1(&VAR_9) != 0)
      return VAR_4;

   VAR_10 = VAR_9.machine;

   if (FUNC_0(VAR_10, "aarch64"))
      return VAR_2;
   else if (
         FUNC_0(VAR_10, "armv7l") ||
         FUNC_0(VAR_10, "armv7b")
      )
      return VAR_1;
   else if (
         FUNC_0(VAR_10, "armv6l") ||
         FUNC_0(VAR_10, "armv6b") ||
         FUNC_0(VAR_10, "armv5tel") ||
         FUNC_0(VAR_10, "arm")
      )
      return VAR_0;
   else if (FUNC_0(VAR_10, "x86_64"))
      return VAR_8;
   else if (FUNC_0(VAR_10, "x86"))
         return VAR_7;
   else if (FUNC_0(VAR_10, "ppc64"))
         return VAR_5;
   else if (FUNC_0(VAR_10, "mips"))
         return VAR_3;
   else if (FUNC_0(VAR_10, "tile"))
         return VAR_6;

   return VAR_4;
}
