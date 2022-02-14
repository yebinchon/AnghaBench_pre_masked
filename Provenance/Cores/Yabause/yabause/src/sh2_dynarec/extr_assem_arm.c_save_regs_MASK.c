
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;

void FUNC_2(u32 VAR_0)
{
  VAR_0&=0x100f;
  if(!VAR_0) return;
  FUNC_0("stmia fp,{");
  if(VAR_0&1) FUNC_0("r0, ");
  if(VAR_0&2) FUNC_0("r1, ");
  if(VAR_0&4) FUNC_0("r2, ");
  if(VAR_0&8) FUNC_0("r3, ");
  if(VAR_0&0x1000) FUNC_0("r12");
  FUNC_0("}\n");
  FUNC_1(0xe88b0000|VAR_0);
}
