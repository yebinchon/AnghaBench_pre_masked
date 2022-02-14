
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {TYPE_1__* host; } ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipr_ioa_cfg*,int ,int ) ;
 int VAR_1 ;
 struct ipr_ioa_cfg* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 unsigned long VAR_3 = 0;
 struct ipr_ioa_cfg *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(VAR_4->host->host_lock, VAR_3);
 FUNC_0(VAR_4, VAR_1, VAR_0);
 FUNC_3(VAR_4->host->host_lock, VAR_3);
}
