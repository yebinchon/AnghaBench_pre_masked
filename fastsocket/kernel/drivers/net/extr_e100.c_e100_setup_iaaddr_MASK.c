
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nic {TYPE_2__* netdev; } ;
struct TYPE_3__ {int iaaddr; } ;
struct cb {TYPE_1__ u; int command; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct nic *VAR_2, struct cb *VAR_3,
 struct sk_buff *VAR_4)
{
 VAR_3->command = FUNC_0(VAR_1);
 FUNC_1(VAR_3->u.iaaddr, VAR_2->netdev->dev_addr, VAR_0);
}
