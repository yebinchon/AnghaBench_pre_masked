
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvme_dev {TYPE_1__* bar; } ;
struct TYPE_2__ {int cc; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_dev*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct nvme_dev *VAR_1, u64 VAR_2)
{
 u32 VAR_3 = FUNC_1(&VAR_1->bar->cc);

 if (VAR_3 & VAR_0)
  FUNC_2(VAR_3 & ~VAR_0, &VAR_1->bar->cc);
 return FUNC_0(VAR_1, VAR_2, 0);
}
