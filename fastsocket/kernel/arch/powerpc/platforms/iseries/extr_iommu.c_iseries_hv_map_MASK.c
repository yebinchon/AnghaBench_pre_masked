
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int *,int *,int ,unsigned long,size_t,int ,int,int *) ;
 int VAR_1 ;
 int FUNC_2 (void*) ;

dma_addr_t FUNC_3(void *VAR_2, size_t VAR_3,
   enum dma_data_direction VAR_4)
{
 return FUNC_1(((void*)0), &VAR_1, FUNC_2(VAR_2),
         (unsigned long)VAR_2 % VAR_0, VAR_3,
         FUNC_0(32), VAR_4, ((void*)0));
}
