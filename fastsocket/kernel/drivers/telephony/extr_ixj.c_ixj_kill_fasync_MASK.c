
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* ixj_signals; int async_queue; } ;
typedef size_t IXJ_SIGEVENT ;
typedef TYPE_1__ IXJ ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (char*,size_t) ;

__attribute__((used)) static inline void FUNC_2(IXJ *VAR_1, IXJ_SIGEVENT VAR_2, int VAR_3)
{
 if(VAR_1->ixj_signals[VAR_2]) {
  if(VAR_0 & 0x0100)
   FUNC_1("Sending signal for event %d\n", VAR_2);


  FUNC_0(&(VAR_1->async_queue), VAR_1->ixj_signals[VAR_2], VAR_3);
 }
}
