
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {struct bsg_command* end_io_data; } ;
struct bsg_device {int wq_done; int lock; int done_cmds; int done_list; int name; } ;
struct TYPE_2__ {scalar_t__ duration; } ;
struct bsg_command {int list; TYPE_1__ hdr; int bio; struct bsg_device* bd; } ;


 int FUNC_0 (char*,int ,struct request*,struct bsg_command*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct request *VAR_1, int VAR_2)
{
 struct bsg_command *VAR_3 = VAR_1->end_io_data;
 struct bsg_device *VAR_4 = VAR_3->bd;
 unsigned long VAR_5;

 FUNC_0("%s: finished rq %p bc %p, bio %p stat %d\n",
  VAR_4->name, VAR_1, VAR_3, VAR_3->bio, VAR_2);

 VAR_3->hdr.duration = FUNC_1(VAR_0 - VAR_3->hdr.duration);

 FUNC_3(&VAR_4->lock, VAR_5);
 FUNC_2(&VAR_3->list, &VAR_4->done_list);
 VAR_4->done_cmds++;
 FUNC_4(&VAR_4->lock, VAR_5);

 FUNC_5(&VAR_4->wq_done);
}
