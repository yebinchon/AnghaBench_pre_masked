
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int * gs_copy_program; int * gs_program; int * ps_program; int * vs_program; } ;
typedef TYPE_5__ org_programs_t ;
struct TYPE_11__ {int size; int * program; } ;
struct TYPE_10__ {int * copyProgram; int * program; } ;
struct TYPE_9__ {int * program; } ;
struct TYPE_8__ {int * program; } ;
struct TYPE_13__ {TYPE_4__ fs; TYPE_3__ gs; TYPE_2__ ps; TYPE_1__ vs; } ;
typedef TYPE_6__ GX2Shader ;


 int FUNC_0 (int *) ;

void FUNC_1(GX2Shader *VAR_0)
{

   FUNC_0(VAR_0->vs.program);
   FUNC_0(VAR_0->ps.program);
   FUNC_0(VAR_0->gs.program);
   FUNC_0(VAR_0->gs.copyProgram);

   org_programs_t *VAR_1 = (org_programs_t *)(VAR_0->fs.program + VAR_0->fs.size);

   VAR_0->vs.program = VAR_1->vs_program;
   VAR_0->ps.program = VAR_1->ps_program;
   VAR_0->gs.program = VAR_1->gs_program;
   VAR_0->gs.copyProgram = VAR_1->gs_copy_program;


   FUNC_0(VAR_0->fs.program);
   VAR_0->fs.program = ((void*)0);
}
