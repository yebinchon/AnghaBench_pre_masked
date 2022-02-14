
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint ;
struct TYPE_13__ {int ir; TYPE_1__* inst; } ;
typedef TYPE_2__ m68k_info ;
struct TYPE_14__ {scalar_t__ reg; } ;
typedef TYPE_3__ cs_m68k_op ;
struct TYPE_15__ {TYPE_3__* operands; } ;
typedef TYPE_4__ cs_m68k ;
struct TYPE_12__ {int Opcode; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ,int,int ) ;
 int FUNC_2 (TYPE_3__*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_6(m68k_info *VAR_6)
{
 cs_m68k* VAR_7;
 cs_m68k_op* VAR_8;
 cs_m68k_op* VAR_9;
 uint VAR_10, VAR_11;

 FUNC_0(VAR_6, VAR_0);

 VAR_10 = FUNC_4(VAR_6);
 VAR_11 = FUNC_4(VAR_6);


 VAR_6->inst->Opcode += (VAR_10 & 0x2f);

 VAR_7 = FUNC_1(VAR_6, VAR_3, 2, 0);
 VAR_8 = &VAR_7->operands[0];
 VAR_9 = &VAR_7->operands[1];

 VAR_8->reg = VAR_5 + (VAR_6->ir & 7);

 FUNC_2(VAR_9, VAR_4, FUNC_3(VAR_11) + 2);

 FUNC_5(VAR_6, VAR_2);
 FUNC_5(VAR_6, VAR_1);
}
