
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {int action; } ;






 int VAR_0 ;
 int FUNC_0 (struct zfcp_erp_action*) ;
 int FUNC_1 (struct zfcp_erp_action*) ;
 int FUNC_2 (struct zfcp_erp_action*) ;
 int FUNC_3 (struct zfcp_erp_action*) ;

__attribute__((used)) static int FUNC_4(struct zfcp_erp_action *VAR_1)
{
 switch (VAR_1->action) {
 case 131:
  return FUNC_0(VAR_1);
 case 129:
  return FUNC_1(VAR_1);
 case 130:
  return FUNC_2(VAR_1);
 case 128:
  return FUNC_3(VAR_1);
 }
 return VAR_0;
}
