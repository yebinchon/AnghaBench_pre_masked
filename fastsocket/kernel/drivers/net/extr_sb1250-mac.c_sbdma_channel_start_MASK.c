
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmacdma {int sbdma_dscrtable_phys; int sbdma_dscrtable; int sbdma_remptr; int sbdma_addptr; int sbdma_dscrbase; int sbdma_config0; int sbdma_maxdescr; int sbdma_config1; int sbdma_int_pktcnt; int sbdma_int_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct sbmacdma *VAR_1, int VAR_2)
{
 FUNC_3(0, VAR_1->sbdma_config1);
 FUNC_3(FUNC_2(VAR_1->sbdma_maxdescr) |
         0, VAR_1->sbdma_config0);


 FUNC_3(VAR_1->sbdma_dscrtable_phys, VAR_1->sbdma_dscrbase);





 VAR_1->sbdma_addptr = VAR_1->sbdma_dscrtable;
 VAR_1->sbdma_remptr = VAR_1->sbdma_dscrtable;
}
