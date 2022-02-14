
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
 char **VAR_1 = VAR_0;

 while (*VAR_1) {
  FUNC_1("alg %s ", *VAR_1);
  FUNC_1(FUNC_0(*VAR_1, 0, 0) ?
         "found\n" : "not found\n");
  VAR_1++;
 }
}
