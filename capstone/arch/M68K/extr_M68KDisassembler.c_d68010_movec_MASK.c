
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint ;
typedef void* m68k_reg ;
struct TYPE_9__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_10__ {void* reg; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_11__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 TYPE_3__* FUNC_3 (TYPE_1__*,int ,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(m68k_info *VAR_21)
{
 uint VAR_22;
 m68k_reg VAR_23;
 cs_m68k* VAR_24;
 cs_m68k_op* VAR_25;
 cs_m68k_op* VAR_26;


 FUNC_2(VAR_21, VAR_0);

 VAR_22 = FUNC_4(VAR_21);
 VAR_23 = VAR_9;

 VAR_24 = FUNC_3(VAR_21, VAR_1, 2, 0);

 VAR_25 = &VAR_24->operands[0];
 VAR_26 = &VAR_24->operands[1];

 switch (VAR_22 & 0xfff) {
  case 0x000: VAR_23 = VAR_15; break;
  case 0x001: VAR_23 = VAR_6; break;
  case 0x800: VAR_23 = VAR_19; break;
  case 0x801: VAR_23 = VAR_20; break;
  case 0x002: VAR_23 = VAR_4; break;
  case 0x802: VAR_23 = VAR_3; break;
  case 0x803: VAR_23 = VAR_14; break;
  case 0x804: VAR_23 = VAR_10; break;
  case 0x003: VAR_23 = VAR_17; break;
  case 0x004: VAR_23 = VAR_11; break;
  case 0x005: VAR_23 = VAR_12; break;
  case 0x006: VAR_23 = VAR_7; break;
  case 0x007: VAR_23 = VAR_8; break;
  case 0x805: VAR_23 = VAR_13; break;
  case 0x806: VAR_23 = VAR_18; break;
  case 0x807: VAR_23 = VAR_16; break;
 }

 if (FUNC_0(VAR_21->ir)) {
  VAR_25->reg = (FUNC_1(VAR_22) ? VAR_2 : VAR_5) + ((VAR_22 >> 12) & 7);
  VAR_26->reg = VAR_23;
 } else {
  VAR_25->reg = VAR_23;
  VAR_26->reg = (FUNC_1(VAR_22) ? VAR_2 : VAR_5) + ((VAR_22 >> 12) & 7);
 }
}
