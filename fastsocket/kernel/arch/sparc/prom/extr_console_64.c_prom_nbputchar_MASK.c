
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int ,char*,int ) ;
 int VAR_1 ;

inline int
FUNC_4(char VAR_2)
{
 char VAR_3;

 VAR_3 = VAR_2;
 if (FUNC_3("write", FUNC_0(1,VAR_0)|
          FUNC_1(3,1),
          VAR_1, &VAR_3, FUNC_2(1)) == 1)
  return 0;
 else
  return -1;
}
