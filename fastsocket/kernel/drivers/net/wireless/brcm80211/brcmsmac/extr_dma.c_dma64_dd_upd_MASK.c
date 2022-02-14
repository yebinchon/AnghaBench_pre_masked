
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int u32 ;
struct TYPE_2__ {int dmactrlflags; } ;
struct dma_info {scalar_t__ dataoffsetlow; int dataoffsethigh; TYPE_1__ dma; } ;
struct dma64desc {void* ctrl2; void* ctrl1; void* addrhigh; void* addrlow; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dma64desc*) ;

__attribute__((used)) static inline void
FUNC_2(struct dma_info *VAR_7, struct dma64desc *VAR_8,
      dma_addr_t VAR_9, uint VAR_10, u32 *VAR_11, u32 VAR_12)
{
 u32 VAR_13 = VAR_12 & VAR_2;


 if ((VAR_7->dataoffsetlow == 0) || !(VAR_9 & VAR_5)) {
  VAR_8[VAR_10].addrlow = FUNC_0(VAR_9 + VAR_7->dataoffsetlow);
  VAR_8[VAR_10].addrhigh = FUNC_0(VAR_7->dataoffsethigh);
  VAR_8[VAR_10].ctrl1 = FUNC_0(*VAR_11);
  VAR_8[VAR_10].ctrl2 = FUNC_0(VAR_13);
 } else {

  u32 VAR_14;

  VAR_14 = (VAR_9 & VAR_5) >> VAR_6;
  VAR_9 &= ~VAR_5;

  VAR_13 |= (VAR_14 << VAR_1) & VAR_0;
  VAR_8[VAR_10].addrlow = FUNC_0(VAR_9 + VAR_7->dataoffsetlow);
  VAR_8[VAR_10].addrhigh = FUNC_0(VAR_7->dataoffsethigh);
  VAR_8[VAR_10].ctrl1 = FUNC_0(*VAR_11);
  VAR_8[VAR_10].ctrl2 = FUNC_0(VAR_13);
 }
 if (VAR_7->dma.dmactrlflags & VAR_4) {
  if (FUNC_1(&VAR_8[VAR_10]))
   VAR_8[VAR_10].ctrl2 =
        FUNC_0(VAR_13 | VAR_3);
 }
}
