
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** rec_ctrl; int irq; } ;


 void* FUNC_0 (void**,int ,int ) ;
 int * VAR_0 ;
 void** VAR_1 ;
 void** VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_1(void)
{
 if (!VAR_4)
  return;

 *VAR_0 = VAR_4->irq;



 *VAR_2 = FUNC_0(VAR_2, VAR_6, VAR_7);

 *VAR_4->rec_ctrl = FUNC_0(VAR_1, VAR_5, VAR_3);
}
