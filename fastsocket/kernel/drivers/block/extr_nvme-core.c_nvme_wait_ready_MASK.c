
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvme_dev {TYPE_1__* pci_dev; TYPE_2__* bar; } ;
struct TYPE_4__ {int csts; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct nvme_dev *VAR_6, u64 VAR_7, bool VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10 = VAR_8 ? VAR_3 : 0;

 VAR_9 = ((FUNC_0(VAR_7) + 1) * VAR_2 / 2) + VAR_5;

 while ((FUNC_4(&VAR_6->bar->csts) & VAR_3) != VAR_10) {
  FUNC_3(100);
  if (FUNC_2(VAR_4))
   return -VAR_0;
  if (FUNC_5(VAR_5, VAR_9)) {
   FUNC_1(&VAR_6->pci_dev->dev,
    "Device not ready; aborting initialisation\n");
   return -VAR_1;
  }
 }

 return 0;
}
