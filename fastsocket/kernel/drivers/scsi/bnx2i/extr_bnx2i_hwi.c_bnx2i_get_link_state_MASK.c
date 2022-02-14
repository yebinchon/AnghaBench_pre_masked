
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2i_hba {int adapter_state; TYPE_1__* netdev; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct bnx2i_hba *VAR_2)
{
 if (FUNC_2(VAR_1, &VAR_2->netdev->state))
  FUNC_1(VAR_0, &VAR_2->adapter_state);
 else
  FUNC_0(VAR_0, &VAR_2->adapter_state);
}
