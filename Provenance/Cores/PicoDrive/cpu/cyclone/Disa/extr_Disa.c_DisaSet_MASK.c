
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{

  static char *VAR_2[16]=
  {"t" ,"f", "hi","ls","cc","cs","ne","eq",
   "vc","vs","pl","mi","ge","lt","gt","le"};
  char *VAR_3="";
  int VAR_4=0;
  char VAR_5[64]="";

  VAR_3=VAR_2[(VAR_1>>8)&0xf];
  VAR_4=VAR_1&0x3f;
  if ((VAR_4&0x38)==0x08) return 1;

  FUNC_0(VAR_5,VAR_4,0);
  FUNC_1(VAR_0,"s%s %s",VAR_3,VAR_5);
  return 0;
}
