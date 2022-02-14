
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_3__ {void* High; void* Low; } ;
struct TYPE_4__ {void* FlagsLength; TYPE_1__ Address; } ;
typedef TYPE_2__ SGESimple64_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, u32 VAR_2, dma_addr_t VAR_3)
{
 SGESimple64_t *VAR_4 = (SGESimple64_t *) VAR_1;
 VAR_4->Address.Low = FUNC_0
   (FUNC_1(VAR_3));
 VAR_4->Address.High = FUNC_0
   (FUNC_2(VAR_3));
 VAR_4->FlagsLength = FUNC_0
   ((VAR_2 | VAR_0));
}
