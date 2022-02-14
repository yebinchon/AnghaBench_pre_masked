
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ifclassq {int dummy; } ;
typedef int pktsched_pkt_t ;
struct TYPE_10__ {scalar_t__ fq_bytes; size_t fq_sc_index; scalar_t__ fq_getqtime; int fq_ptype; } ;
typedef TYPE_2__ fq_t ;
struct TYPE_11__ {TYPE_4__* fqs_classq; struct ifclassq* fqs_ifq; } ;
typedef TYPE_3__ fq_if_t ;
struct TYPE_9__ {int fcl_pkt_cnt; int fcl_byte_cnt; } ;
struct TYPE_12__ {TYPE_1__ fcl_stat; } ;
typedef TYPE_4__ fq_if_classq_t ;


 int FUNC_0 (struct ifclassq*,scalar_t__) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,void*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,void*) ;

void *
FUNC_7(fq_if_t *VAR_0, fq_t *VAR_1, pktsched_pkt_t *VAR_2)
{
 void *VAR_3;
 uint32_t VAR_4;
 fq_if_classq_t *VAR_5;
 struct ifclassq *VAR_6 = VAR_0->fqs_ifq;

 FUNC_3(VAR_1, VAR_3);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_6(VAR_2, VAR_1->fq_ptype, VAR_3);
 VAR_4 = FUNC_5(VAR_2);

 FUNC_2(VAR_1->fq_bytes >= VAR_4);
 VAR_1->fq_bytes -= VAR_4;

 VAR_5 = &VAR_0->fqs_classq[VAR_1->fq_sc_index];
 VAR_5->fcl_stat.fcl_byte_cnt -= VAR_4;
 VAR_5->fcl_stat.fcl_pkt_cnt--;
 FUNC_1(VAR_6);
 FUNC_0(VAR_6, VAR_4);


 if (FUNC_4(VAR_1))
  VAR_1->fq_getqtime = 0;

 return (VAR_3);
}
