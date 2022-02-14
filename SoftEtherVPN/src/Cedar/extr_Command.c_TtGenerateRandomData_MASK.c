
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;
typedef char UCHAR ;


 char* FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int FUNC_1 () ;

void FUNC_2(UCHAR **VAR_1, UINT *VAR_2)
{
 UCHAR *VAR_3;
 UINT VAR_4;
 UINT VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_4 = VAR_0;
 VAR_3 = FUNC_0(VAR_4);
 for (VAR_5 = 0;VAR_5 < VAR_4;VAR_5++)
 {
  VAR_3[VAR_5] = FUNC_1() % 256;

  if (VAR_3[VAR_5] == '!')
  {
   VAR_3[VAR_5] = '_';
  }
 }

 *VAR_1 = VAR_3;
 *VAR_2 = VAR_4;
}
