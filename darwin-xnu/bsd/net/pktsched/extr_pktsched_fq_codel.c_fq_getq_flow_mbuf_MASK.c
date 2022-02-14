
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_16__ {scalar_t__ pkt_flags; } ;
struct mbuf {struct mbuf* m_nextpkt; TYPE_1__ m_pkthdr; } ;
struct ifnet {int dummy; } ;
struct ifclassq {struct ifnet* ifcq_ifp; } ;
struct TYPE_18__ {scalar_t__ pktsched_ptype; } ;
typedef TYPE_3__ pktsched_pkt_t ;
typedef TYPE_4__* mbuf_t ;
struct TYPE_20__ {scalar_t__ fq_deficit; int fq_mbufq; } ;
typedef TYPE_5__ fq_t ;
struct TYPE_21__ {struct ifclassq* fqs_ifq; } ;
typedef TYPE_6__ fq_if_t ;
struct TYPE_17__ {int fcl_dequeue_bytes; int fcl_dequeue; } ;
struct TYPE_22__ {TYPE_2__ fcl_stat; } ;
typedef TYPE_7__ fq_if_classq_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_19__ {int * m_nextpkt; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 struct mbuf* FUNC_3 (TYPE_6__*,TYPE_5__*,TYPE_3__*) ;
 int FUNC_4 (struct ifclassq*,struct ifnet*,struct mbuf*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static boolean_t
FUNC_6(fq_if_t *VAR_3, fq_if_classq_t *VAR_4, fq_t *VAR_5,
    u_int32_t VAR_6, u_int32_t VAR_7, void **VAR_8, void **VAR_9,
    u_int32_t *VAR_10, u_int32_t *VAR_11, boolean_t *VAR_12,
    u_int32_t VAR_13)
{
 struct mbuf *VAR_14;
 u_int32_t VAR_15;
 pktsched_pkt_t VAR_16;
 boolean_t VAR_17 = VAR_0;
 struct ifclassq *VAR_18 = VAR_3->fqs_ifq;
 struct ifnet *VAR_19 = VAR_18->ifcq_ifp;

 while (VAR_5->fq_deficit > 0 && VAR_17 == VAR_0 &&
     !FUNC_1(&VAR_5->fq_mbufq)) {

  FUNC_2(&VAR_16);
  VAR_14 = FUNC_3(VAR_3, VAR_5, &VAR_16);
  FUNC_0(VAR_16.pktsched_ptype == VAR_1);

  VAR_15 = FUNC_5(&VAR_16);
  VAR_5->fq_deficit -= VAR_15;
  VAR_14->m_pkthdr.pkt_flags |= VAR_13;

  if (*VAR_8 == ((void*)0)) {
   *VAR_8 = VAR_14;
  } else {
   FUNC_0(*VAR_9 != ((void*)0));
   FUNC_0((*(struct mbuf **)VAR_9)->m_nextpkt == ((void*)0));
   (*(struct mbuf **)VAR_9)->m_nextpkt = VAR_14;
  }
  *VAR_9 = VAR_14;
  (*(mbuf_t *)VAR_9)->m_nextpkt = ((void*)0);
  VAR_4->fcl_stat.fcl_dequeue++;
  VAR_4->fcl_stat.fcl_dequeue_bytes += VAR_15;
  *VAR_11 += 1;
  *VAR_10 += VAR_15;

  FUNC_4(VAR_18, VAR_19, VAR_14, VAR_1);


  if (*VAR_11 >= VAR_7 || *VAR_10 >= VAR_6)
   VAR_17 = VAR_2;
 }

 *VAR_12 = FUNC_1(&VAR_5->fq_mbufq);
 return (VAR_17);
}
