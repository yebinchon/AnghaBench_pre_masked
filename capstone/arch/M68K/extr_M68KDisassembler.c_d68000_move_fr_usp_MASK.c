
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_8__ {scalar_t__ reg; void* address_mode; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_9__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_4)
{
 cs_m68k_op* VAR_5;
 cs_m68k_op* VAR_6;
 cs_m68k* VAR_7 = FUNC_0(VAR_4, VAR_1, 2, 0);

 VAR_5 = &VAR_7->operands[0];
 VAR_6 = &VAR_7->operands[1];

 VAR_5->address_mode = VAR_0;
 VAR_5->reg = VAR_3;

 VAR_6->address_mode = VAR_0;
 VAR_6->reg = VAR_2 + (VAR_4->ir & 7);
}
