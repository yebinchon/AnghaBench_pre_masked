
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct TYPE_6__ {int qe; } ;
struct TYPE_5__ {int qe; } ;
struct bfa_meminfo_s {TYPE_2__ kva_info; TYPE_1__ dma_info; } ;
struct bfa_mem_dma_s {int dummy; } ;
struct TYPE_7__ {int min_cfg; } ;
struct bfa_iocfc_cfg_s {TYPE_3__ drvcfg; } ;
struct TYPE_8__ {int (* meminfo ) (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;} ;


 struct bfa_mem_dma_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_1 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_2 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_3 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_4 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_5 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_6 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_7 (struct bfa_s*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;
 int FUNC_16 (struct bfa_meminfo_s*,struct bfa_mem_dma_s*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 TYPE_4__** VAR_0 ;
 int FUNC_20 (void*,int ,int) ;
 int FUNC_21 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;

void
FUNC_22(struct bfa_iocfc_cfg_s *VAR_1, struct bfa_meminfo_s *VAR_2,
  struct bfa_s *VAR_3)
{
 int VAR_4;
 struct bfa_mem_dma_s *VAR_5 = FUNC_6(VAR_3);
 struct bfa_mem_dma_s *VAR_6 = FUNC_0(VAR_3);
 struct bfa_mem_dma_s *VAR_7 = FUNC_1(VAR_3);
 struct bfa_mem_dma_s *VAR_8 = FUNC_7(VAR_3);
 struct bfa_mem_dma_s *VAR_9 = FUNC_3(VAR_3);
 struct bfa_mem_dma_s *VAR_10 = FUNC_2(VAR_3);
 struct bfa_mem_dma_s *VAR_11 = FUNC_5(VAR_3);
 struct bfa_mem_dma_s *VAR_12 = FUNC_4(VAR_3);

 FUNC_9((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)));

 FUNC_20((void *)VAR_2, 0, sizeof(struct bfa_meminfo_s));


 FUNC_8(&VAR_2->dma_info.qe);
 FUNC_8(&VAR_2->kva_info.qe);

 FUNC_15(VAR_1, VAR_2, VAR_3);

 for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++)
  VAR_0[VAR_4]->meminfo(VAR_1, VAR_2, VAR_3);


 FUNC_16(VAR_2, VAR_5, FUNC_18());
 FUNC_16(VAR_2, VAR_6, FUNC_10());
 FUNC_16(VAR_2, VAR_7, FUNC_11());
 FUNC_16(VAR_2, VAR_8, FUNC_19());
 FUNC_16(VAR_2, VAR_9,
     FUNC_13(VAR_1->drvcfg.min_cfg));
 FUNC_16(VAR_2, VAR_10, FUNC_12());
 FUNC_16(VAR_2, VAR_11,
     FUNC_17(VAR_1->drvcfg.min_cfg));
 FUNC_16(VAR_2, VAR_12,
     FUNC_14(VAR_1->drvcfg.min_cfg));
}
