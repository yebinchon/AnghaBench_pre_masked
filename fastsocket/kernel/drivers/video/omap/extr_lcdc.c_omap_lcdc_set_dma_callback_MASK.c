
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* dma_callback ) (void*) ;void* dma_callback_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

int FUNC_1(void (*VAR_2)(void *VAR_3), void *VAR_4)
{
 FUNC_0(VAR_2 == ((void*)0));

 if (VAR_1.dma_callback)
  return -VAR_0;
 else {
  VAR_1.dma_callback = VAR_2;
  VAR_1.dma_callback_data = VAR_4;
 }
 return 0;
}
