
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct dma_channel {size_t chan; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_3 ;
 unsigned int* VAR_4 ;

__attribute__((used)) static inline unsigned int FUNC_1(struct dma_channel *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_3[VAR_5->chan] + VAR_0);

 return VAR_4[(VAR_6 & VAR_1)>>VAR_2];
}
