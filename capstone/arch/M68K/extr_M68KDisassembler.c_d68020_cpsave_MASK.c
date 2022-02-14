
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_9__ {int * operands; } ;
typedef TYPE_2__ cs_m68k ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int) ;

__attribute__((used)) static void FUNC_3(m68k_info *VAR_2)
{
 cs_m68k* VAR_3;

 FUNC_0(VAR_2, VAR_0);

 VAR_3 = FUNC_1(VAR_2, VAR_1, 1, 0);
 FUNC_2(VAR_2, &VAR_3->operands[0], VAR_2->ir, 1);
}
