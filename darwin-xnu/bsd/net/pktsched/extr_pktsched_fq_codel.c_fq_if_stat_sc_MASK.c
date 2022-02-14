
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct TYPE_9__ {TYPE_3__* fqs_classq; } ;
typedef TYPE_2__ fq_if_t ;
struct TYPE_8__ {int fcl_byte_cnt; int fcl_pkt_cnt; } ;
struct TYPE_10__ {TYPE_1__ fcl_stat; } ;
typedef TYPE_3__ fq_if_classq_t ;
struct TYPE_11__ {int bytes; int packets; int sc; } ;
typedef TYPE_4__ cqrq_stat_sc_t ;


 size_t FUNC_0 (TYPE_2__*,int ) ;

void
FUNC_1(fq_if_t *VAR_0, cqrq_stat_sc_t *VAR_1)
{
 u_int32_t VAR_2;
 fq_if_classq_t *VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = FUNC_0(VAR_0, VAR_1->sc);
 VAR_3 = &VAR_0->fqs_classq[VAR_2];
 VAR_1->packets = VAR_3->fcl_stat.fcl_pkt_cnt;
 VAR_1->bytes = VAR_3->fcl_stat.fcl_byte_cnt;
}
