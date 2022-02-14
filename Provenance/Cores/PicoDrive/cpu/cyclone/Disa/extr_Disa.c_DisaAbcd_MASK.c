
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{

  int VAR_2=0;
  int VAR_3=0,VAR_4=0,VAR_5=0;
  char *VAR_6[]={"sbcd","abcd"};

  VAR_2=(VAR_1>>14)&1;
  VAR_3 =(VAR_1>> 9)&7;
  VAR_4=(VAR_1>> 3)&1;
  VAR_5 = VAR_1 &7;

  if (VAR_4) FUNC_0(VAR_0,"%s -(a%d), -(a%d)",VAR_6[VAR_2],VAR_5,VAR_3);
  else FUNC_0(VAR_0,"%s d%d, d%d", VAR_6[VAR_2],VAR_5,VAR_3);

  return 0;
}
