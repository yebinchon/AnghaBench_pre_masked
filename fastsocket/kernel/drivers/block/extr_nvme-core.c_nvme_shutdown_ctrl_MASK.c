
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvme_dev {TYPE_1__* pci_dev; TYPE_2__* bar; } ;
struct TYPE_4__ {int csts; int cc; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(struct nvme_dev *VAR_9)
{
 unsigned long VAR_10;
 u32 VAR_11;

 VAR_11 = (FUNC_3(&VAR_9->bar->cc) & ~VAR_3) | VAR_4;
 FUNC_5(VAR_11, &VAR_9->bar->cc);

 VAR_10 = 2 * VAR_2 + VAR_8;
 while ((FUNC_3(&VAR_9->bar->csts) & VAR_6) !=
       VAR_5) {
  FUNC_2(100);
  if (FUNC_1(VAR_7))
   return -VAR_0;
  if (FUNC_4(VAR_8, VAR_10)) {
   FUNC_0(&VAR_9->pci_dev->dev,
    "Device shutdown incomplete; abort shutdown\n");
   return -VAR_1;
  }
 }

 return 0;
}
