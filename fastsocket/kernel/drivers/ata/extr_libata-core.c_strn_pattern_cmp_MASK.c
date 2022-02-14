
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 const char *VAR_3;
 int VAR_4;




 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (VAR_3 && ((*(VAR_3 + 1)) == 0))
  VAR_4 = VAR_3 - VAR_0;
 else {
  VAR_4 = FUNC_1(VAR_1);
  if (!VAR_4) {
   if (!*VAR_0)
    return 0;
   return -1;
  }
 }

 return FUNC_2(VAR_0, VAR_1, VAR_4);
}
