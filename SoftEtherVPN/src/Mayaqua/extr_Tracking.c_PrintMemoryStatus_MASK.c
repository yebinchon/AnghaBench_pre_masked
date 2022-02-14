
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MemorySize; int MemoryBlocksNum; } ;
typedef TYPE_1__ MEMORY_STATUS ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,int ) ;

void FUNC_2()
{
 MEMORY_STATUS VAR_0;
 FUNC_0(&VAR_0);
 FUNC_1("MEMORY STATUS:\n"
  " NUM_OF_MEMORY_BLOCKS: %u\n"
  " SIZE_OF_TOTAL_MEMORY: %u bytes\n",
  VAR_0.MemoryBlocksNum, VAR_0.MemorySize);
}
