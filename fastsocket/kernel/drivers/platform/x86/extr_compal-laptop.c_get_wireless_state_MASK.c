
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(int *VAR_4, int *VAR_5)
{
 u8 VAR_6;

 FUNC_0(VAR_1, &VAR_6);

 if (VAR_4) {
  if ((VAR_6 & VAR_2) == 0)
   *VAR_4 = 0;
  else
   *VAR_4 = VAR_6 & VAR_3;
 }

 if (VAR_5) {
  if ((VAR_6 & VAR_2) == 0)
   *VAR_5 = 0;
  else
   *VAR_5 = (VAR_6 & VAR_0) >> 1;
 }

 return 0;
}
