
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct ifnet {int dummy; } ;
struct ifclassq {int (* ifcq_dequeue_sc_multi ) (struct ifclassq*,int ,scalar_t__,scalar_t__,void**,void**,scalar_t__*,scalar_t__*,int*) ;int (* ifcq_dequeue_multi ) (struct ifclassq*,scalar_t__,scalar_t__,void**,void**,scalar_t__*,scalar_t__*,int*) ;struct ifnet* ifcq_ifp; } ;
typedef TYPE_2__* mbuf_t ;
typedef int mbuf_svc_class_t ;
typedef int errno_t ;
typedef int classq_pkt_type_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int len; } ;
struct TYPE_4__ {int * m_nextpkt; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifclassq*,void*,int*) ;
 int FUNC_1 (struct ifclassq*,int ,void*,int*) ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct ifclassq*) ;
 int FUNC_4 (struct ifclassq*,void*,int*) ;
 int FUNC_5 (struct ifclassq*,int ,void*,int*) ;
 scalar_t__ FUNC_6 (struct ifclassq*) ;
 int FUNC_7 (struct ifclassq*) ;
 scalar_t__ FUNC_8 (int ) ;

 int FUNC_9 (int) ;
 int FUNC_10 (struct ifclassq*,struct ifnet*,void*,int const) ;
 int FUNC_11 (struct ifclassq*,int ,scalar_t__,scalar_t__,void**,void**,scalar_t__*,scalar_t__*,int*) ;
 int FUNC_12 (struct ifclassq*,scalar_t__,scalar_t__,void**,void**,scalar_t__*,scalar_t__*,int*) ;

__attribute__((used)) static errno_t
FUNC_13(struct ifclassq *VAR_1, mbuf_svc_class_t VAR_2,
    u_int32_t VAR_3, u_int32_t VAR_4, void **VAR_5,
    void **VAR_6, u_int32_t *VAR_7, u_int32_t *VAR_8, boolean_t VAR_9,
    classq_pkt_type_t *VAR_10)
{
 struct ifnet *VAR_11 = VAR_1->ifcq_ifp;
 u_int32_t VAR_12 = 0, VAR_13 = 0, VAR_14 = 1 ;
 void **VAR_15, *VAR_16;

 FUNC_9(!VAR_9 || FUNC_8(VAR_2));

 *VAR_10 = 0;


 if (FUNC_6(VAR_1))
  goto dequeue_loop;





 if (VAR_9 && VAR_1->ifcq_dequeue_sc_multi != ((void*)0)) {
  int VAR_17;

  if (VAR_14)
   FUNC_3(VAR_1);
  else
   FUNC_2(VAR_1);
  VAR_17 = VAR_1->ifcq_dequeue_sc_multi(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
  FUNC_7(VAR_1);

  if (VAR_17 == 0 && (*VAR_5) == ((void*)0))
   VAR_17 = VAR_0;
  return (VAR_17);
 } else if (VAR_1->ifcq_dequeue_multi != ((void*)0)) {
  int VAR_18;

  if (VAR_14)
   FUNC_3(VAR_1);
  else
   FUNC_2(VAR_1);

  VAR_18 = VAR_1->ifcq_dequeue_multi(VAR_1, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
  FUNC_7(VAR_1);

  if (VAR_18 == 0 && (*VAR_5) == ((void*)0))
   VAR_18 = VAR_0;
  return (VAR_18);
 }

dequeue_loop:
 *VAR_5 = ((void*)0);
 VAR_15 = &(*VAR_5);
 VAR_16 = ((void*)0);

 if (VAR_14)
  FUNC_3(VAR_1);
 else
  FUNC_2(VAR_1);

 while (VAR_12 < VAR_3 && VAR_13 < VAR_4) {
  classq_pkt_type_t VAR_19;
  if (VAR_9) {
   if (FUNC_6(VAR_1))
    FUNC_5(VAR_1, VAR_2, *VAR_5, &VAR_19);
   else
    FUNC_1(VAR_1, VAR_2, *VAR_5, &VAR_19);
  } else {
   if (FUNC_6(VAR_1))
    FUNC_4(VAR_1, *VAR_5, &VAR_19);
   else
    FUNC_0(VAR_1, *VAR_5, &VAR_19);
  }

  if (*VAR_5 == ((void*)0))
   break;

  switch (VAR_19) {
  case 128:
   (*((mbuf_t *)VAR_5))->m_nextpkt = ((void*)0);
   VAR_16 = *VAR_5;
   VAR_13 += (*((mbuf_t *)VAR_5))->m_pkthdr.len;
   FUNC_10(VAR_1, VAR_11, (*VAR_5),
       128);
   VAR_5 = (void **)&(*((mbuf_t *)VAR_5))->m_nextpkt;
   break;


  default:
   FUNC_9(0);

  }

  *VAR_10 = VAR_19;
  VAR_12++;
 }

 FUNC_7(VAR_1);

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_16;
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_12;
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_13;

 return ((*VAR_15 != ((void*)0)) ? 0 : VAR_0);
}
