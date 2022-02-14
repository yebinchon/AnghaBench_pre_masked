
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {TYPE_2__* f_op; } ;
struct autofs_sb_info {int pipefd; int wq_mutex; scalar_t__ catatonic; struct file* pipe; int oz_pgrp; } ;
struct TYPE_3__ {int pipefd; } ;
struct autofs_dev_ioctl {TYPE_1__ setpipefd; } ;
struct TYPE_4__ {int write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct file* FUNC_0 (int) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4,
          struct autofs_sb_info *VAR_5,
          struct autofs_dev_ioctl *VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;

 if (VAR_6->setpipefd.pipefd == -1)
  return -VAR_1;

 VAR_7 = VAR_6->setpipefd.pipefd;

 FUNC_2(&VAR_5->wq_mutex);
 if (!VAR_5->catatonic) {
  FUNC_3(&VAR_5->wq_mutex);
  return -VAR_0;
 } else {
  struct file *VAR_9 = FUNC_0(VAR_7);
  if (!VAR_9->f_op || !VAR_9->f_op->write) {
   VAR_8 = -VAR_2;
   FUNC_1(VAR_9);
   goto out;
  }
  VAR_5->oz_pgrp = FUNC_4(VAR_3);
  VAR_5->pipefd = VAR_7;
  VAR_5->pipe = VAR_9;
  VAR_5->catatonic = 0;
 }
out:
 FUNC_3(&VAR_5->wq_mutex);
 return VAR_8;
}
