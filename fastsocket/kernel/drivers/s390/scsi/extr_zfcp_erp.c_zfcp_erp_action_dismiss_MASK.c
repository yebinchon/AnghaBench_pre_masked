
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {int status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zfcp_erp_action*) ;
 int FUNC_1 (struct zfcp_erp_action*) ;

__attribute__((used)) static void FUNC_2(struct zfcp_erp_action *VAR_2)
{
 VAR_2->status |= VAR_1;
 if (FUNC_0(VAR_2) == VAR_0)
  FUNC_1(VAR_2);
}
