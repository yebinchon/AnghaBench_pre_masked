
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_eflags; int if_output_sched_model; } ;
struct ifclassq {int ifcq_sflags; struct ifnet* ifcq_ifp; } ;
typedef int classq_pkt_type_t ;


 int FUNC_0 (struct ifclassq*) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct ifclassq*,int ,int ,int ) ;

int
FUNC_3(struct ifclassq *VAR_6)
{
 struct ifnet *VAR_7 = VAR_6->ifcq_ifp;
 classq_pkt_type_t VAR_8 = VAR_4;
 int VAR_9 = 0;

 FUNC_0(VAR_6);
 FUNC_1(VAR_7->if_eflags & VAR_0);

 switch (VAR_7->if_output_sched_model) {
 case 130:
  if (VAR_5 != 0) {
   VAR_9 = FUNC_2(VAR_6, VAR_1,
       VAR_6->ifcq_sflags, VAR_8);
  } else {
   VAR_9 = FUNC_2(VAR_6, VAR_3,
       VAR_6->ifcq_sflags, VAR_8);
  }
  break;

 case 128:
  if (VAR_5 != 0) {
   VAR_9 = FUNC_2(VAR_6, VAR_1,
       VAR_6->ifcq_sflags, VAR_8);
  } else {
   VAR_9 = FUNC_2(VAR_6, VAR_2,
       VAR_6->ifcq_sflags, VAR_8);
  }
  break;
 case 129:
  VAR_9 = FUNC_2(VAR_6, VAR_1,
      VAR_6->ifcq_sflags, VAR_8);
  break;
 default:
  FUNC_1(0);

 }

 return (VAR_9);
}
