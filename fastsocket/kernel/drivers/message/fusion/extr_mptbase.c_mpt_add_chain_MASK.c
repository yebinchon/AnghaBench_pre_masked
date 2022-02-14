
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
typedef int dma_addr_t ;
struct TYPE_2__ {int Address; int NextChainOffset; int Flags; int Length; } ;
typedef TYPE_1__ SGEChain32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, u8 VAR_2, u16 VAR_3, dma_addr_t VAR_4)
{
  SGEChain32_t *VAR_5 = (SGEChain32_t *) VAR_1;
  VAR_5->Length = FUNC_0(VAR_3);
  VAR_5->Flags = VAR_0;
  VAR_5->NextChainOffset = VAR_2;
  VAR_5->Address = FUNC_1(VAR_4);
}
