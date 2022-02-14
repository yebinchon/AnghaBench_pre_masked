
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int FUNC_2(int VAR_0, const char **VAR_1)
{
   const char *VAR_2 = FUNC_1(VAR_1[0], '/');
   const char *VAR_3 = VAR_2 ? VAR_2+1:VAR_1[0];
   (void)VAR_0;
   FUNC_0("usage: %s [command [args]]\n", VAR_3);
   FUNC_0("   %s commands - list available commands\n", VAR_3);
   return 0;
}
