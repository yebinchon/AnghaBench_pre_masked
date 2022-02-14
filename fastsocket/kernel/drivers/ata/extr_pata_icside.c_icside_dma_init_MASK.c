
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pata_icside_state {scalar_t__ dma; TYPE_1__* port; } ;
struct pata_icside_info {int mwdma_mask; struct expansion_card* ec; struct pata_icside_state* state; } ;
struct expansion_card {scalar_t__ dma; } ;
struct TYPE_2__ {int* speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct pata_icside_info *VAR_4)
{
 struct pata_icside_state *VAR_5 = VAR_4->state;
 struct expansion_card *VAR_6 = VAR_4->ec;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5->port[0].speed[VAR_7] = 480;
  VAR_5->port[1].speed[VAR_7] = 480;
 }

 if (VAR_6->dma != VAR_3 && !FUNC_0(VAR_6->dma, VAR_2)) {
  VAR_5->dma = VAR_6->dma;
  VAR_4->mwdma_mask = VAR_1;
 }

 return 0;
}
