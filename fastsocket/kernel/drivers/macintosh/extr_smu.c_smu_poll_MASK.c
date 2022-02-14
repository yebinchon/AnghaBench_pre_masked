
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int db_irq; int doorbell; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;

void FUNC_2(void)
{
 u8 VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = FUNC_0(VAR_0, ((void*)0), VAR_1->doorbell);
 if ((VAR_2 & 7) == 7)
  FUNC_1(VAR_1->db_irq, VAR_1);
}
