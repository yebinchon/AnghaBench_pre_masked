
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_size_t ;
typedef int user_addr_t ;
struct coalition_resource_usage {int dummy; } ;
typedef int kern_return_t ;
typedef int cru ;
typedef int coalition_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct coalition_resource_usage*) ;
 int FUNC_2 (struct coalition_resource_usage*,int ,int ) ;

__attribute__((used)) static int __attribute__ ((noinline))
FUNC_3(coalition_t VAR_3, user_addr_t VAR_4, user_size_t VAR_5)
{
 kern_return_t VAR_6;
 struct coalition_resource_usage VAR_7 = {};

 VAR_6 = FUNC_1(VAR_3, &VAR_7);

 switch (VAR_6) {
 case 130:
  return VAR_0;
 case 129:
  return VAR_2;
 case 128:
  break;
 default:
  return VAR_1;
 }

 return FUNC_2(&VAR_7, VAR_4, FUNC_0(VAR_5, sizeof(VAR_7)));
}
