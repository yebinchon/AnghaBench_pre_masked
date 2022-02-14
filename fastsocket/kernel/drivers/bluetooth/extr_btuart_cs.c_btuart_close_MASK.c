
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hci_dev {int name; } ;
struct TYPE_7__ {int lock; struct hci_dev* hdev; TYPE_2__* p_dev; } ;
typedef TYPE_3__ btuart_info_t ;
struct TYPE_5__ {unsigned int BasePort1; } ;
struct TYPE_6__ {TYPE_1__ io; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(btuart_info_t *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5 = VAR_3->p_dev->io.BasePort1;
 struct hci_dev *VAR_6 = VAR_3->hdev;

 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_6);

 FUNC_5(&(VAR_3->lock), VAR_4);


 FUNC_4(0, VAR_5 + VAR_2);


 FUNC_4(0, VAR_5 + VAR_1);

 FUNC_6(&(VAR_3->lock), VAR_4);

 if (FUNC_3(VAR_6) < 0)
  FUNC_0("Can't unregister HCI device %s", VAR_6->name);

 FUNC_2(VAR_6);

 return 0;
}
