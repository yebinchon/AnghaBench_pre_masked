
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifclassq {int ifcq_type; } ;
struct if_ifclassq_stats {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifclassq*) ;



 int FUNC_1 (struct ifclassq*,int ,struct if_ifclassq_stats*) ;
 int FUNC_2 (struct ifclassq*,int ,struct if_ifclassq_stats*) ;
 int FUNC_3 (struct ifclassq*,int ,struct if_ifclassq_stats*) ;

int
FUNC_4(struct ifclassq *VAR_1, u_int32_t VAR_2,
    struct if_ifclassq_stats *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1);

 switch (VAR_1->ifcq_type) {
 case 128:
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  break;

 case 129:
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  break;

 case 130:
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 default:
  VAR_4 = VAR_0;
  break;
 }

 return (VAR_4);
}
