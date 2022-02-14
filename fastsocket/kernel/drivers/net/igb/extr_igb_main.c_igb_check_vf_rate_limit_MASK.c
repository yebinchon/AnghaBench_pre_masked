
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_1__ mac; } ;
struct igb_adapter {int vf_rate_link_speed; int vfs_allocated_count; TYPE_3__* vf_data; TYPE_4__ hw; TYPE_2__* pdev; int link_speed; } ;
struct TYPE_7__ {scalar_t__ tx_rate; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct igb_adapter *VAR_1)
{
 int VAR_2, VAR_3;
 bool VAR_4 = 0;


 if ((VAR_1->vf_rate_link_speed == 0) ||
     (VAR_1->hw.mac.type != VAR_0))
  return;

 VAR_2 = FUNC_1(VAR_1->link_speed);
 if (VAR_2 != VAR_1->vf_rate_link_speed) {
  VAR_4 = 1;
  VAR_1->vf_rate_link_speed = 0;
  FUNC_0(&VAR_1->pdev->dev,
    "Link speed has been changed. VF Transmit rate is disabled\n");
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->vfs_allocated_count; VAR_3++) {
  if (VAR_4)
   VAR_1->vf_data[VAR_3].tx_rate = 0;

  FUNC_2(&VAR_1->hw, VAR_3,
          VAR_1->vf_data[VAR_3].tx_rate,
          VAR_2);
 }
}
