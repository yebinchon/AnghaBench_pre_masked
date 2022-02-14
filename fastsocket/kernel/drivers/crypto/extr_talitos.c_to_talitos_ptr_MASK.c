
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {void* eptr; void* ptr; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct talitos_ptr *VAR_0, dma_addr_t VAR_1)
{
 VAR_0->ptr = FUNC_0(FUNC_1(VAR_1));
 VAR_0->eptr = FUNC_0(FUNC_2(VAR_1));
}
