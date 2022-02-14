
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int coherent_dma_mask; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned long,size_t) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (void*,int ,size_t) ;
 int FUNC_5 (void*) ;

void *
FUNC_6(struct device *VAR_6,size_t VAR_7,dma_addr_t *VAR_8,gfp_t VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11 = 0;



 VAR_9 &= ~(VAR_4 | VAR_5);

 if (VAR_6 == ((void*)0) || (VAR_6->coherent_dma_mask < 0xffffffff))
  VAR_9 |= VAR_0;
 VAR_10 = (unsigned long)FUNC_2(VAR_9, FUNC_3(VAR_7));

 if (VAR_10 == 0)
  return ((void*)0);



 if (VAR_10 < VAR_2
     || VAR_10 >= VAR_2 + VAR_3)
  FUNC_0();


 if (VAR_10 != 0) {
  FUNC_4((void*) VAR_10, 0, VAR_7);
  VAR_11 = VAR_10+VAR_1-VAR_2;
  *VAR_8 = FUNC_5((void*)VAR_10);
  FUNC_1(VAR_10, VAR_7);
 }

 return (void*)VAR_11;
}
