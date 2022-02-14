
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hci_dev {int flags; scalar_t__ driver_data; } ;
struct TYPE_6__ {int hw_state; TYPE_2__* p_dev; } ;
typedef TYPE_3__ bluecard_info_t ;
struct TYPE_4__ {unsigned int BasePort1; } ;
struct TYPE_5__ {TYPE_1__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (int,unsigned int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_3)
{
 bluecard_info_t *VAR_4 = (bluecard_info_t *)(VAR_3->driver_data);
 unsigned int VAR_5 = VAR_4->p_dev->io.BasePort1;

 if (FUNC_3(VAR_0, &(VAR_4->hw_state)))
  FUNC_0(VAR_3, VAR_1);

 if (FUNC_2(VAR_2, &(VAR_3->flags)))
  return 0;

 if (FUNC_3(VAR_0, &(VAR_4->hw_state))) {

  FUNC_1(0x08 | 0x20, VAR_5 + 0x30);
 }

 return 0;
}
