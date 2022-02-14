
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* controller; } ;
struct TYPE_3__ {int * channel; } ;
typedef int DMA_Handle_t ;
typedef int DMA_Channel_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static inline DMA_Channel_t *FUNC_2(DMA_Handle_t VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_0(VAR_3);

 if ((VAR_4 > VAR_1)
     || (VAR_5 > VAR_0)) {
  return ((void*)0);
 }
 return &VAR_2.controller[VAR_4].channel[VAR_5];
}
