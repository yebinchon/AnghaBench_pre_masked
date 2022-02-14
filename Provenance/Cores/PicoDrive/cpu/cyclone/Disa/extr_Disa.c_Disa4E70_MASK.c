
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
  char *VAR_2[8]={"reset","nop","stop","rte","rtd","rts","trapv","rtr"};
  int VAR_3=0;

  VAR_3=VAR_1&7;

  FUNC_0(VAR_0,"%s",VAR_2[VAR_3]);



  return 0;
}
