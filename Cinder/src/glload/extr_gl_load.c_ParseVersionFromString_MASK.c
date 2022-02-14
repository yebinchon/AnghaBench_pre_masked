
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ptrdiff_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_4(int *VAR_0, int *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = ((void*)0);
 int VAR_4 = 0;
 char VAR_5[10];
 *VAR_1 = 0;
 *VAR_0 = 0;

 VAR_3 = FUNC_1(VAR_2, '.');
 if(!VAR_3)
  return;

 VAR_4 = (int)((ptrdiff_t)VAR_3 - (ptrdiff_t)VAR_2);
 FUNC_3(VAR_5, VAR_2, VAR_4);
 VAR_5[VAR_4] = '\0';

 *VAR_0 = FUNC_0(VAR_5);
 VAR_3 = FUNC_1(VAR_2 + VAR_4 + 1, ' ');
 if(!VAR_3)
 {

  FUNC_2(VAR_5, VAR_2 + VAR_4 + 1);
 }
 else
 {

  int VAR_6 = (int)((ptrdiff_t)VAR_3 - (ptrdiff_t)VAR_2);
  VAR_6 = VAR_6 - (VAR_4 + 1);
  FUNC_3(VAR_5, VAR_2 + VAR_4 + 1, VAR_6);
  VAR_5[VAR_6] = '\0';
 }

 *VAR_1 = FUNC_0(VAR_5);
}
