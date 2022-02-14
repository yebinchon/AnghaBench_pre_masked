
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktcdvd_device {int pkt_dev; TYPE_1__* bdev; } ;
struct pkt_ctrl_command {int num_devices; void* pkt_dev; void* dev; int dev_index; } ;
struct TYPE_2__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;
 struct pktcdvd_device* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pkt_ctrl_command *VAR_3)
{
 struct pktcdvd_device *VAR_4;

 FUNC_0(&VAR_2, VAR_1);

 VAR_4 = FUNC_3(VAR_3->dev_index);
 if (VAR_4) {
  VAR_3->dev = FUNC_2(VAR_4->bdev->bd_dev);
  VAR_3->pkt_dev = FUNC_2(VAR_4->pkt_dev);
 } else {
  VAR_3->dev = 0;
  VAR_3->pkt_dev = 0;
 }
 VAR_3->num_devices = VAR_0;

 FUNC_1(&VAR_2);
}
