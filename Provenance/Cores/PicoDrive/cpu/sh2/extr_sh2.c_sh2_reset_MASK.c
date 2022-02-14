
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pending_int_irq; scalar_t__ vbr; int sr; void** r; void* pc; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 void* FUNC_0 (int,TYPE_1__*) ;

void FUNC_1(SH2 *VAR_1)
{
 VAR_1->pc = FUNC_0(0, VAR_1);
 VAR_1->r[15] = FUNC_0(4, VAR_1);
 VAR_1->sr = VAR_0;
 VAR_1->vbr = 0;
 VAR_1->pending_int_irq = 0;
}
