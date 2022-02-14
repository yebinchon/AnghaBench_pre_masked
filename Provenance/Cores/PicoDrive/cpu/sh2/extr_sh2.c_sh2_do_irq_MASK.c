
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sr; int* r; int pc; int icount; scalar_t__ vbr; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (int,int,TYPE_1__*) ;

void FUNC_2(SH2 *VAR_1, int VAR_2, int VAR_3)
{
 VAR_1->sr &= 0x3f3;

 VAR_1->r[15] -= 4;
 FUNC_1(VAR_1->r[15], VAR_1->sr, VAR_1);
 VAR_1->r[15] -= 4;
 FUNC_1(VAR_1->r[15], VAR_1->pc, VAR_1);


 VAR_1->sr = (VAR_1->sr & ~VAR_0) | (VAR_2 << 4);


 VAR_1->pc = FUNC_0(VAR_1->vbr + VAR_3 * 4, VAR_1);


 VAR_1->icount -= 13;
}
