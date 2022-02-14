
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct tcq_if {struct ifclassq* tif_ifq; } ;
struct ifclassq {TYPE_1__* ifcq_disc_slots; } ;
struct TYPE_5__ {scalar_t__ sc; size_t packets; size_t bytes; int flow; } ;
typedef TYPE_2__ cqrq_purge_sc_t ;
struct TYPE_4__ {int cl; } ;


 int FUNC_0 (struct ifclassq*) ;
 size_t VAR_0 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct tcq_if*,int ,int ,size_t*,size_t*) ;

__attribute__((used)) static void
FUNC_5(struct tcq_if *VAR_2, cqrq_purge_sc_t *VAR_3)
{
 struct ifclassq *VAR_4 = VAR_2->tif_ifq;
 u_int32_t VAR_5;

 FUNC_0(VAR_4);

 FUNC_3(VAR_3->sc == VAR_1 || FUNC_2(VAR_3->sc));
 FUNC_3(VAR_3->flow != 0);

 if (VAR_3->sc != VAR_1) {
  VAR_5 = FUNC_1(VAR_3->sc);
  FUNC_3(VAR_5 < VAR_0);

  FUNC_4(VAR_2, VAR_4->ifcq_disc_slots[VAR_5].cl,
      VAR_3->flow, &VAR_3->packets, &VAR_3->bytes);
 } else {
  u_int32_t VAR_6, VAR_7;

  VAR_3->packets = 0;
  VAR_3->bytes = 0;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   FUNC_4(VAR_2, VAR_4->ifcq_disc_slots[VAR_5].cl,
       VAR_3->flow, &VAR_6, &VAR_7);
   VAR_3->packets += VAR_6;
   VAR_3->bytes += VAR_7;
  }
 }
}
