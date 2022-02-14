
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
typedef int cs_m68k_op ;
struct TYPE_8__ {int * operands; } ;
typedef TYPE_2__ cs_m68k ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static void FUNC_2(m68k_info *VAR_0, int VAR_1, int VAR_2)
{
 cs_m68k_op* VAR_3;
 cs_m68k_op* VAR_4;
 cs_m68k* VAR_5 = FUNC_0(VAR_0, VAR_1, 2, VAR_2);

 VAR_3 = &VAR_5->operands[0];
 VAR_4 = &VAR_5->operands[1];

 FUNC_1(VAR_0, VAR_3, VAR_0->ir, VAR_2);
 FUNC_1(VAR_0, VAR_4, (((VAR_0->ir>>9) & 7) | ((VAR_0->ir>>3) & 0x38)), VAR_2);
}
