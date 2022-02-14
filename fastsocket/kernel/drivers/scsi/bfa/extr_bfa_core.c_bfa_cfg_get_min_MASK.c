
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int min_cfg; int num_rspq_elems; int num_reqq_elems; int num_sgpgs; } ;
struct TYPE_4__ {scalar_t__ num_fwtio_reqs; int num_rports; int num_uf_bufs; int num_fcxp_reqs; int num_tskim_reqs; int num_ioim_reqs; } ;
struct bfa_iocfc_cfg_s {TYPE_1__ drvcfg; TYPE_2__ fwcfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bfa_iocfc_cfg_s*) ;

void
FUNC_1(struct bfa_iocfc_cfg_s *VAR_9)
{
 FUNC_0(VAR_9);
 VAR_9->fwcfg.num_ioim_reqs = VAR_1;
 VAR_9->fwcfg.num_tskim_reqs = VAR_7;
 VAR_9->fwcfg.num_fcxp_reqs = VAR_0;
 VAR_9->fwcfg.num_uf_bufs = VAR_8;
 VAR_9->fwcfg.num_rports = VAR_3;
 VAR_9->fwcfg.num_fwtio_reqs = 0;

 VAR_9->drvcfg.num_sgpgs = VAR_5;
 VAR_9->drvcfg.num_reqq_elems = VAR_2;
 VAR_9->drvcfg.num_rspq_elems = VAR_4;
 VAR_9->drvcfg.min_cfg = VAR_6;
}
