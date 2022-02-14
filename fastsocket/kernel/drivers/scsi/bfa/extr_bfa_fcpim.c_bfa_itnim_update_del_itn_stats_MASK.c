
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tm_iocdowns; scalar_t__ io_iocdowns; scalar_t__ total_ios; scalar_t__ iocom_hostabrts; scalar_t__ iocom_res_free; scalar_t__ iocom_sqer_needed; scalar_t__ iocomp_timedout; scalar_t__ iocomp_aborted; } ;
struct bfa_itnim_s {TYPE_2__ stats; int bfa; } ;
struct TYPE_3__ {int del_tm_iocdowns; int del_io_iocdowns; int del_itn_total_ios; int del_itn_iocom_hostabrts; int del_itn_iocom_res_free; int del_itn_iocom_sqer_needed; int del_itn_iocomp_timedout; int del_itn_iocomp_aborted; } ;
struct bfa_fcpim_s {TYPE_1__ del_itn_stats; } ;


 struct bfa_fcpim_s* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_itnim_s *VAR_0)
{
 struct bfa_fcpim_s *VAR_1 = FUNC_0(VAR_0->bfa);
 VAR_1->del_itn_stats.del_itn_iocomp_aborted +=
  VAR_0->stats.iocomp_aborted;
 VAR_1->del_itn_stats.del_itn_iocomp_timedout +=
  VAR_0->stats.iocomp_timedout;
 VAR_1->del_itn_stats.del_itn_iocom_sqer_needed +=
  VAR_0->stats.iocom_sqer_needed;
 VAR_1->del_itn_stats.del_itn_iocom_res_free +=
  VAR_0->stats.iocom_res_free;
 VAR_1->del_itn_stats.del_itn_iocom_hostabrts +=
  VAR_0->stats.iocom_hostabrts;
 VAR_1->del_itn_stats.del_itn_total_ios += VAR_0->stats.total_ios;
 VAR_1->del_itn_stats.del_io_iocdowns += VAR_0->stats.io_iocdowns;
 VAR_1->del_itn_stats.del_tm_iocdowns += VAR_0->stats.tm_iocdowns;
}
