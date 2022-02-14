
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifclassq {int ifcq_type; int ifcq_flags; int ifcq_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;




 int FUNC_2 (int ) ;
 int FUNC_3 (struct ifclassq*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct ifclassq*) ;
 int FUNC_6 (struct ifclassq*) ;

int
FUNC_7(struct ifclassq *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(VAR_2);

 FUNC_4(VAR_2->ifcq_ifp, 1);
 FUNC_2(FUNC_0(VAR_2));

 VAR_2->ifcq_flags &= ~VAR_1;

 switch (VAR_2->ifcq_type) {
 case 130:
  break;

 case 128:
  VAR_3 = FUNC_6(VAR_2);
  break;

 case 129:
  VAR_3 = FUNC_5(VAR_2);
  break;

 case 131:
  VAR_3 = FUNC_3(VAR_2);
  break;
 default:
  VAR_3 = VAR_0;
  break;
 }
 return (VAR_3);
}
