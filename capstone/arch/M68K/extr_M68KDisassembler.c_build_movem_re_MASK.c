
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_11__ {scalar_t__ address_mode; int register_bits; int type; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_12__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(m68k_info *VAR_2, int VAR_3, int VAR_4)
{
 cs_m68k_op* VAR_5;
 cs_m68k_op* VAR_6;
 cs_m68k* VAR_7 = FUNC_0(VAR_2, VAR_3, 2, VAR_4);

 VAR_5 = &VAR_7->operands[0];
 VAR_6 = &VAR_7->operands[1];

 VAR_5->type = VAR_1;
 VAR_5->register_bits = FUNC_2(VAR_2);

 FUNC_1(VAR_2, VAR_6, VAR_2->ir, VAR_4);

 if (VAR_6->address_mode == VAR_0)
  VAR_5->register_bits = FUNC_3(VAR_5->register_bits);
}
