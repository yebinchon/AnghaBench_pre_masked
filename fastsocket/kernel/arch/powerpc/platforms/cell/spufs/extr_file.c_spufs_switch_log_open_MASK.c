
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switch_log_entry {int dummy; } ;
struct switch_log {int dummy; } ;
struct spu_context {TYPE_1__* switch_log; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct spu_context* i_ctx; } ;
struct TYPE_3__ {int wait; scalar_t__ tail; scalar_t__ head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (struct spu_context*) ;
 int FUNC_4 (struct spu_context*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 struct spu_context *VAR_6 = FUNC_0(VAR_4)->i_ctx;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->switch_log) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_6->switch_log = FUNC_2(sizeof(struct switch_log) +
  VAR_3 * sizeof(struct switch_log_entry),
  VAR_2);

 if (!VAR_6->switch_log) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_6->switch_log->head = VAR_6->switch_log->tail = 0;
 FUNC_1(&VAR_6->switch_log->wait);
 VAR_7 = 0;

out:
 FUNC_4(VAR_6);
 return VAR_7;
}
