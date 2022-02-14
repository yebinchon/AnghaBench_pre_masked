
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct zfcp_erp_action*) ;
 scalar_t__ FUNC_3 (struct zfcp_erp_action*) ;
 scalar_t__ FUNC_4 (struct zfcp_erp_action*) ;

__attribute__((used)) static int FUNC_5(struct zfcp_erp_action *VAR_5)
{
 struct zfcp_adapter *VAR_6 = VAR_5->adapter;

 if (FUNC_4(VAR_5)) {
  FUNC_0(VAR_3 |
      VAR_2,
      &VAR_6->status);
  return VAR_0;
 }

 if (FUNC_3(VAR_5)) {
  FUNC_2(VAR_5);
  return VAR_0;
 }

 FUNC_1(VAR_4, &VAR_6->status);

 return VAR_1;
}
