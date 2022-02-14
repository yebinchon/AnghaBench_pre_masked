
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ir; } ;
typedef TYPE_2__ m68k_info ;
struct TYPE_9__ {int disp; int disp_size; } ;
struct TYPE_11__ {TYPE_1__ br_disp; int address_mode; int type; scalar_t__ reg; } ;
typedef TYPE_3__ cs_m68k_op ;
struct TYPE_12__ {TYPE_3__* operands; } ;
typedef TYPE_4__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,int,int,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(m68k_info *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 cs_m68k_op* VAR_11;
 cs_m68k_op* VAR_12;
 cs_m68k* VAR_13 = FUNC_0(VAR_7, VAR_8, 2, VAR_9);

 VAR_11 = &VAR_13->operands[0];
 VAR_12 = &VAR_13->operands[1];

 VAR_11->address_mode = VAR_1;
 VAR_11->reg = VAR_6 + (VAR_7->ir & 7);

 VAR_12->type = VAR_4;
 VAR_12->address_mode = VAR_0;
 VAR_12->br_disp.disp = VAR_10;
 VAR_12->br_disp.disp_size = VAR_5;

 FUNC_1(VAR_7, VAR_3);
 FUNC_1(VAR_7, VAR_2);
}
