
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct kiocb {TYPE_1__* private; } ;
struct ext4_inode_info {int i_completed_io_lock; int i_aio_dio_complete_list; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_6__ {scalar_t__ flag; int result; int work; TYPE_5__* inode; int list; struct kiocb* iocb; int size; int offset; } ;
typedef TYPE_1__ ext4_io_end_t ;
struct TYPE_8__ {int i_sb; int i_ino; } ;
struct TYPE_7__ {struct workqueue_struct* dio_unwritten_wq; } ;


 scalar_t__ VAR_0 ;
 struct ext4_inode_info* FUNC_0 (TYPE_5__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (struct kiocb*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,TYPE_1__*,int ,struct kiocb*,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct workqueue_struct*,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct kiocb *VAR_1, loff_t VAR_2,
       ssize_t VAR_3, void *VAR_4, int VAR_5,
       bool VAR_6)
{
        ext4_io_end_t *VAR_7 = VAR_1->private;
 struct ext4_inode_info *VAR_8;
 struct workqueue_struct *VAR_9;
 unsigned long VAR_10;


 if (!VAR_7 || !VAR_3)
  goto out;

 VAR_8 = FUNC_0(VAR_7->inode);

 FUNC_4("ext4_end_io_dio(): io_end 0x%p"
    "for inode %lu, iocb 0x%p, offset %llu, size %llu\n",
     VAR_1->private, VAR_7->inode->i_ino, VAR_1, VAR_2,
    VAR_3);

 VAR_1->private = ((void*)0);


 if (VAR_7->flag != VAR_0){
  FUNC_3(VAR_7);
out:
  if (VAR_6)
   FUNC_2(VAR_1, VAR_5, 0);
  return;
 }

 VAR_7->offset = VAR_2;
 VAR_7->size = VAR_3;
 if (VAR_6) {
  VAR_7->iocb = VAR_1;
  VAR_7->result = VAR_5;
 }
 VAR_9 = FUNC_1(VAR_7->inode->i_sb)->dio_unwritten_wq;

 FUNC_7(&VAR_8->i_completed_io_lock, VAR_10);

 FUNC_5(&VAR_7->list,
   &FUNC_0(VAR_7->inode)->i_aio_dio_complete_list);
 FUNC_8(&VAR_8->i_completed_io_lock, VAR_10);


 FUNC_6(VAR_9, &VAR_7->work);
}
