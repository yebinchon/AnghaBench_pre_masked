
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cntxt_id; int stops; } ;
struct sge_ofld_txq {TYPE_3__* adap; TYPE_1__ q; int mapping_err; } ;
struct TYPE_5__ {int txq_maperr; scalar_t__ egr_start; } ;
struct TYPE_6__ {TYPE_2__ sge; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct sge_ofld_txq *VAR_0)
{
 VAR_0->mapping_err++;
 VAR_0->q.stops++;
 FUNC_0(VAR_0->q.cntxt_id - VAR_0->adap->sge.egr_start,
  VAR_0->adap->sge.txq_maperr);
}
