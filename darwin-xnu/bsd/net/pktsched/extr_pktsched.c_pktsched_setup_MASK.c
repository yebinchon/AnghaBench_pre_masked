
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifclassq {int ifcq_type; int ifcq_flags; int * ifcq_request; int * ifcq_dequeue_sc; int * ifcq_dequeue; int * ifcq_enqueue; int * ifcq_disc; } ;
typedef int classq_pkt_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifclassq*) ;

 scalar_t__ VAR_2 ;


 int FUNC_1 (int) ;
 int FUNC_2 (struct ifclassq*,int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct ifclassq*) ;
 int FUNC_4 (struct ifclassq*,int,int ) ;
 int FUNC_5 (struct ifclassq*,int,int ) ;

int
FUNC_6(struct ifclassq *VAR_4, u_int32_t VAR_5, u_int32_t VAR_6,
    classq_pkt_type_t VAR_7)
{
 int VAR_8 = 0;
 u_int32_t VAR_9;

 FUNC_0(VAR_4);

 FUNC_1(VAR_3 != 0);


 if (VAR_4->ifcq_type == VAR_5)
  return (0);





 VAR_9 = (VAR_4->ifcq_flags & VAR_1);

 if (VAR_4->ifcq_type != VAR_2) {
  (void) FUNC_3(VAR_4);


  FUNC_1(VAR_4->ifcq_type == VAR_2);
  FUNC_1(VAR_4->ifcq_disc == ((void*)0));
  FUNC_1(VAR_4->ifcq_enqueue == ((void*)0));
  FUNC_1(VAR_4->ifcq_dequeue == ((void*)0));
  FUNC_1(VAR_4->ifcq_dequeue_sc == ((void*)0));
  FUNC_1(VAR_4->ifcq_request == ((void*)0));
 }

 switch (VAR_5) {
 case 128:
  VAR_8 = FUNC_5(VAR_4, VAR_6, VAR_7);
  break;

 case 129:
  VAR_8 = FUNC_4(VAR_4, VAR_6, VAR_7);
  break;
 case 130:
  VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_7);
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }

 if (VAR_8 == 0)
  VAR_4->ifcq_flags |= VAR_9;

 return (VAR_8);
}
