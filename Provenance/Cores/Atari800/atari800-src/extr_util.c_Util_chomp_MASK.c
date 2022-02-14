
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

void FUNC_1(char *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 >= 2 && VAR_0[VAR_1 - 1] == '\n' && VAR_0[VAR_1 - 2] == '\r')
  VAR_0[VAR_1 - 2] = '\0';
 else if (VAR_1 >= 1 && (VAR_0[VAR_1 - 1] == '\n' || VAR_0[VAR_1 - 1] == '\r'))
  VAR_0[VAR_1 - 1] = '\0';
}
