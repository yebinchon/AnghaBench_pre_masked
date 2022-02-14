
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_iso_ctx {int nb_cmd; int left_size; TYPE_1__** ir_prg; } ;
struct TYPE_2__ {void* status; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct dma_iso_ctx *VAR_1, int VAR_2)
{
 int VAR_3;
 VAR_1->ir_prg[VAR_2][0].status = FUNC_0(4);
 VAR_1->ir_prg[VAR_2][1].status = FUNC_0(VAR_0-4);
 for (VAR_3 = 2; VAR_3 < VAR_1->nb_cmd - 1; VAR_3++)
  VAR_1->ir_prg[VAR_2][VAR_3].status = FUNC_0(VAR_0);
 VAR_1->ir_prg[VAR_2][VAR_3].status = FUNC_0(VAR_1->left_size);
}
