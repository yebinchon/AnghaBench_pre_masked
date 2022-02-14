
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int freeChannelQ; int lock; } ;
struct TYPE_7__ {size_t devType; int flags; size_t lastDevType; } ;
struct TYPE_6__ {int flags; } ;
typedef int DMA_Handle_t ;
typedef TYPE_1__ DMA_DeviceAttribute_t ;
typedef TYPE_2__ DMA_Channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_3__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(DMA_Handle_t VAR_8
    ) {
 int VAR_9 = 0;
 DMA_Channel_t *VAR_10;
 DMA_DeviceAttribute_t *VAR_11;

 if (FUNC_1(&VAR_7.lock) < 0) {
  return -VAR_6;
 }

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 == ((void*)0)) {
  VAR_9 = -VAR_5;
  goto out;
 }

 VAR_11 = &VAR_4[VAR_10->devType];

 if ((VAR_10->flags & VAR_1) == 0) {
  VAR_10->lastDevType = VAR_10->devType;
  VAR_10->devType = VAR_3;
 }
 VAR_10->flags &= ~VAR_0;
 VAR_11->flags &= ~VAR_2;

out:
 FUNC_2(&VAR_7.lock);

 FUNC_3(&VAR_7.freeChannelQ);

 return VAR_9;
}
