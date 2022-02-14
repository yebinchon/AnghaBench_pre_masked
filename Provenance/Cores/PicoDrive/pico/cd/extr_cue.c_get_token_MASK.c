
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, char *VAR_2, int VAR_3)
{
 const char *VAR_4 = VAR_1;
 char VAR_5 = ' ';
 int VAR_6 = 0, VAR_7 = 0;

 while (*VAR_4 && *VAR_4 == ' ') {
  VAR_7++;
  VAR_4++;
 }

 if (*VAR_4 == '\"') {
  VAR_5 = '\"';
  VAR_4++;
 }
 while (*VAR_4 && *VAR_4 != VAR_5 && VAR_6 < VAR_3-1)
  VAR_2[VAR_6++] = *VAR_4++;
 VAR_2[VAR_6] = 0;

 if (VAR_5 == '\"' && *VAR_4 != VAR_5)
  FUNC_0(VAR_0, "cue: bad token: \"%s\"", VAR_1);

 return VAR_6 + VAR_7;
}
