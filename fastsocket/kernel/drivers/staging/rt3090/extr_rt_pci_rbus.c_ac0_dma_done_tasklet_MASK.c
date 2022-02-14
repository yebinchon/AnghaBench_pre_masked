
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int Ac0DmaDone; } ;
struct TYPE_12__ {TYPE_1__ field; scalar_t__ word; } ;
struct TYPE_11__ {int ac0_dma_done_task; } ;
struct TYPE_10__ {int int_pending; int irq_lock; scalar_t__ OS_Cookie; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;
typedef TYPE_3__* POS_COOKIE ;
typedef TYPE_4__ INT_SOURCE_CSR_STRUC ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_4__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_3)
{
 unsigned long VAR_4;
 PRTMP_ADAPTER VAR_5 = (PRTMP_ADAPTER) VAR_3;
 INT_SOURCE_CSR_STRUC VAR_6;
 POS_COOKIE VAR_7;
 BOOLEAN VAR_8 = 0;



 if (FUNC_3(VAR_5, VAR_1 | VAR_2))
  return;

 VAR_7 = (POS_COOKIE) VAR_5->OS_Cookie;


 VAR_6.word = 0;
 VAR_6.field.Ac0DmaDone = 1;
 VAR_5->int_pending &= ~VAR_0;


 VAR_8 = FUNC_0(VAR_5, VAR_6);

 FUNC_1(&VAR_5->irq_lock, VAR_4);



 if ((VAR_5->int_pending & VAR_0) || VAR_8)
 {
  FUNC_5(&VAR_7->ac0_dma_done_task);
  FUNC_2(&VAR_5->irq_lock, VAR_4);
  return;
 }


 FUNC_4(VAR_5, VAR_0);
 FUNC_2(&VAR_5->irq_lock, VAR_4);
}
