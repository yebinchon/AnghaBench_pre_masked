
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char* const,char*) ;

int
FUNC_3 (int VAR_3, char *const VAR_4[], const char *VAR_5)
{
 static int VAR_6 = 1;
 int VAR_7;
 char *VAR_8;

 if (VAR_6 == 1)
  if (VAR_1 >= VAR_3 ||
     VAR_4[VAR_1][0] != '-' || VAR_4[VAR_1][1] == '\0')
   return -1;
  else if (FUNC_2(VAR_4[VAR_1], "--") == 0) {
   VAR_1++;
   return -1;
  }
 VAR_2 = VAR_7 = VAR_4[VAR_1][VAR_6];
 if (VAR_7 == ':' || (VAR_8=FUNC_1(VAR_5, VAR_7)) == 0) {
  FUNC_0 (": illegal option -- ", VAR_7);
  if (VAR_4[VAR_1][++VAR_6] == '\0') {
   VAR_1++;
   VAR_6 = 1;
  }
  return '?';
 }
 if (*++VAR_8 == ':') {
  if (VAR_4[VAR_1][VAR_6+1] != '\0')
   VAR_0 = &VAR_4[VAR_1++][VAR_6+1];
  else if (++VAR_1 >= VAR_3) {
   FUNC_0 (": option requires an argument -- ", VAR_7);
   VAR_6 = 1;
   return '?';
  } else
   VAR_0 = VAR_4[VAR_1++];
  VAR_6 = 1;
 } else {
  if (VAR_4[VAR_1][++VAR_6] == '\0') {
   VAR_6 = 1;
   VAR_1++;
  }
  VAR_0 = 0;
 }
 return VAR_7;
}
