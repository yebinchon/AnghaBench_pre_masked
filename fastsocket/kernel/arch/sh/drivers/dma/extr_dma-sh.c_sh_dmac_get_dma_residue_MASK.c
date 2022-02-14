
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {size_t chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dma_channel*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct dma_channel *VAR_4)
{
 if (!(FUNC_1(VAR_3[VAR_4->chan] + VAR_0) & VAR_1))
  return 0;

 return FUNC_1(VAR_3[VAR_4->chan] + VAR_2)
   << FUNC_0(VAR_4);
}
