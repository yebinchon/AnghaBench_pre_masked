
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int q_lock; } ;


 int FUNC_0 (struct nvme_queue*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nvme_queue *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->q_lock);
 FUNC_0(VAR_0, VAR_1, ((void*)0));
 FUNC_2(&VAR_0->q_lock);
}
