
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int address; } ;
struct it_dma_prg {TYPE_1__ end; } ;
struct TYPE_4__ {scalar_t__ kvirt; } ;
struct dma_iso_ctx {int buf_size; int* buffer_prg_assignment; int nb_cmd; int packet_size; TYPE_2__ dma; struct it_dma_prg** it_prg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct dma_iso_ctx *VAR_0, int VAR_1, int VAR_2)
{
 struct it_dma_prg *VAR_3 = VAR_0->it_prg[VAR_1];
 unsigned long VAR_4 = (unsigned long)VAR_0->dma.kvirt + VAR_2 * VAR_0->buf_size;
 int VAR_5;

 VAR_0->buffer_prg_assignment[VAR_1] = VAR_2;
 for (VAR_5=0;VAR_5<VAR_0->nb_cmd;VAR_5++) {
   VAR_3[VAR_5].end.address =
  FUNC_0(FUNC_1(&VAR_0->dma,
   (VAR_4+VAR_5*VAR_0->packet_size) - (unsigned long)VAR_0->dma.kvirt));
 }
}
