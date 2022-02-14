
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int m68k_info ;
struct TYPE_4__ {int address_mode; int imm; scalar_t__ reg; int type; } ;
typedef TYPE_1__ cs_m68k_op ;
struct TYPE_5__ {TYPE_1__* operands; } ;
typedef TYPE_2__ cs_m68k ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_5, int VAR_6[2], int VAR_7[2])
{
 cs_m68k* VAR_8 = FUNC_0(VAR_5, VAR_2, 2, 0);
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 2; ++VAR_9) {
  cs_m68k_op* VAR_10 = &VAR_8->operands[VAR_9];
  const int VAR_11 = VAR_6[VAR_9];
  const int VAR_12 = VAR_7[VAR_9];

  VAR_10->type = VAR_3;

  if (VAR_12 == VAR_0 || VAR_12 == VAR_1) {
   VAR_10->address_mode = VAR_12;
   VAR_10->reg = VAR_4 + VAR_11;
  } else {
   VAR_10->address_mode = VAR_12;
   VAR_10->imm = VAR_11;
  }
 }
}
