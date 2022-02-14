
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int,unsigned int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 char* FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (char*) ;

void *
FUNC_5(char * VAR_0, int VAR_1)

{
  unsigned int VAR_2;
  char * VAR_3;
  void * VAR_4;

  if(!VAR_0)
    return (void *) FUNC_2(VAR_0, VAR_1);

  VAR_2 = FUNC_4(VAR_0);

  VAR_3 = FUNC_3(VAR_2 + 1);
  if(!VAR_3)
    return (void *) ((void*)0);

  FUNC_0(VAR_3, VAR_0, VAR_2, VAR_2);
  VAR_3[VAR_2] = '\0';
  VAR_4 = (void *) FUNC_2(VAR_3, VAR_1);
  FUNC_1(VAR_3);
  return VAR_4;
}
