
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_device {scalar_t__ queued_cmds; scalar_t__ max_queue; int lock; int name; } ;
struct bsg_command {int list; struct bsg_device* bd; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bsg_command* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,struct bsg_command*) ;
 struct bsg_command* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct bsg_command *FUNC_7(struct bsg_device *VAR_4)
{
 struct bsg_command *VAR_5 = FUNC_0(-VAR_0);

 FUNC_4(&VAR_4->lock);

 if (VAR_4->queued_cmds >= VAR_4->max_queue)
  goto out;

 VAR_4->queued_cmds++;
 FUNC_5(&VAR_4->lock);

 VAR_5 = FUNC_3(VAR_3, VAR_2);
 if (FUNC_6(!VAR_5)) {
  FUNC_4(&VAR_4->lock);
  VAR_4->queued_cmds--;
  VAR_5 = FUNC_0(-VAR_1);
  goto out;
 }

 VAR_5->bd = VAR_4;
 FUNC_1(&VAR_5->list);
 FUNC_2("%s: returning free cmd %p\n", VAR_4->name, VAR_5);
 return VAR_5;
out:
 FUNC_5(&VAR_4->lock);
 return VAR_5;
}
