
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ps; unsigned long windowstart; scalar_t__ a; int sar; int lcount; int lend; int lbeg; int pc; } ;
typedef TYPE_1__ xtensa_gregset_t ;
struct pt_regs {unsigned long windowbase; unsigned long windowstart; unsigned long wmask; int ps; scalar_t__ areg; int sar; int lcount; int lend; int lbeg; int pc; } ;
typedef int elfregs ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,unsigned long) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2 (xtensa_gregset_t *VAR_3, struct pt_regs *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = VAR_4->windowbase;
 VAR_6 = VAR_4->windowstart;
 VAR_7 = VAR_4->wmask;
 VAR_6 = ((VAR_6 >> VAR_5) | (VAR_6 << (VAR_1 - VAR_5))) & ((1 << VAR_1) - 1);



 FUNC_1(VAR_3, 0, sizeof (VAR_3));





 VAR_3->pc = VAR_4->pc;
 VAR_3->ps = (VAR_4->ps & ~(1 << VAR_0));
 VAR_3->lbeg = VAR_4->lbeg;
 VAR_3->lend = VAR_4->lend;
 VAR_3->lcount = VAR_4->lcount;
 VAR_3->sar = VAR_4->sar;
 VAR_3->windowstart = VAR_6;

 VAR_8 = (VAR_7 & 2) ? 4 : (VAR_7 & 4) ? 8 : (VAR_7 & 8) ? 12 : 16;
 VAR_9 = VAR_2 - (VAR_7 >> 4) * 4;
 FUNC_0(VAR_3->a, VAR_4->areg, VAR_8 * 4);
 FUNC_0(VAR_3->a + VAR_9, VAR_4->areg + VAR_9, (VAR_7 >> 4) * 16);
}
