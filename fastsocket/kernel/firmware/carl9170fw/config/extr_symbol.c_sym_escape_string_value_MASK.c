
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;

const char *FUNC_5(const char *VAR_0)
{
 const char *VAR_1;
 size_t VAR_2;
 char *VAR_3;
 size_t VAR_4;

 VAR_2 = FUNC_3(VAR_0) + FUNC_3("\"\"") + 1;

 VAR_1 = VAR_0;
 for (;;) {
  VAR_4 = FUNC_2(VAR_1, "\"\\");
  VAR_1 += VAR_4;

  if (VAR_1[0] == '\0')
   break;

  VAR_2++;
  VAR_1++;
 }

 VAR_3 = FUNC_0(VAR_2);
 VAR_3[0] = '\0';

 FUNC_1(VAR_3, "\"");

 VAR_1 = VAR_0;
 for (;;) {
  VAR_4 = FUNC_2(VAR_1, "\"\\");
  FUNC_4(VAR_3, VAR_1, VAR_4);
  VAR_1 += VAR_4;

  if (VAR_1[0] == '\0')
   break;

  FUNC_1(VAR_3, "\\");
  FUNC_4(VAR_3, VAR_1++, 1);
 }

 FUNC_1(VAR_3, "\"");
 return VAR_3;
}
