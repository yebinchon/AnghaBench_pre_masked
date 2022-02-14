
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int adapter_type; int pmuC; int mem_base1; int mem_base0; int pmuA; } ;





 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct AdapterControlBlock *VAR_0)
{
 switch (VAR_0->adapter_type) {
 case 130:{
  FUNC_0(VAR_0->pmuA);
 }
 break;
 case 129:{
  FUNC_0(VAR_0->mem_base0);
  FUNC_0(VAR_0->mem_base1);
 }

 break;
 case 128:{
  FUNC_0(VAR_0->pmuC);
 }
 }
}
