
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ioat2_dma_chan {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ioat2_dma_chan*) ;
 scalar_t__ FUNC_2 (struct ioat2_dma_chan*) ;

__attribute__((used)) static inline u16 FUNC_3(struct ioat2_dma_chan *VAR_0)
{
 u16 VAR_1 = FUNC_2(VAR_0) + 1;
 u16 VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2 > VAR_1);

 return VAR_1 - VAR_2;
}
