
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct TYPE_6__ {int chan_id; } ;
struct idmac_channel {void* status; TYPE_1__ dma_chan; } ;
typedef enum ipu_channel { ____Placeholder_ipu_channel } ipu_channel ;
typedef int dma_addr_t ;
struct TYPE_7__ {int lock; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct idmac_channel *VAR_7,
         int VAR_8, dma_addr_t VAR_9)
{
 enum ipu_channel VAR_10 = VAR_7->dma_chan.chan_id;
 uint32_t VAR_11;
 unsigned long VAR_12;

 FUNC_4(&VAR_6.lock, VAR_12);

 if (VAR_8 == 0) {
  VAR_11 = FUNC_1(&VAR_6, VAR_1);
  if (VAR_11 & (1UL << VAR_10)) {
   FUNC_3(&VAR_6, VAR_10);
   VAR_7->status = VAR_0;
  }


  FUNC_2(&VAR_6, FUNC_0(VAR_10) +
       0x0008UL, VAR_4);
  FUNC_2(&VAR_6, VAR_9, VAR_5);
 } else {
  VAR_11 = FUNC_1(&VAR_6, VAR_2);
  if (VAR_11 & (1UL << VAR_10)) {
   FUNC_3(&VAR_6, VAR_10);
   VAR_7->status = VAR_0;
  }


  VAR_11 = FUNC_1(&VAR_6, VAR_3);

  if (!(VAR_11 & (1UL << VAR_10)))
   FUNC_2(&VAR_6, VAR_11 | (1UL << VAR_10),
        VAR_3);


  FUNC_2(&VAR_6, FUNC_0(VAR_10) +
       0x0009UL, VAR_4);
  FUNC_2(&VAR_6, VAR_9, VAR_5);
 }

 FUNC_5(&VAR_6.lock, VAR_12);

 return 0;
}
