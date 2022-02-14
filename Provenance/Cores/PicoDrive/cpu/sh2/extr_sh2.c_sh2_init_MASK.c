
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int mult_m68k_to_sh2; unsigned int mult_sh2_to_m68k; int is_slave; struct TYPE_7__* other_sh2; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(SH2 *VAR_1, int VAR_2, SH2 *VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5 = VAR_1->mult_m68k_to_sh2;
 unsigned int VAR_6 = VAR_1->mult_sh2_to_m68k;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->is_slave = VAR_2;
 VAR_1->other_sh2 = VAR_3;
 VAR_1->mult_m68k_to_sh2 = VAR_5;
 VAR_1->mult_sh2_to_m68k = VAR_6;

 FUNC_1(VAR_1, VAR_0, VAR_2 ? "ssh2" : "msh2");



 return VAR_4;
}
