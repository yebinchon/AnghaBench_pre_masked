
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int UINT ;


 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(char *VAR_0, UINT VAR_1, UINT64 VAR_2)
{
 char VAR_3[128];
 char VAR_4[128];
 UINT VAR_5, VAR_6, VAR_7;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_3, VAR_2);

 VAR_7 = 0;
 VAR_6 = FUNC_1(VAR_3);

 for (VAR_5 = VAR_6 - 1;((int)VAR_5) >= 0;VAR_5--)
 {
  VAR_4[VAR_7++] = VAR_3[VAR_5];
 }
 VAR_4[VAR_7++] = 0;

 VAR_7 = 0;

 for (VAR_5 = 0;VAR_5 < VAR_6;VAR_5++)
 {
  if (VAR_5 != 0 && (VAR_5 % 3) == 0)
  {
   VAR_3[VAR_7++] = ',';
  }
  VAR_3[VAR_7++] = VAR_4[VAR_5];
 }
 VAR_3[VAR_7++] = 0;
 VAR_7 = 0;
 VAR_6 = FUNC_1(VAR_3);

 for (VAR_5 = VAR_6 - 1;((int)VAR_5) >= 0;VAR_5--)
 {
  VAR_4[VAR_7++] = VAR_3[VAR_5];
 }
 VAR_4[VAR_7++] = 0;

 FUNC_0(VAR_0, VAR_1, VAR_4);
}
