
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2(const char* VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_1;
 int VAR_4 = FUNC_0(VAR_0, '\n') != ((void*)0);
 int VAR_5 = 0;
 int VAR_6 = FUNC_1(VAR_0);

 if ((VAR_6 > 0) && (VAR_0[VAR_6-1] == '\n'))
  VAR_5 = 1;

 *VAR_3++ = '"';
 --VAR_2;

 if (VAR_4) {
  *VAR_3++ = '"';
  *VAR_3++ = '\n';
  *VAR_3++ = '"';
  VAR_2 -= 3;
 }

 while (*VAR_0 != '\0' && VAR_2 > 1) {
  if (*VAR_0 == '"')
   *VAR_3++ = '\\';
  else if (*VAR_0 == '\n') {
   *VAR_3++ = '\\';
   *VAR_3++ = 'n';
   *VAR_3++ = '"';
   *VAR_3++ = '\n';
   *VAR_3++ = '"';
   VAR_2 -= 5;
   ++VAR_0;
   goto next;
  }
  else if (*VAR_0 == '\\') {
   *VAR_3++ = '\\';
   VAR_2--;
  }
  *VAR_3++ = *VAR_0++;
next:
  --VAR_2;
 }

 if (VAR_4 && VAR_5)
  VAR_3 -= 3;

 *VAR_3++ = '"';
 *VAR_3 = '\0';

 return VAR_1;
}
