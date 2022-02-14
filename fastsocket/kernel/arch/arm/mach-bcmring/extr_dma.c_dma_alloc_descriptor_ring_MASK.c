
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int descriptorsAllocated; size_t bytesAllocated; int * virtAddr; int physAddr; } ;
typedef TYPE_1__ DMA_DescriptorRing_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 size_t FUNC_2 (int) ;

int FUNC_3(DMA_DescriptorRing_t *VAR_3,
         int VAR_4
    ) {
 size_t VAR_5 = FUNC_2(VAR_4);

 if ((VAR_3 == ((void*)0)) || (VAR_4 <= 0)) {
  return -VAR_0;
 }

 VAR_3->physAddr = 0;
 VAR_3->descriptorsAllocated = 0;
 VAR_3->bytesAllocated = 0;

 VAR_3->virtAddr = FUNC_0(((void*)0),
           VAR_5,
           &VAR_3->physAddr,
           VAR_2);
 if (VAR_3->virtAddr == ((void*)0)) {
  return -VAR_1;
 }

 VAR_3->bytesAllocated = VAR_5;
 VAR_3->descriptorsAllocated = VAR_4;

 return FUNC_1(VAR_3, VAR_4);
}
