
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct path {TYPE_2__* dentry; } ;
struct inode {int dummy; } ;
struct fuse_io_priv {int err; scalar_t__ bytes; int reqs; long size; TYPE_3__* iocb; scalar_t__ write; int lock; } ;
struct fuse_inode {scalar_t__ attr_version; } ;
struct fuse_conn {int lock; scalar_t__ attr_version; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_7__ {TYPE_1__* ki_filp; } ;
struct TYPE_6__ {struct inode* d_inode; } ;
struct TYPE_5__ {struct path f_path; } ;


 long VAR_0 ;
 int FUNC_0 (TYPE_3__*,long,int ) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct fuse_io_priv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct fuse_io_priv *VAR_1, int VAR_2, ssize_t VAR_3)
{
 int VAR_4;

 FUNC_5(&VAR_1->lock);
 if (VAR_2)
  VAR_1->err = VAR_1->err ? : VAR_2;
 else if (VAR_3 >= 0 && (VAR_1->bytes < 0 || VAR_3 < VAR_1->bytes))
  VAR_1->bytes = VAR_3;

 VAR_4 = --VAR_1->reqs;
 FUNC_6(&VAR_1->lock);

 if (!VAR_4) {
  long VAR_5;

  if (VAR_1->err)
   VAR_5 = VAR_1->err;
  else if (VAR_1->bytes >= 0 && VAR_1->write)
   VAR_5 = -VAR_0;
  else {
   VAR_5 = VAR_1->bytes < 0 ? VAR_1->size : VAR_1->bytes;

   if (!FUNC_3(VAR_1->iocb)) {
    struct path *VAR_6 = &VAR_1->iocb->ki_filp->f_path;
    struct inode *VAR_7 = VAR_6->dentry->d_inode;
    struct fuse_conn *VAR_8 = FUNC_1(VAR_7);
    struct fuse_inode *VAR_9 = FUNC_2(VAR_7);

    FUNC_5(&VAR_8->lock);
    VAR_9->attr_version = ++VAR_8->attr_version;
    FUNC_6(&VAR_8->lock);
   }
  }

  FUNC_0(VAR_1->iocb, VAR_5, 0);
  FUNC_4(VAR_1);
 }
}
