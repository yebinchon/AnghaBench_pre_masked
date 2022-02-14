
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char,char,char,char,char) ;

bool
FUNC_2(char *VAR_0, int VAR_1)
{
 bool VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_1(VAR_0[0], VAR_0[1], VAR_0[2],
        VAR_0[3], VAR_0[4]);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == VAR_1)
 {
  VAR_2 = 1;
 }

 return VAR_2;
}
