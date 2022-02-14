
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{

  int VAR_3=0,VAR_4=0;

  static char *VAR_5[16]=
  {"bra","bsr","bhi","bls","bcc","bcs","bne","beq",
   "bvc","bvs","bpl","bmi","bge","blt","bgt","ble"};
  char *VAR_6="";


  VAR_6=VAR_5[(VAR_2>>8)&0x0f];


  VAR_3=VAR_0;
  VAR_4=(char)(VAR_2&0xff);
       if (VAR_4== 0) { VAR_4=(short)FUNC_1(VAR_0); VAR_0+=2; }
  else if (VAR_4==-1) { VAR_4= FUNC_0(VAR_0); VAR_0+=4; }

  FUNC_2(VAR_1,"%s %x",VAR_6,VAR_3+VAR_4);
  return 0;
}
