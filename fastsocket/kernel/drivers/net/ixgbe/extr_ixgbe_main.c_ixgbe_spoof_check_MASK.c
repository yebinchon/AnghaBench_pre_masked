
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {scalar_t__ num_vfs; TYPE_2__ hw; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_3)
{
 u32 VAR_4;


 if (VAR_3->hw.mac.type == VAR_2 ||
     VAR_3->num_vfs == 0)
  return;

 VAR_4 = FUNC_0(&VAR_3->hw, VAR_0);





 if (!VAR_4)
  return;

 FUNC_1(VAR_1, "%d Spoofed packets detected\n", VAR_4);
}
