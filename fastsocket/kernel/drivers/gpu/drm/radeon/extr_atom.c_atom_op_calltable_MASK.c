
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int abort; scalar_t__ ps_shift; scalar_t__ ps; TYPE_3__* ctx; } ;
typedef TYPE_1__ atom_exec_context ;
struct TYPE_5__ {scalar_t__ cmd_table; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int,scalar_t__) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_4(atom_exec_context *VAR_2, int *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_2((*VAR_3)++);
 int VAR_6 = 0;

 if (VAR_5 < VAR_0)
  FUNC_0("   table: %d (%s)\n", VAR_5, VAR_1[VAR_5]);
 else
  FUNC_0("   table: %d\n", VAR_5);
 if (FUNC_1(VAR_2->ctx->cmd_table + 4 + 2 * VAR_5))
  VAR_6 = FUNC_3(VAR_2->ctx, VAR_5, VAR_2->ps + VAR_2->ps_shift);
 if (VAR_6) {
  VAR_2->abort = 1;
 }
}
