
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct tcq_if {struct ifclassq* tif_ifq; } ;
struct tcq_class {int cl_xmitcnt; int cl_period; int cl_q; } ;
struct ifclassq {int dummy; } ;
struct TYPE_5__ {int * pktsched_pkt; } ;
typedef TYPE_1__ pktsched_pkt_t ;
typedef int mbuf_svc_class_t ;


 int FUNC_0 (struct ifclassq*,int ) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct ifclassq*) ;
 int FUNC_4 (struct ifclassq*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *) ;
 struct tcq_class* FUNC_10 (struct tcq_if*,int ) ;
 int FUNC_11 (struct tcq_class*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_12(struct tcq_if *VAR_0, struct tcq_class *VAR_1, mbuf_svc_class_t VAR_2,
    pktsched_pkt_t *VAR_3)
{
 struct ifclassq *VAR_4 = VAR_0->tif_ifq;
 uint32_t VAR_5;

 FUNC_3(VAR_4);

 if (VAR_1 == ((void*)0)) {
  VAR_1 = FUNC_10(VAR_0, FUNC_5(VAR_2));
  if (VAR_1 == ((void*)0)) {
   VAR_3->pktsched_pkt = ((void*)0);
   return;
  }
 }

 if (FUNC_9(&VAR_1->cl_q)) {
  VAR_3->pktsched_pkt = ((void*)0);
  return;
 }

 FUNC_7(!FUNC_2(VAR_4));

 FUNC_11(VAR_1, VAR_3);
 if (VAR_3->pktsched_pkt != ((void*)0)) {
  VAR_5 = FUNC_8(VAR_3);
  FUNC_1(VAR_4);
  FUNC_0(VAR_4, VAR_5);
  if (FUNC_9(&VAR_1->cl_q))
   VAR_1->cl_period++;
  FUNC_6(&VAR_1->cl_xmitcnt, 1, VAR_5);
  FUNC_4(VAR_4, 1, VAR_5);
 }
}
