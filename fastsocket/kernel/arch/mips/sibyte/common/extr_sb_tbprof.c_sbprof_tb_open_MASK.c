
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sbprof_tb {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ open; int lock; int tb_read; int tb_sync; struct TYPE_4__* sbprof_tbbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_7 ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_8, struct file *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 != 0)
  return -VAR_1;

 if (FUNC_6(&VAR_7.open, VAR_6) != VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_7, 0, sizeof(struct sbprof_tb));
 VAR_7.sbprof_tbbuf = FUNC_4(VAR_3);
 if (!VAR_7.sbprof_tbbuf) {
  VAR_7.open = VAR_4;
  FUNC_5();
  return -VAR_2;
 }

 FUNC_2(VAR_7.sbprof_tbbuf, 0, VAR_3);
 FUNC_1(&VAR_7.tb_sync);
 FUNC_1(&VAR_7.tb_read);
 FUNC_3(&VAR_7.lock);

 VAR_7.open = VAR_5;
 FUNC_5();

 return 0;
}
