
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int FUNC_1 (int *,int ,char*,char const*,char const*) ;
 char* FUNC_2 (char const*,char) ;
 char const* VAR_3 ;
 char const* VAR_4 ;

__attribute__((used)) static int FUNC_3(void *VAR_5, const char *VAR_6, const char *VAR_7)
{
   const char *VAR_8 = FUNC_2(VAR_6, ':');
   if (!VAR_8) {
       FUNC_1(((void*)0), VAR_0,
              "No media specifier was specified in '%s' in option '%s'\n",
               VAR_7, VAR_6);
       return FUNC_0(VAR_1);
   }
   VAR_8++;
   switch (VAR_8[0]) {
   case 'a' : VAR_2 = VAR_7; break;
   case 's' : VAR_3 = VAR_7; break;
   case 'v' : VAR_4 = VAR_7; break;
   default:
       FUNC_1(((void*)0), VAR_0,
              "Invalid media specifier '%s' in option '%s'\n", VAR_8, VAR_6);
       return FUNC_0(VAR_1);
   }
   return 0;
}
