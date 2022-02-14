
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int,unsigned int,char*,int,int ) ;
 char* FUNC_2 () ;
 int FUNC_3 (char*) ;

char *
FUNC_4(unsigned int VAR_3)

{
  int VAR_4;
  char *VAR_5;
  char *VAR_6;

  VAR_5 = FUNC_2();

  if(!VAR_5)
    return VAR_5;

  VAR_4 = FUNC_3(VAR_5) + 1;
  VAR_4 *= VAR_2;

  VAR_6 = FUNC_0(VAR_1, VAR_4);
  if(!VAR_6)
    return (char *) ((void*)0);

  if(FUNC_1(VAR_6, VAR_4, VAR_3, VAR_5, -1, VAR_0) < 0)
    return (char *) ((void*)0);

  return VAR_6;
}
