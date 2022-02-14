
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ioat2_dma_chan {int head; int issued; } ;


 int FUNC_0 (struct ioat2_dma_chan*) ;

__attribute__((used)) static inline u16 FUNC_1(struct ioat2_dma_chan *VAR_0)
{
 return (VAR_0->head - VAR_0->issued) & FUNC_0(VAR_0);
}
