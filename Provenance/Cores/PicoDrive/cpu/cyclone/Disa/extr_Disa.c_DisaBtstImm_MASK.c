
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{

  int VAR_2=0;
  char VAR_3[64]="",VAR_4[64]="";
  char *VAR_5[4]={"btst","bchg","bclr","bset"};

  VAR_2=(VAR_1>>6)&3;
  FUNC_0(VAR_3, 0x3c,0);
  FUNC_0(VAR_4,VAR_1&0x3f,0);

  FUNC_1(VAR_0,"%s %s, %s",VAR_5[VAR_2],VAR_3,VAR_4);
  return 0;
}
