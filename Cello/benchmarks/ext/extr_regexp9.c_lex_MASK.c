
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int*) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_2(int VAR_11, int VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_1(&VAR_10);
 if(VAR_11 || VAR_13){
  if(VAR_10 == 0)
   return VAR_1;
  return VAR_8;
 }

 switch(VAR_10){
 case 0:
  return VAR_1;
 case '*':
  return VAR_9;
 case '?':
  return VAR_6;
 case '+':
  return VAR_5;
 case '|':
  return VAR_4;
 case '.':
  return VAR_12;
 case '(':
  return VAR_3;
 case ')':
  return VAR_7;
 case '^':
  return VAR_0;
 case '$':
  return VAR_2;
 case '[':
  return FUNC_0();
 }
 return VAR_8;
}
