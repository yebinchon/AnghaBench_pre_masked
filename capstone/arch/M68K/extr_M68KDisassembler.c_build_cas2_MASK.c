
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int m68k_info ;
struct TYPE_5__ {int reg_0; int reg_1; } ;
struct TYPE_6__ {TYPE_1__ reg_pair; void* type; void* address_mode; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_7__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_3__* FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(m68k_info *VAR_3, int VAR_4)
{
 uint VAR_5;
 uint VAR_6;
 cs_m68k_op* VAR_7;
 cs_m68k_op* VAR_8;
 cs_m68k_op* VAR_9;
 cs_m68k* VAR_10 = FUNC_2(VAR_3, VAR_1, 3, VAR_4);
 int VAR_11, VAR_12;


 VAR_5 = FUNC_4(VAR_3) & 0xffff;
 if (!FUNC_3(VAR_3, VAR_5))
  return;

 VAR_7 = &VAR_10->operands[0];
 VAR_8 = &VAR_10->operands[1];
 VAR_9 = &VAR_10->operands[2];

 VAR_6 = FUNC_5(VAR_3);

 VAR_7->address_mode = VAR_0;
 VAR_7->type = VAR_2;
 VAR_7->reg_pair.reg_0 = (VAR_6 >> 16) & 7;
 VAR_7->reg_pair.reg_1 = VAR_6 & 7;

 VAR_8->address_mode = VAR_0;
 VAR_8->type = VAR_2;
 VAR_8->reg_pair.reg_0 = (VAR_6 >> 22) & 7;
 VAR_8->reg_pair.reg_1 = (VAR_6 >> 6) & 7;

 VAR_11 = (VAR_6 >> 28) & 7;
 VAR_12 = (VAR_6 >> 12) & 7;

 VAR_9->address_mode = VAR_0;
 VAR_9->type = VAR_2;
 VAR_9->reg_pair.reg_0 = VAR_11 + (FUNC_0(VAR_6) ? 8 : 0);
 VAR_9->reg_pair.reg_1 = VAR_12 + (FUNC_1(VAR_6) ? 8 : 0);
}
