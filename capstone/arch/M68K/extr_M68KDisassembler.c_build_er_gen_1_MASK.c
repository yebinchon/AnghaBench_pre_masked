
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_10__ {scalar_t__ reg; int address_mode; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_11__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int,int,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int,int ) ;

__attribute__((used)) static void FUNC_2(m68k_info *VAR_4, bool VAR_5, int VAR_6, uint8_t VAR_7)
{
 cs_m68k_op* VAR_8;
 cs_m68k_op* VAR_9;
 cs_m68k* VAR_10 = FUNC_0(VAR_4, VAR_6, 2, VAR_7);

 VAR_8 = &VAR_10->operands[0];
 VAR_9 = &VAR_10->operands[1];

 FUNC_1(VAR_4, VAR_8, VAR_4->ir, VAR_7);

 if (VAR_5) {
  VAR_9->address_mode = VAR_1;
  VAR_9->reg = VAR_3 + ((VAR_4->ir >> 9) & 7);
 } else {
  VAR_9->address_mode = VAR_0;
  VAR_9->reg = VAR_2 + ((VAR_4->ir >> 9) & 7);
 }
}
