
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint ;
struct TYPE_10__ {int ir; int inst; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_11__ {scalar_t__ reg; int type; int address_mode; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_12__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__* FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(m68k_info *VAR_6, int VAR_7)
{
 cs_m68k_op* VAR_8;
 cs_m68k_op* VAR_9;
 cs_m68k* VAR_10 = FUNC_3(VAR_6, VAR_1, 2, VAR_7);

 uint VAR_11 = FUNC_5(VAR_6);

 if (FUNC_0(VAR_11))
  FUNC_2(VAR_6->inst, VAR_1);
 else
  FUNC_2(VAR_6->inst, VAR_2);

 VAR_8 = &VAR_10->operands[0];
 VAR_9 = &VAR_10->operands[1];

 FUNC_4(VAR_6, VAR_8, VAR_6->ir, VAR_7);

 VAR_9->address_mode = VAR_0;
 VAR_9->type = VAR_3;
 VAR_9->reg = (FUNC_1(VAR_11) ? VAR_4 : VAR_5) + ((VAR_11 >> 12) & 7);
}
