
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bfi_iocfc_cfgrsp_s {int dummy; } ;
struct bfi_iocfc_cfg_s {int dummy; } ;
struct bfi_ioc_attr_s {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_meminfo_s {int dummy; } ;
struct bfa_mem_kva_s {int dummy; } ;
struct bfa_mem_dma_s {int dummy; } ;
struct TYPE_4__ {int num_cqs; } ;
struct TYPE_3__ {int num_reqq_elems; int num_rspq_elems; } ;
struct bfa_iocfc_cfg_s {TYPE_2__ fwcfg; TYPE_1__ drvcfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_mem_dma_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_mem_kva_s* FUNC_1 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_2 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_3 (struct bfa_s*,int) ;
 struct bfa_mem_dma_s* FUNC_4 (struct bfa_s*,int) ;
 int FUNC_5 (int,int) ;
 int VAR_3 ;
 int FUNC_6 (struct bfa_meminfo_s*,struct bfa_mem_dma_s*,int) ;
 int FUNC_7 (struct bfa_meminfo_s*,struct bfa_mem_kva_s*,int ) ;

void
FUNC_8(struct bfa_iocfc_cfg_s *VAR_4, struct bfa_meminfo_s *VAR_5,
    struct bfa_s *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 struct bfa_mem_dma_s *VAR_10 = FUNC_2(VAR_6);
 struct bfa_mem_dma_s *VAR_11 = FUNC_0(VAR_6);
 struct bfa_mem_kva_s *VAR_12 = FUNC_1(VAR_6);
 u32 VAR_13 = 0;


 FUNC_6(VAR_5, VAR_10,
  FUNC_5(sizeof(struct bfi_ioc_attr_s), VAR_2));


 VAR_8 = FUNC_5((VAR_4->drvcfg.num_reqq_elems * VAR_3),
    VAR_2);
 VAR_9 = FUNC_5((VAR_4->drvcfg.num_rspq_elems * VAR_3),
    VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_4->fwcfg.num_cqs; VAR_7++) {
  FUNC_6(VAR_5, FUNC_3(VAR_6, VAR_7),
    VAR_8);
  FUNC_6(VAR_5, FUNC_4(VAR_6, VAR_7),
    VAR_9);
 }


 for (VAR_7 = 0; VAR_7 < VAR_4->fwcfg.num_cqs; VAR_7++)
  VAR_13 += (2 * VAR_0);


 VAR_13 += FUNC_5(sizeof(struct bfi_iocfc_cfg_s), VAR_0);
 VAR_13 += FUNC_5(sizeof(struct bfi_iocfc_cfgrsp_s),
   VAR_0);


 FUNC_6(VAR_5, VAR_11, VAR_13);


 FUNC_7(VAR_5, VAR_12, VAR_1);
}
