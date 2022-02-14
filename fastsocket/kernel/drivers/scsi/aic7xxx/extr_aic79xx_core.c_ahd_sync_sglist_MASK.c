
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scb {int sg_count; scalar_t__ sg_list_busaddr; TYPE_2__* sg_map; } ;
struct TYPE_3__ {int sg_dmat; } ;
struct ahd_softc {TYPE_1__ scb_data; } ;
struct TYPE_4__ {int dmamap; } ;


 int FUNC_0 (struct ahd_softc*,int ,int ,scalar_t__,int,int) ;
 int FUNC_1 (struct ahd_softc*) ;

void
FUNC_2(struct ahd_softc *VAR_0, struct scb *VAR_1, int VAR_2)
{
 if (VAR_1->sg_count == 0)
  return;

 FUNC_0(VAR_0, VAR_0->scb_data.sg_dmat,
   VAR_1->sg_map->dmamap,
             VAR_1->sg_list_busaddr - FUNC_1(VAR_0),
          FUNC_1(VAR_0) * VAR_1->sg_count, VAR_2);
}
