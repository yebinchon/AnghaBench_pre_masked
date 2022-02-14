
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int disp; int disp_size; } ;
struct TYPE_5__ {TYPE_1__ br_disp; int type; int address_mode; } ;
typedef TYPE_2__ cs_m68k_op ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(cs_m68k_op* VAR_2, int VAR_3, int VAR_4)
{
 VAR_2->address_mode = VAR_0;
 VAR_2->type = VAR_1;
 VAR_2->br_disp.disp = VAR_4;
 VAR_2->br_disp.disp_size = VAR_3;
}
