
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ioat2_dma_chan {size_t xfercap_log; } ;



__attribute__((used)) static inline u16 FUNC_0(struct ioat2_dma_chan *VAR_0, size_t VAR_1)
{
 u16 VAR_2 = VAR_1 >> VAR_0->xfercap_log;

 VAR_2 += !!(VAR_1 & ((1 << VAR_0->xfercap_log) - 1));
 return VAR_2;
}
