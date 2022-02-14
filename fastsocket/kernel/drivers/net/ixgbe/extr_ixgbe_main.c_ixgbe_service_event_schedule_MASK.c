
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int service_task; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_2)
{
 if (!FUNC_2(VAR_0, &VAR_2->state) &&
     !FUNC_1(VAR_1, &VAR_2->state))
  FUNC_0(&VAR_2->service_task);
}
