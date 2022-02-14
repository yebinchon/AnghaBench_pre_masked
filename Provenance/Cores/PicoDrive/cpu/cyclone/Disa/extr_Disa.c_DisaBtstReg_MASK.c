
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
  int VAR_3=0,VAR_4=0;
  char VAR_5[64]="",VAR_6[64]="";
  char *VAR_7[4]={"btst","bchg","bclr","bset"};

  VAR_3 =(VAR_1>>9)&7;
  VAR_2=(VAR_1>>6)&3;
  VAR_4= VAR_1&0x3f;

  if ((VAR_4&0x38)==0x08) return 1;
  FUNC_0(VAR_5,VAR_3,0);
  FUNC_0(VAR_6,VAR_4,0);

  FUNC_1(VAR_0,"%s %s, %s",VAR_7[VAR_2],VAR_5,VAR_6);
  return 0;
}
