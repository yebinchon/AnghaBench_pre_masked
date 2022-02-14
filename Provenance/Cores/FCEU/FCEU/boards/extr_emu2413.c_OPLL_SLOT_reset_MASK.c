
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; scalar_t__ egout; scalar_t__ pgout; scalar_t__ volume; scalar_t__ block; scalar_t__ fnum; scalar_t__ sustine; scalar_t__ tll; scalar_t__ rks; scalar_t__ eg_dphase; int eg_phase; int eg_mode; scalar_t__ feedback; scalar_t__* output; scalar_t__ dphase; scalar_t__ phase; int sintbl; } ;
typedef TYPE_1__ OPLL_SLOT ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_0(OPLL_SLOT * VAR_3, int VAR_4) {
 VAR_3->type = VAR_4;
 VAR_3->sintbl = VAR_2[0];
 VAR_3->phase = 0;
 VAR_3->dphase = 0;
 VAR_3->output[0] = 0;
 VAR_3->output[1] = 0;
 VAR_3->feedback = 0;
 VAR_3->eg_mode = VAR_1;
 VAR_3->eg_phase = VAR_0;
 VAR_3->eg_dphase = 0;
 VAR_3->rks = 0;
 VAR_3->tll = 0;
 VAR_3->sustine = 0;
 VAR_3->fnum = 0;
 VAR_3->block = 0;
 VAR_3->volume = 0;
 VAR_3->pgout = 0;
 VAR_3->egout = 0;
}
