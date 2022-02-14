
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint ;
struct TYPE_13__ {int ir; } ;
typedef TYPE_2__ m68k_info ;
struct TYPE_12__ {int reg_0; int reg_1; } ;
struct TYPE_14__ {scalar_t__ reg; int type; TYPE_1__ reg_pair; int address_mode; } ;
typedef TYPE_3__ cs_m68k_op ;
struct TYPE_15__ {TYPE_3__* operands; } ;
typedef TYPE_4__ cs_m68k ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int ,int,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(m68k_info *VAR_7)
{
 uint VAR_8, VAR_9;
 cs_m68k* VAR_10;
 cs_m68k_op* VAR_11;
 cs_m68k_op* VAR_12;
 uint VAR_13, VAR_14;


 FUNC_2(VAR_7, VAR_0);

 VAR_8 = FUNC_5(VAR_7);
 VAR_9 = 0;

 if (FUNC_1((VAR_8)))
  VAR_9 = 1;

 VAR_10 = FUNC_3(VAR_7, VAR_9 ? VAR_2 : VAR_3, 2, 4);

 VAR_11 = &VAR_10->operands[0];
 VAR_12 = &VAR_10->operands[1];

 FUNC_4(VAR_7, VAR_11, VAR_7->ir, 4);

 VAR_13 = VAR_8 & 7;
 VAR_14 = (VAR_8 >> 12) & 7;

 VAR_12->address_mode = VAR_1;
 VAR_12->type = VAR_5;
 VAR_12->reg_pair.reg_0 = VAR_13;
 VAR_12->reg_pair.reg_1 = VAR_14;

 if (!FUNC_0(VAR_8)) {
  VAR_12->type = VAR_4;
  VAR_12->reg = VAR_6 + VAR_14;
 }
}
