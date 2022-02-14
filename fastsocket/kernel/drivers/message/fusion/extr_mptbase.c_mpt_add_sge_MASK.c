
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* Address; void* FlagsLength; } ;
typedef TYPE_1__ SGESimple32_t ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, u32 VAR_1, dma_addr_t VAR_2)
{
 SGESimple32_t *VAR_3 = (SGESimple32_t *) VAR_0;
 VAR_3->FlagsLength = FUNC_0(VAR_1);
 VAR_3->Address = FUNC_0(VAR_2);
}
