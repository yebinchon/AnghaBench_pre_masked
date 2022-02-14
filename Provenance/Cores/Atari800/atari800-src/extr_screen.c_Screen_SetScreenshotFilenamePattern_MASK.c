
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(const char *VAR_4)
{
 char *VAR_5 = VAR_2;
 char VAR_6 = '0';
 VAR_3 = 1;

 while (VAR_5 < VAR_2 + VAR_1 - 9) {

  if (*VAR_4 == '#') {
   if (VAR_6 > '0')
    break;

   do {
    VAR_3 *= 10;
    VAR_4++;
    VAR_6++;


   } while (VAR_6 < '9' && *VAR_4 == '#');
   *VAR_5++ = '%';
   *VAR_5++ = '0';
   *VAR_5++ = VAR_6;
   *VAR_5++ = 'd';
   continue;
  }
  if (*VAR_4 == '%')
   *VAR_5++ = '%';
  *VAR_5++ = *VAR_4;
  if (*VAR_4 == '\0')
   return;
  VAR_4++;
 }
 FUNC_0("Invalid filename pattern for screenshots, using default.");
 FUNC_1(VAR_2, VAR_0);
 VAR_3 = 1000;
}
