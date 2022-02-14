
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (char*,unsigned char) ;
 unsigned char FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 unsigned int VAR_5;
 unsigned char VAR_6;

 for (VAR_5 = 0; VAR_5 < 500000 ; VAR_5++) {
  VAR_6 = FUNC_1(VAR_1);
  if ((VAR_6 & (VAR_0 | VAR_2 | VAR_3)) == VAR_4)
   return 0;
 }
 FUNC_0("reset timed out", VAR_6);
 return 1;
}
