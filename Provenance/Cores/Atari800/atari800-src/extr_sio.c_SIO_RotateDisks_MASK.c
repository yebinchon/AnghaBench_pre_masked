
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int) ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(void)
{
 char VAR_5[VAR_2][VAR_1];
 int VAR_6;
 int VAR_7 = VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_3(VAR_5[VAR_6], VAR_3[VAR_6]);
  FUNC_0(VAR_6 + 1);
 }

 for (VAR_6 = 1; VAR_6 < VAR_2; VAR_6++) {
  if (FUNC_2(VAR_5[VAR_6], "None") && FUNC_2(VAR_5[VAR_6], "Off") && FUNC_2(VAR_5[VAR_6], "Empty") ) {
   if (!FUNC_1(VAR_6, VAR_5[VAR_6], VAR_0))
    VAR_7 = VAR_0;
  }
 }

 VAR_6 = VAR_2 - 1;
 while (VAR_6 > -1 && (!FUNC_2(VAR_5[VAR_6], "None") || !FUNC_2(VAR_5[VAR_6], "Off") || !FUNC_2(VAR_5[VAR_6], "Empty")) ) {
  VAR_6--;
 }

 if (VAR_6 > -1) {
  if (!FUNC_1(VAR_6 + 1, VAR_5[0], VAR_0))
   VAR_7 = VAR_0;
 }

 return VAR_7;
}
