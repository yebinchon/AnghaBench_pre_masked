
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_1(unsigned short VAR_0, unsigned short VAR_1)
{

 if(VAR_0%5==0)
 {
  VAR_1/=5;
  VAR_0/=5;
 }



 while(VAR_0%3==0 && VAR_1%3==0)
 {
  VAR_1/=3;
  VAR_0/=3;
 }



 while(VAR_0%2==0 && VAR_1%2==0)
 {
  VAR_0/=2;
  VAR_1/=2;
 }



 while(VAR_1>32)
 {
  VAR_1/=2;
  VAR_0=(VAR_0+1)/2;
 }
 if(VAR_1==32)
  VAR_1--;
 FUNC_0(VAR_1,VAR_0);
}
