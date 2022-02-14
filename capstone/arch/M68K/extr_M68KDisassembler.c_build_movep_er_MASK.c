
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ir; } ;
typedef TYPE_2__ m68k_info ;
typedef scalar_t__ int16_t ;
struct TYPE_9__ {scalar_t__ disp; scalar_t__ base_reg; } ;
struct TYPE_11__ {scalar_t__ reg; TYPE_1__ mem; int type; int address_mode; } ;
typedef TYPE_3__ cs_m68k_op ;
struct TYPE_12__ {TYPE_3__* operands; } ;
typedef TYPE_4__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,int ,int,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(m68k_info *VAR_5, int VAR_6)
{
 cs_m68k_op* VAR_7;
 cs_m68k_op* VAR_8;
 cs_m68k* VAR_9 = FUNC_0(VAR_5, VAR_1, 2, VAR_6);

 VAR_7 = &VAR_9->operands[0];
 VAR_8 = &VAR_9->operands[1];

 VAR_7->address_mode = VAR_0;
 VAR_7->type = VAR_2;
 VAR_7->mem.base_reg = VAR_3 + (VAR_5->ir & 7);
 VAR_7->mem.disp = (int16_t)FUNC_1(VAR_5);

 VAR_8->reg = VAR_4 + ((VAR_5->ir >> 9) & 7);
}
