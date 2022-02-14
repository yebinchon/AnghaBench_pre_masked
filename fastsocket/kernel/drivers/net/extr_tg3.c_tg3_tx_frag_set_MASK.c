
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tg3_napi {int * tx_ring; TYPE_1__* tx_buffers; struct tg3* tp; } ;
struct tg3 {int dma_limit; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int fragmented; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct tg3*,int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct tg3*,int,int,int) ;
 scalar_t__ FUNC_4 (struct tg3*,int ) ;
 int FUNC_5 (int *,int,int,int,int,int) ;

__attribute__((used)) static bool FUNC_6(struct tg3_napi *VAR_2, u32 *VAR_3, u32 *VAR_4,
       dma_addr_t VAR_5, u32 VAR_6, u32 VAR_7,
       u32 VAR_8, u32 VAR_9)
{
 struct tg3 *VAR_10 = VAR_2->tp;
 bool VAR_11 = 0;

 if (FUNC_4(VAR_10, VAR_0) && VAR_6 <= 8)
  VAR_11 = 1;

 if (FUNC_2(VAR_5, VAR_6))
  VAR_11 = 1;

 if (FUNC_3(VAR_10, VAR_5, VAR_6, VAR_8))
  VAR_11 = 1;

 if (FUNC_1(VAR_10, VAR_5, VAR_6))
  VAR_11 = 1;

 if (VAR_10->dma_limit) {
  u32 VAR_12 = *VAR_3;
  u32 VAR_13 = VAR_7 & ~VAR_1;
  while (VAR_6 > VAR_10->dma_limit && *VAR_4) {
   u32 VAR_14 = VAR_10->dma_limit;
   VAR_6 -= VAR_10->dma_limit;


   if (VAR_6 <= 8) {
    VAR_6 += VAR_10->dma_limit / 2;
    VAR_14 = VAR_10->dma_limit / 2;
   }

   VAR_2->tx_buffers[*VAR_3].fragmented = 1;

   FUNC_5(&VAR_2->tx_ring[*VAR_3], VAR_5,
          VAR_14, VAR_13, VAR_8, VAR_9);
   *VAR_4 -= 1;
   VAR_12 = *VAR_3;
   *VAR_3 = FUNC_0(*VAR_3);

   VAR_5 += VAR_14;
  }

  if (VAR_6) {
   if (*VAR_4) {
    FUNC_5(&VAR_2->tx_ring[*VAR_3], VAR_5,
           VAR_6, VAR_7, VAR_8, VAR_9);
    *VAR_4 -= 1;
    *VAR_3 = FUNC_0(*VAR_3);
   } else {
    VAR_11 = 1;
    VAR_2->tx_buffers[VAR_12].fragmented = 0;
   }
  }
 } else {
  FUNC_5(&VAR_2->tx_ring[*VAR_3], VAR_5,
         VAR_6, VAR_7, VAR_8, VAR_9);
  *VAR_3 = FUNC_0(*VAR_3);
 }

 return VAR_11;
}
