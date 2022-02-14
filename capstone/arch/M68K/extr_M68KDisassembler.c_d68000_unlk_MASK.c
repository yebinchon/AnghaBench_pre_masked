
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_8__ {scalar_t__ reg; int address_mode; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_9__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_3)
{
 cs_m68k_op* VAR_4;
 cs_m68k* VAR_5 = FUNC_0(VAR_3, VAR_1, 1, 0);

 VAR_4 = &VAR_5->operands[0];

 VAR_4->address_mode = VAR_0;
 VAR_4->reg = VAR_2 + (VAR_3->ir & 7);
}
