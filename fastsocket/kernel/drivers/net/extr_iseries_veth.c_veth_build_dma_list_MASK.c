
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chunk {unsigned long size; void* addr; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (unsigned char*) ;
 void* FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct dma_chunk *VAR_2,
           unsigned char *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 1;






 VAR_2[0].addr = FUNC_0(VAR_3);
 VAR_2[0].size = FUNC_1(VAR_4,
      VAR_1 - ((unsigned long)VAR_3 & ~VAR_0));

 VAR_5 = VAR_2[0].size;
 while (VAR_5 < VAR_4) {
  VAR_2[VAR_6].addr = FUNC_0(VAR_3 + VAR_5);
  VAR_2[VAR_6].size = FUNC_1(VAR_4-VAR_5, VAR_1);
  VAR_5 += VAR_2[VAR_6].size;
  VAR_6++;
 }
}
