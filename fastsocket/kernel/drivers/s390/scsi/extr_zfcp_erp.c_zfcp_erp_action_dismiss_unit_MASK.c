
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_unit {int erp_action; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct zfcp_unit *VAR_1)
{
 if (FUNC_0(&VAR_1->status) & VAR_0)
  FUNC_1(&VAR_1->erp_action);
}
