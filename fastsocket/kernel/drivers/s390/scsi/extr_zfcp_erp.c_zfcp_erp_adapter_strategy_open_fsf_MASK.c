
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_erp_action {TYPE_1__* adapter; } ;
struct TYPE_2__ {int stat_miss; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct zfcp_erp_action*) ;
 scalar_t__ FUNC_2 (struct zfcp_erp_action*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct zfcp_erp_action *VAR_2)
{
 if (FUNC_1(VAR_2) == VAR_0)
  return VAR_0;

 if (FUNC_2(VAR_2) == VAR_0)
  return VAR_0;

 FUNC_0(&VAR_2->adapter->stat_miss, 16);
 if (FUNC_3(VAR_2->adapter))
  return VAR_0;

 return VAR_1;
}
