
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int dummy; } ;
struct nvme_ns {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvme_queue*,void*,int ,int ) ;
 int FUNC_1 (struct nvme_queue*,struct nvme_ns*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct nvme_queue *VAR_3, struct nvme_ns *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3, (void *)VAR_0,
     VAR_2, VAR_1);
 if (FUNC_2(VAR_5 < 0))
  return VAR_5;

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
