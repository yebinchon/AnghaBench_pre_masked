
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_queue {size_t cq_vector; } ;
struct nvme_dev {TYPE_1__* entry; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char const*,struct nvme_queue*) ;
 int FUNC_1 (int ,int ,int ,int,char const*,struct nvme_queue*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(struct nvme_dev *VAR_5, struct nvme_queue *VAR_6,
       const char *VAR_7)
{
 if (VAR_4)
  return FUNC_1(VAR_5->entry[VAR_6->cq_vector].vector,
     VAR_3, VAR_2,
     VAR_0 | VAR_1,
     VAR_7, VAR_6);
 return FUNC_0(VAR_5->entry[VAR_6->cq_vector].vector, VAR_2,
    VAR_0 | VAR_1, VAR_7, VAR_6);
}
