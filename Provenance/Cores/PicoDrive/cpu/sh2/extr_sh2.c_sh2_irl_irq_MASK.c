
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pending_irl; int pending_int_irq; int pending_level; int sr; int (* irq_callback ) (TYPE_1__*,int) ;int test_irq; int m68krcycles_done; } ;
typedef TYPE_1__ SH2 ;


 scalar_t__ FUNC_0 (TYPE_1__,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(SH2 *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_0->pending_irl = VAR_1;
 if (VAR_1 < VAR_0->pending_int_irq)
  VAR_1 = VAR_0->pending_int_irq;
 VAR_0->pending_level = VAR_1;

 VAR_3 = (VAR_1 > ((VAR_0->sr >> 4) & 0x0f));
 if (VAR_3) {
  if (!VAR_2) {


   int VAR_4 = VAR_0->irq_callback(VAR_0, VAR_1);
   FUNC_1(VAR_0, VAR_1, VAR_4);
   VAR_0->m68krcycles_done += FUNC_0(*VAR_0, 13);
  }
  else
   VAR_0->test_irq = 1;
 }
 return VAR_3;
}
