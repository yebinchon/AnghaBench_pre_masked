
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
  int VAR_2=0,VAR_3=0,VAR_4=0;

  VAR_2 =(VAR_1>>9)&7;
  VAR_3= VAR_1&0xf8;
  VAR_4 = VAR_1&7;

       if (VAR_3==0x40) FUNC_0(VAR_0,"exg d%d, d%d",VAR_4,VAR_2);
  else if (VAR_3==0x48) FUNC_0(VAR_0,"exg a%d, a%d",VAR_4,VAR_2);
  else if (VAR_3==0x88) FUNC_0(VAR_0,"exg a%d, d%d",VAR_4,VAR_2);
  else return 1;

  return 0;
}
