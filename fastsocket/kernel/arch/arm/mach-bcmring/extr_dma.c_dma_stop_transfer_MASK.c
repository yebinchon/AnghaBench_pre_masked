
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dmacHwHandle; } ;
typedef int DMA_Handle_t ;
typedef TYPE_1__ DMA_Channel_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(DMA_Handle_t VAR_1)
{
 DMA_Channel_t *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0)) {
  return -VAR_0;
 }

 FUNC_1(VAR_2->dmacHwHandle);

 return 0;
}
