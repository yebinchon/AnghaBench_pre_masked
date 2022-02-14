
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_0, void *VAR_1, u32 VAR_2)
{
 u16 *VAR_3 = (u16 *)VAR_1;
 while (VAR_2--) {
  FUNC_1((void*)VAR_0, FUNC_0(*VAR_3++));
  FUNC_1((void*)VAR_0, FUNC_0(*VAR_3++));
 }
}
