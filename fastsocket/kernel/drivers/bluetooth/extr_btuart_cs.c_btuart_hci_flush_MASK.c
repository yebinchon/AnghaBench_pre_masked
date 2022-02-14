
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_dev {scalar_t__ driver_data; } ;
struct TYPE_2__ {int txq; } ;
typedef TYPE_1__ btuart_info_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct hci_dev *VAR_0)
{
 btuart_info_t *VAR_1 = (btuart_info_t *)(VAR_0->driver_data);


 FUNC_0(&(VAR_1->txq));

 return 0;
}
