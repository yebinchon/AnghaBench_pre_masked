
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{

  int VAR_3=0; char VAR_4[64]="";
  int VAR_5=0,VAR_6=0;

  static char *VAR_7[16]=
  {"bt" ,"bra","bhi","bls","bcc","bcs","bne","beq",
   "bvc","bvs","bpl","bmi","bge","blt","bgt","ble"};
  char *VAR_8="";

  VAR_3=VAR_2&7;
  FUNC_0(VAR_4,VAR_3,2);


  VAR_8=VAR_7[(VAR_2>>8)&0xf];


  VAR_5=VAR_0;
  VAR_6=(short)FUNC_1(VAR_0); VAR_0+=2;

  FUNC_2(VAR_1,"d%s %s, %x",VAR_8,VAR_4,VAR_5+VAR_6);
  return 0;
}
