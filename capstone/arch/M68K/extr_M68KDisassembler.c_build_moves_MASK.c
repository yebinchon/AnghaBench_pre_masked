
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint ;
struct TYPE_10__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_11__ {void* reg; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_12__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(m68k_info *VAR_3, int VAR_4)
{
 cs_m68k_op* VAR_5;
 cs_m68k_op* VAR_6;
 cs_m68k* VAR_7 = FUNC_2(VAR_3, VAR_0, 2, VAR_4);
 uint VAR_8 = FUNC_4(VAR_3);

 VAR_5 = &VAR_7->operands[0];
 VAR_6 = &VAR_7->operands[1];

 if (FUNC_0(VAR_8)) {
  VAR_5->reg = (FUNC_1(VAR_8) ? VAR_1 : VAR_2) + ((VAR_8 >> 12) & 7);
  FUNC_3(VAR_3, VAR_6, VAR_3->ir, VAR_4);
 } else {
  FUNC_3(VAR_3, VAR_5, VAR_3->ir, VAR_4);
  VAR_6->reg = (FUNC_1(VAR_8) ? VAR_1 : VAR_2) + ((VAR_8 >> 12) & 7);
 }
}
