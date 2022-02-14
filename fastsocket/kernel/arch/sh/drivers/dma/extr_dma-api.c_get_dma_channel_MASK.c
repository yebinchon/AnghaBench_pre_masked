
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_info {int nr_channels; struct dma_channel* channels; } ;
struct dma_channel {unsigned int vchan; } ;


 int VAR_0 ;
 struct dma_channel* FUNC_0 (int ) ;
 struct dma_info* FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

struct dma_channel *FUNC_3(unsigned int VAR_1)
{
 struct dma_info *VAR_2 = FUNC_1(VAR_1);
 struct dma_channel *VAR_3;
 int VAR_4;

 if (FUNC_2(!VAR_2))
  return FUNC_0(-VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_channels; VAR_4++) {
  VAR_3 = &VAR_2->channels[VAR_4];
  if (VAR_3->vchan == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
