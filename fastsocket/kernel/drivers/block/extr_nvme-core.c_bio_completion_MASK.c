
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nvme_iod {int start_time; scalar_t__ nents; int sg; struct bio* private; } ;
struct nvme_dev {TYPE_1__* pci_dev; } ;
struct nvme_completion {int status; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (int *,int ,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct nvme_dev*,struct nvme_iod*) ;

__attribute__((used)) static void FUNC_6(struct nvme_dev *VAR_3, void *VAR_4,
      struct nvme_completion *VAR_5)
{
 struct nvme_iod *VAR_6 = VAR_4;
 struct bio *VAR_7 = VAR_6->private;
 u16 VAR_8 = FUNC_3(&VAR_5->status) >> 1;

 if (VAR_6->nents) {
  FUNC_2(&VAR_3->pci_dev->dev, VAR_6->sg, VAR_6->nents,
   FUNC_0(VAR_7) ? VAR_1 : VAR_0);
  FUNC_4(VAR_7, VAR_6->start_time);
 }
 FUNC_5(VAR_3, VAR_6);
 if (VAR_8)
  FUNC_1(VAR_7, -VAR_2);
 else
  FUNC_1(VAR_7, 0);
}
