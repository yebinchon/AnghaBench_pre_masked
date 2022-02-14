
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint ;
struct TYPE_12__ {int ir; } ;
typedef TYPE_2__ m68k_info ;
struct TYPE_11__ {int bitfield; void* offset; void* width; } ;
struct TYPE_13__ {TYPE_1__ mem; scalar_t__ reg; int address_mode; } ;
typedef TYPE_3__ cs_m68k_op ;
struct TYPE_14__ {int op_count; TYPE_3__* operands; } ;
typedef TYPE_4__ cs_m68k ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_2 (TYPE_2__*,int,int,int ) ;
 scalar_t__* VAR_2 ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(m68k_info *VAR_3, int VAR_4, int VAR_5)
{
 uint8_t VAR_6;
 uint8_t VAR_7;
 cs_m68k_op* VAR_8;
 cs_m68k_op* VAR_9;
 cs_m68k* VAR_10 = FUNC_2(VAR_3, VAR_4, 1, 0);
 uint VAR_11 = FUNC_4(VAR_3);

 VAR_8 = &VAR_10->operands[0];
 VAR_9 = &VAR_10->operands[1];

 if (FUNC_1(VAR_11))
  VAR_6 = (VAR_11 >> 6) & 7;
 else
  VAR_6 = (VAR_11 >> 6) & 31;

 if (FUNC_0(VAR_11))
  VAR_7 = VAR_11 & 7;
 else
  VAR_7 = (uint8_t)VAR_2[VAR_11 & 31];

 if (VAR_5) {
  VAR_10->op_count = 2;
  VAR_9->address_mode = VAR_0;
  VAR_9->reg = VAR_1 + ((VAR_11 >> 12) & 7);
 }

 FUNC_3(VAR_3, VAR_8, VAR_3->ir, 1);

 VAR_8->mem.bitfield = 1;
 VAR_8->mem.width = VAR_7;
 VAR_8->mem.offset = VAR_6;
}
