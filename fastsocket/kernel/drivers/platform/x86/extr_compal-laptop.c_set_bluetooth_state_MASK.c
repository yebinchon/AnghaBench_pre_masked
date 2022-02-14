
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
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(int VAR_4)
{
 u8 VAR_5, VAR_6;

 FUNC_0(VAR_1, &VAR_5);

 if ((VAR_5 & VAR_3) == 0)
  return -VAR_2;
 else {
  if (VAR_4)
   VAR_6 = (u8) (VAR_5 | VAR_0);
  else
   VAR_6 = (u8) (VAR_5 & ~VAR_0);
  FUNC_1(VAR_1, VAR_6);
 }

 return 0;
}
