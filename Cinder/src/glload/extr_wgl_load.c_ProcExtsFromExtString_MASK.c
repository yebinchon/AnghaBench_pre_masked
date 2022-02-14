
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ptrdiff_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0)
{
 size_t VAR_1 = FUNC_2(VAR_0);
 const char *VAR_2 = VAR_0 + VAR_1;
 const char *VAR_3 = VAR_0;
 char VAR_4[256];

 while(*VAR_3)
 {

  int VAR_5 = 0;
  const char *VAR_6 = FUNC_1(VAR_3, ' ');
  int VAR_7 = 0;
  if(VAR_6 == ((void*)0))
  {
   VAR_6 = VAR_2;
   VAR_7 = 1;
  }

  VAR_5 = (int)((ptrdiff_t)VAR_6 - (ptrdiff_t)VAR_3);

  if(VAR_5 > 255)
   return;

  FUNC_3(VAR_4, VAR_3, VAR_5);
  VAR_4[VAR_5] = '\0';

  FUNC_0(VAR_4);

  VAR_3 = VAR_6 + 1;
  if(VAR_7) break;
 }
}
