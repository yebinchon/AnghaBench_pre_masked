
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct pf_mtag {int dummy; } ;
struct mbuf {int m_flags; } ;
struct ifclassq {TYPE_1__* ifcq_disc_slots; int ifcq_disc; int ifcq_ifp; } ;
typedef int pktsched_pkt_t ;
typedef int classq_pkt_type_t ;
typedef int boolean_t ;
struct TYPE_2__ {int cl; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct mbuf*) ;
 struct pf_mtag* FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,void*) ;
 int FUNC_11 (int ,int ,int *,struct pf_mtag*) ;

__attribute__((used)) static int
FUNC_12(struct ifclassq *VAR_9, void *VAR_10, classq_pkt_type_t VAR_11,
    boolean_t *VAR_12)
{
 u_int32_t VAR_13 = 0;
 int VAR_14;
 pktsched_pkt_t VAR_15;
 struct pf_mtag *VAR_16 = ((void*)0);

 FUNC_1(VAR_9);

 if (VAR_11 == VAR_7) {
  struct mbuf *VAR_17 = VAR_10;
  if (!(VAR_17->m_flags & VAR_6)) {

   FUNC_5(VAR_5, "%s: packet does not have pkthdr\n",
       FUNC_4(VAR_9->ifcq_ifp));
   FUNC_0(VAR_9);
   FUNC_6(VAR_17);
   *VAR_12 = VAR_8;
   return (VAR_0);
  }
  VAR_16 = FUNC_7(VAR_17);
  VAR_13 = FUNC_2(FUNC_8(VAR_17));
 }
 FUNC_3((u_int32_t)VAR_13 < VAR_4);

 FUNC_10(&VAR_15, VAR_11, VAR_10);

 VAR_14 = FUNC_11(VAR_9->ifcq_disc,
     VAR_9->ifcq_disc_slots[VAR_13].cl, &VAR_15, VAR_16);

 if ((VAR_14 != 0) && (VAR_14 != 128)) {
  FUNC_9(&VAR_15);
  *VAR_12 = VAR_8;
 } else {
  *VAR_12 = VAR_3;
 }

 switch (VAR_14) {
 case 132:
  VAR_14 = VAR_0;
  break;
 case 131:
  VAR_14 = VAR_1;
  break;
 case 130:
  VAR_14 = VAR_2;
  break;
 case 128:
  VAR_14 = VAR_1;
  break;
 case 129:
  VAR_14 = 0;
  break;
 default:
  FUNC_3(0);
 }
 return (VAR_14);
}
