
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kvirt; } ;
struct dma_iso_ctx {int buf_size; int* buffer_prg_assignment; int nb_cmd; int left_size; TYPE_1__ dma; struct dma_cmd** ir_prg; } ;
struct dma_cmd {void* address; void* control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct dma_iso_ctx *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct dma_cmd *VAR_9 = VAR_5->ir_prg[VAR_6];
 unsigned long VAR_10 = (unsigned long)VAR_5->dma.kvirt + VAR_7 * VAR_5->buf_size;
 int VAR_11;

 VAR_5->buffer_prg_assignment[VAR_6] = VAR_7;

 VAR_9[0].address = FUNC_0(FUNC_1(&VAR_5->dma, VAR_10 -
                           (unsigned long)VAR_5->dma.kvirt));
 VAR_9[1].address = FUNC_0(FUNC_1(&VAR_5->dma,
    (VAR_10 + 4) - (unsigned long)VAR_5->dma.kvirt));

 for (VAR_11=2;VAR_11<VAR_5->nb_cmd-1;VAR_11++) {
  VAR_9[VAR_11].address = FUNC_0(FUNC_1(&VAR_5->dma,
      (VAR_10+(VAR_11-1)*VAR_4) -
      (unsigned long)VAR_5->dma.kvirt));
 }

 VAR_9[VAR_11].control = FUNC_0(VAR_1 | VAR_3 |
      VAR_2 | VAR_0 | VAR_5->left_size);
 VAR_9[VAR_11].address = FUNC_0(FUNC_1(&VAR_5->dma,
      (VAR_10+(VAR_11-1)*VAR_4) - (unsigned long)VAR_5->dma.kvirt));
}
