
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (char*) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_4(int VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_7 & (VAR_0|VAR_1)) {
  VAR_2 += (VAR_7 & VAR_0) ? -1 : 1;
  if (VAR_2 < 0) VAR_2 = 9;
  else if (VAR_2 > 9) VAR_2 = 0;
  FUNC_2(VAR_4, 130, VAR_2 != VAR_3);
  return 0;
 }

 switch (VAR_6) {
 case 129:
 case 128:
  if (FUNC_1(VAR_6 == 128 ? 1 : 0))
   FUNC_3("config saved");
  else
   FUNC_3("failed to write config");
  break;
 case 130:
  VAR_8 = FUNC_0(VAR_5, 1);
  if (!VAR_8) VAR_8 = FUNC_0(((void*)0), 1);
  if (VAR_8) FUNC_3("config loaded");
  else FUNC_3("failed to load config");
  break;
 default:
  return 0;
 }

 return 1;
}
