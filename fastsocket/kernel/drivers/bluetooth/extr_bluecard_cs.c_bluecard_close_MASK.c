
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hci_dev {int name; } ;
struct TYPE_7__ {int ctrl_reg; int hw_state; struct hci_dev* hdev; TYPE_2__* p_dev; } ;
typedef TYPE_3__ bluecard_info_t ;
struct TYPE_5__ {unsigned int BasePort1; } ;
struct TYPE_6__ {TYPE_1__ io; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int,unsigned int) ;

__attribute__((used)) static int FUNC_6(bluecard_info_t *VAR_5)
{
 unsigned int VAR_6 = VAR_5->p_dev->io.BasePort1;
 struct hci_dev *VAR_7 = VAR_5->hdev;

 if (!VAR_7)
  return -VAR_1;

 FUNC_1(VAR_7);

 FUNC_2(VAR_0, &(VAR_5->hw_state));


 VAR_5->ctrl_reg = VAR_3 | VAR_4;
 FUNC_5(VAR_5->ctrl_reg, VAR_6 + VAR_2);


 FUNC_5(0x80, VAR_6 + 0x30);

 if (FUNC_4(VAR_7) < 0)
  FUNC_0("Can't unregister HCI device %s", VAR_7->name);

 FUNC_3(VAR_7);

 return 0;
}
