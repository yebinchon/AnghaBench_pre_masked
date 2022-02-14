
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int sq_full; } ;
typedef int nvme_completion_fn ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_queue*,void*,int ,unsigned int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct nvme_queue *VAR_1, void *VAR_2,
    nvme_completion_fn VAR_3, unsigned VAR_4)
{
 int VAR_5;
 FUNC_1(VAR_1->sq_full,
  (VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4)) >= 0);
 return (VAR_5 < 0) ? -VAR_0 : VAR_5;
}
