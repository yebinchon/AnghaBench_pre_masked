
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef size_t DMA_Device_t ;
typedef TYPE_1__ DMA_DeviceAttribute_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;

int FUNC_1(DMA_Device_t VAR_3
    ) {
 DMA_DeviceAttribute_t *VAR_4;

 if (!FUNC_0(VAR_3)) {
  return -VAR_2;
 }
 VAR_4 = &VAR_1[VAR_3];

 return ((VAR_4->flags & VAR_0) == 0);
}
