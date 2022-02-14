
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_device {int wq_free; int lock; int queued_cmds; } ;
struct bsg_command {struct bsg_device* bd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bsg_command*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bsg_command *VAR_1)
{
 struct bsg_device *VAR_2 = VAR_1->bd;
 unsigned long VAR_3;

 FUNC_0(VAR_0, VAR_1);

 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_2->queued_cmds--;
 FUNC_2(&VAR_2->lock, VAR_3);

 FUNC_3(&VAR_2->wq_free);
}
