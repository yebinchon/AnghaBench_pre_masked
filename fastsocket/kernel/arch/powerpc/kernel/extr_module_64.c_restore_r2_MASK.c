
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct module {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static int FUNC_1(u32 *VAR_1, struct module *VAR_2)
{
 if (*VAR_1 != VAR_0) {
  FUNC_0("%s: Expect noop after relocate, got %08x\n",
         VAR_2->name, *VAR_1);
  return 0;
 }
 *VAR_1 = 0xe8410028;
 return 1;
}
