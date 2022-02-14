
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc_table {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct mpc_table *VAR_1, char *VAR_2,
  char *VAR_3)
{
 if (!FUNC_2(VAR_2, "IBM ENSW", 8) &&
   (!FUNC_2(VAR_3, "VIGIL SMP", 9)
    || !FUNC_2(VAR_3, "EXA", 3)
    || !FUNC_2(VAR_3, "RUTHLESS SMP", 12))){
  FUNC_0("Summit based system");
  VAR_0 = 1;
  FUNC_1();
  return 1;
 }
 return 0;
}
