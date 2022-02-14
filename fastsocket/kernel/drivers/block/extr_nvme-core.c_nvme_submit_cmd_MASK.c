
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct nvme_queue {size_t sq_tail; size_t q_depth; int q_lock; int q_db; int * sq_cmds; } ;
struct nvme_command {int dummy; } ;


 int FUNC_0 (int *,struct nvme_command*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct nvme_queue *VAR_0, struct nvme_command *VAR_1)
{
 unsigned long VAR_2;
 u16 VAR_3;
 FUNC_1(&VAR_0->q_lock, VAR_2);
 VAR_3 = VAR_0->sq_tail;
 FUNC_0(&VAR_0->sq_cmds[VAR_3], VAR_1, sizeof(*VAR_1));
 if (++VAR_3 == VAR_0->q_depth)
  VAR_3 = 0;
 FUNC_3(VAR_3, VAR_0->q_db);
 VAR_0->sq_tail = VAR_3;
 FUNC_2(&VAR_0->q_lock, VAR_2);

 return 0;
}
