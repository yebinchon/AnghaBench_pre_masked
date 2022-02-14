
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dmamap; } ;
struct ahd_softc {TYPE_1__ shared_data_map; int shared_data_dmat; } ;
struct ahd_completion {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*,int ,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct ahd_softc *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, VAR_1->shared_data_dmat, VAR_1->shared_data_map.dmamap,
             0,
          VAR_0 * sizeof(struct ahd_completion), VAR_2);
}
