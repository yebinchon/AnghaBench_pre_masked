
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

void FUNC_4(char *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_0, VAR_2);
 FUNC_3(VAR_0 + VAR_3, VAR_1, VAR_2 - VAR_3);
 VAR_0[VAR_2 - 1] = 0;
 if (VAR_3 + VAR_4 > VAR_2 - 1)
  FUNC_0("Warning: path truncated: %s\n", VAR_0);
}
