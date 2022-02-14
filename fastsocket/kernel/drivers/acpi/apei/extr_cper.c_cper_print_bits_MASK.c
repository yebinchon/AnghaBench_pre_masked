
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*,char const*,...) ;
 int FUNC_2 (char const*) ;

void FUNC_3(const char *VAR_0, unsigned int VAR_1,
       const char *VAR_2[], unsigned int VAR_3)
{
 int VAR_4, VAR_5 = 0;
 const char *VAR_6;
 char VAR_7[84];

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (!(VAR_1 & (1U << VAR_4)))
   continue;
  VAR_6 = VAR_2[VAR_4];
  if (!VAR_6)
   continue;
  if (VAR_5 && VAR_5 + FUNC_2(VAR_6) + 2 > 80) {
   FUNC_0("%s\n", VAR_7);
   VAR_5 = 0;
  }
  if (!VAR_5)
   VAR_5 = FUNC_1(VAR_7, sizeof(VAR_7), "%s%s", VAR_0, VAR_6);
  else
   VAR_5 += FUNC_1(VAR_7+VAR_5, sizeof(VAR_7)-VAR_5, ", %s", VAR_6);
 }
 if (VAR_5)
  FUNC_0("%s\n", VAR_7);
}
