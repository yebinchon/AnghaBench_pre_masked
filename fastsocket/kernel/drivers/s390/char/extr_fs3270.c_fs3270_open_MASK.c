
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tty_struct {int index; TYPE_3__* driver; } ;
struct inode {int dummy; } ;
struct TYPE_12__ {int rows; int cols; } ;
struct idal_buffer {TYPE_4__ view; struct idal_buffer* rdbuf; int fs_pid; int wait; } ;
struct fs3270 {TYPE_4__ view; struct fs3270* rdbuf; int fs_pid; int wait; } ;
struct TYPE_10__ {TYPE_1__* dentry; } ;
struct file {struct idal_buffer* private_data; TYPE_2__ f_path; } ;
struct TYPE_11__ {scalar_t__ major; } ;
struct TYPE_9__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct idal_buffer*) ;
 int FUNC_1 (struct idal_buffer*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct idal_buffer* FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*) ;
 struct tty_struct* FUNC_4 () ;
 int FUNC_5 (int ) ;
 struct idal_buffer* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int *,int) ;
 int FUNC_13 (TYPE_4__*) ;
 scalar_t__ FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct tty_struct*) ;
 int FUNC_18 () ;

__attribute__((used)) static int
FUNC_19(struct inode *VAR_7, struct file *VAR_8)
{
 struct fs3270 *VAR_9;
 struct idal_buffer *VAR_10;
 int VAR_11, VAR_12 = 0;

 if (FUNC_7(VAR_8->f_path.dentry->d_inode) != VAR_2)
  return -VAR_1;
 VAR_11 = FUNC_8(VAR_8->f_path.dentry->d_inode);

 if (VAR_11 == 0) {
  struct tty_struct *VAR_13 = FUNC_4();
  if (!VAR_13 || VAR_13->driver->major != VAR_3) {
   FUNC_17(VAR_13);
   return -VAR_1;
  }
  VAR_11 = VAR_13->index + VAR_4;
  FUNC_17(VAR_13);
 }
 FUNC_10();

 VAR_9 = (struct fs3270 *) FUNC_14(&VAR_6, VAR_11);
 if (!FUNC_0(VAR_9)) {
  FUNC_15(&VAR_9->view);
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_2();
 if (FUNC_0(VAR_9)) {
  VAR_12 = FUNC_1(VAR_9);
  goto out;
 }

 FUNC_9(&VAR_9->wait);
 VAR_9->fs_pid = FUNC_5(FUNC_16(VAR_5));
 VAR_12 = FUNC_12(&VAR_9->view, &VAR_6, VAR_11);
 if (VAR_12) {
  FUNC_3(&VAR_9->view);
  goto out;
 }


 VAR_10 = FUNC_6(2*VAR_9->view.rows*VAR_9->view.cols + 5, 0);
 if (FUNC_0(VAR_10)) {
  FUNC_15(&VAR_9->view);
  FUNC_13(&VAR_9->view);
  VAR_12 = FUNC_1(VAR_9);
  goto out;
 }
 VAR_9->rdbuf = VAR_10;

 VAR_12 = FUNC_11(&VAR_9->view);
 if (VAR_12) {
  FUNC_15(&VAR_9->view);
  FUNC_13(&VAR_9->view);
  goto out;
 }
 VAR_8->private_data = VAR_9;
out:
 FUNC_18();
 return VAR_12;
}
