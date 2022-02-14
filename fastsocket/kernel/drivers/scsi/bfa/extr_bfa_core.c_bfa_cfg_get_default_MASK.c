
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* delay_comp; void* ioc_recover; int path_tov; int num_sboot_luns; int num_sboot_tgts; int num_sgpgs; int num_rspq_elems; int num_reqq_elems; } ;
struct TYPE_3__ {scalar_t__ num_fwtio_reqs; int num_cqs; int num_uf_bufs; int num_fcxp_reqs; int num_tskim_reqs; int num_ioim_reqs; int num_rports; int num_lports; int num_fabrics; } ;
struct bfa_iocfc_cfg_s {TYPE_2__ drvcfg; TYPE_1__ fwcfg; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void
FUNC_0(struct bfa_iocfc_cfg_s *VAR_15)
{
 VAR_15->fwcfg.num_fabrics = VAR_3;
 VAR_15->fwcfg.num_lports = VAR_6;
 VAR_15->fwcfg.num_rports = VAR_8;
 VAR_15->fwcfg.num_ioim_reqs = VAR_5;
 VAR_15->fwcfg.num_tskim_reqs = VAR_13;
 VAR_15->fwcfg.num_fcxp_reqs = VAR_4;
 VAR_15->fwcfg.num_uf_bufs = VAR_14;
 VAR_15->fwcfg.num_cqs = VAR_2;
 VAR_15->fwcfg.num_fwtio_reqs = 0;

 VAR_15->drvcfg.num_reqq_elems = VAR_7;
 VAR_15->drvcfg.num_rspq_elems = VAR_9;
 VAR_15->drvcfg.num_sgpgs = VAR_12;
 VAR_15->drvcfg.num_sboot_tgts = VAR_11;
 VAR_15->drvcfg.num_sboot_luns = VAR_10;
 VAR_15->drvcfg.path_tov = VAR_1;
 VAR_15->drvcfg.ioc_recover = VAR_0;
 VAR_15->drvcfg.delay_comp = VAR_0;

}
