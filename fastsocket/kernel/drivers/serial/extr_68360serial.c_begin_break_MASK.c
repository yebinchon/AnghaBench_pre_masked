
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ushort ;
struct TYPE_7__ {TYPE_1__* state; } ;
typedef TYPE_2__ ser_info_t ;
struct TYPE_8__ {int cp_cr; } ;
struct TYPE_6__ {int smc_scc_num; } ;
typedef TYPE_3__ QUICC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__* VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_2(ser_info_t *VAR_6)
{
 volatile QUICC *VAR_7;
 ushort VAR_8;
 int VAR_9;

 VAR_7 = VAR_3;

 VAR_9 = FUNC_0(VAR_6->state->smc_scc_num);
 if (VAR_6->state->smc_scc_num & VAR_2)
  VAR_8 = VAR_4[VAR_9];
 else
  VAR_8 = VAR_5[VAR_9];

 VAR_7->cp_cr = FUNC_1(VAR_8, VAR_1) | VAR_0;
 while (VAR_7->cp_cr & VAR_0);
}
