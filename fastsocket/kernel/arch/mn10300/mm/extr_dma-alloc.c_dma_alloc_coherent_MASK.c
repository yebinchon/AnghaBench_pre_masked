
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int coherent_dma_mask; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (void*,int,size_t) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;

void *FUNC_6(struct device *VAR_4, size_t VAR_5,
    dma_addr_t *VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 void *VAR_9;


 VAR_7 &= ~(VAR_2 | VAR_3);

 if (VAR_4 == ((void*)0) || VAR_4->coherent_dma_mask < 0xffffffff)
  VAR_7 |= VAR_0;

 VAR_8 = FUNC_0(VAR_7, FUNC_1(VAR_5));
 if (!VAR_8)
  return ((void*)0);


 VAR_9 = (void *) (VAR_8 | 0x20000000);


 FUNC_2((void *) VAR_8, 0xfb, VAR_5);


 FUNC_3(FUNC_5((void *) VAR_8), VAR_1);

 *VAR_6 = FUNC_4((void *) VAR_8);
 return VAR_9;
}
