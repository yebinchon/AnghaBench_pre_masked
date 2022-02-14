
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fuse_write_in {int lock_owner; int write_flags; int flags; } ;
struct TYPE_4__ {size_t size; } ;
struct TYPE_5__ {TYPE_1__ out; struct fuse_write_in in; } ;
struct TYPE_6__ {TYPE_2__ write; } ;
struct fuse_req {TYPE_3__ misc; } ;
struct fuse_io_priv {scalar_t__ async; struct file* file; } ;
struct fuse_file {struct fuse_conn* fc; } ;
struct fuse_conn {int dummy; } ;
struct file {int f_flags; struct fuse_file* private_data; } ;
typedef int loff_t ;
typedef int * fl_owner_t ;


 int VAR_0 ;
 size_t FUNC_0 (struct fuse_conn*,struct fuse_req*,size_t,struct fuse_io_priv*) ;
 int FUNC_1 (struct fuse_conn*,int *) ;
 int FUNC_2 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_3 (struct fuse_req*,struct fuse_file*,int ,size_t) ;

__attribute__((used)) static size_t FUNC_4(struct fuse_req *VAR_1, struct fuse_io_priv *VAR_2,
         loff_t VAR_3, size_t VAR_4, fl_owner_t VAR_5)
{
 struct file *VAR_6 = VAR_2->file;
 struct fuse_file *VAR_7 = VAR_6->private_data;
 struct fuse_conn *VAR_8 = VAR_7->fc;
 struct fuse_write_in *VAR_9 = &VAR_1->misc.write.in;

 FUNC_3(VAR_1, VAR_7, VAR_3, VAR_4);
 VAR_9->flags = VAR_6->f_flags;
 if (VAR_5 != ((void*)0)) {
  VAR_9->write_flags |= VAR_0;
  VAR_9->lock_owner = FUNC_1(VAR_8, VAR_5);
 }

 if (VAR_2->async)
  return FUNC_0(VAR_8, VAR_1, VAR_4, VAR_2);

 FUNC_2(VAR_8, VAR_1);
 return VAR_1->misc.write.out.size;
}
