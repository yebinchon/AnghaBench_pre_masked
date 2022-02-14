
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct ifclassq {scalar_t__ ifcq_disc; } ;
typedef int mbuf_svc_class_t ;
struct TYPE_8__ {int fqs_ptype; TYPE_3__* fqs_classq; } ;
typedef TYPE_2__ fq_if_t ;
struct TYPE_7__ {scalar_t__ fcl_pkt_cnt; } ;
struct TYPE_9__ {TYPE_1__ fcl_stat; } ;
typedef TYPE_3__ fq_if_classq_t ;
typedef int (* fq_if_append_pkt_t ) (void*,void*) ;
typedef int classq_pkt_type_t ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,size_t,size_t,void**,void**,size_t*,size_t*,int ,int *) ;
 size_t FUNC_3 (TYPE_2__*,int ) ;

int
FUNC_4(struct ifclassq *VAR_1, mbuf_svc_class_t VAR_2,
    u_int32_t VAR_3, u_int32_t VAR_4, void **VAR_5,
    void **VAR_6, u_int32_t *VAR_7, u_int32_t *VAR_8,
    classq_pkt_type_t *VAR_9)
{
#pragma unused(maxpktcnt, maxbytecnt, first_packet, last_packet, retpktcnt, retbytecnt)
 fq_if_t *VAR_10 = (fq_if_t *)VAR_1->ifcq_disc;
 u_int32_t VAR_11;
 u_int32_t VAR_12 = 0, VAR_13 = 0;
 fq_if_classq_t *VAR_14;
 void *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 fq_if_append_pkt_t VAR_17;

 switch (VAR_10->fqs_ptype) {
 case 128:
  VAR_17 = FUNC_1;
  break;


 default:
  FUNC_0(0);

 }

 VAR_11 = FUNC_3(VAR_10, VAR_2);
 VAR_14 = &VAR_10->fqs_classq[VAR_11];






 while (VAR_12 < VAR_3 && VAR_13 < VAR_4 &&
     VAR_14->fcl_stat.fcl_pkt_cnt > 0) {
  void *VAR_18, *VAR_19;
  u_int32_t VAR_20 = 0, VAR_21 = 0;
  FUNC_2(VAR_10, VAR_14, (VAR_3 - VAR_12),
      (VAR_4 - VAR_13), &VAR_18, &VAR_19, &VAR_20,
      &VAR_21, VAR_0, VAR_9);
  if (VAR_15 == ((void*)0)) {
   VAR_15 = VAR_18;
   VAR_12 = VAR_20;
   VAR_13 = VAR_21;
  } else {
   VAR_17(VAR_16, VAR_18);
   VAR_12 += VAR_20;
   VAR_13 += VAR_21;
  }
  VAR_16 = VAR_19;
 }
 if (VAR_15 != ((void*)0)) {
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_15;
  if (VAR_6 != ((void*)0))
   *VAR_6 = VAR_16;
  if (VAR_7 != ((void*)0))
   *VAR_7 = VAR_12;
  if (VAR_8 != ((void*)0))
   *VAR_8 = VAR_13;
 } else {
  if (VAR_5 != ((void*)0))
   *VAR_5 = ((void*)0);
  if (VAR_6 != ((void*)0))
   *VAR_6 = ((void*)0);
  if (VAR_7 != ((void*)0))
   *VAR_7 = 0;
  if (VAR_8 != ((void*)0))
   *VAR_8 = 0;
 }
 return (0);
}
