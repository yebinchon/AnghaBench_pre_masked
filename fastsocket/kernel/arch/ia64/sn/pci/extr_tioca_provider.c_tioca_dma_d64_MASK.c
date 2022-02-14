
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static u64
FUNC_2(unsigned long VAR_0)
{
 dma_addr_t VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(!VAR_1);
 FUNC_0(VAR_1 >> 54);


 VAR_1 |= (1UL << 60);

 return VAR_1;
}
