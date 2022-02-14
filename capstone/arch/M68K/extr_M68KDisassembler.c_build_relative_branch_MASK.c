
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int m68k_info ;
struct TYPE_5__ {int disp; int disp_size; } ;
struct TYPE_6__ {TYPE_1__ br_disp; int address_mode; int type; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_7__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(m68k_info *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 cs_m68k_op* VAR_8;
 cs_m68k* VAR_9 = FUNC_0(VAR_4, VAR_5, 1, VAR_6);

 VAR_8 = &VAR_9->operands[0];

 VAR_8->type = VAR_3;
 VAR_8->address_mode = VAR_0;
 VAR_8->br_disp.disp = VAR_7;
 VAR_8->br_disp.disp_size = VAR_6;

 FUNC_1(VAR_4, VAR_2);
 FUNC_1(VAR_4, VAR_1);
}
