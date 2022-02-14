
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 char* VAR_0 ;
 int FUNC_2 (char*,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1)
{
 char VAR_2[128];

 if (VAR_1 < 14)
  return -1;

 if (VAR_1 == FUNC_0())
  return 0;

 FUNC_2(VAR_2, sizeof(VAR_2),
   "unset DISPLAY; echo y | %s/op_cpuspeed.sh %d",
   VAR_0, VAR_1);
 return FUNC_1(VAR_2);
}
