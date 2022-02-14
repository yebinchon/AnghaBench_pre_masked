
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{

  int VAR_2=0;
  char VAR_3[64]="";

  VAR_2=VAR_1&0x003f;
  FUNC_0(VAR_3,VAR_2,0);

  FUNC_1(VAR_0,"tas %s",VAR_3);
  return 0;
}
