
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_5(char *VAR_1, int VAR_2, const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;
 const char *VAR_7;

 *VAR_1 = 0;
 if (VAR_3) {
  int VAR_8 = FUNC_0(VAR_1, VAR_2);
  FUNC_2(VAR_1 + VAR_8, VAR_3);
  VAR_6 = VAR_8 + FUNC_3(VAR_3);
 }

 VAR_7 = VAR_5 + FUNC_3(VAR_5) - 1;
 for (; VAR_7 >= VAR_5 && *VAR_7 != VAR_0; VAR_7--)
  ;
 VAR_7++;
 FUNC_4(VAR_1 + VAR_6, VAR_7, VAR_2 - VAR_6 - 1);

 VAR_1[VAR_2 - 8] = 0;
 if (VAR_1[FUNC_3(VAR_1) - 4] == '.')
  VAR_1[FUNC_3(VAR_1) - 4] = 0;
 if (VAR_4)
  FUNC_1(VAR_1, VAR_4);
}
