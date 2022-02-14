
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int adapter_type; } ;





 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_0)
{
 switch (VAR_0->adapter_type) {
 case 130: {
  FUNC_0(VAR_0);
  }
  break;

 case 129: {
  FUNC_1(VAR_0);
  }
  break;
 case 128: {
  FUNC_2(VAR_0);
  }
 }
}
