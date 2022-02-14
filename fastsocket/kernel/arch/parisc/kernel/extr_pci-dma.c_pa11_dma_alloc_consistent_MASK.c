
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int* coherent_dma_mask; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,int) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,size_t) ;
 int FUNC_3 (size_t) ;
 int VAR_2 ;
 int FUNC_4 (unsigned long,size_t,unsigned long) ;
 unsigned long FUNC_5 (size_t) ;

__attribute__((used)) static void * FUNC_6 (struct device *VAR_3, size_t VAR_4, dma_addr_t *VAR_5, gfp_t VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_4);
 VAR_4 = 1 << (VAR_9 + VAR_1);
 VAR_7 = FUNC_5(VAR_4);
 VAR_8 = FUNC_0(VAR_6, VAR_9);
 FUNC_2(VAR_8, VAR_4);
 VAR_8 = FUNC_1(VAR_8);
 FUNC_4(VAR_7, VAR_4, VAR_8);
 *VAR_5 = (dma_addr_t) VAR_8;
 return (void *)VAR_7;
}
