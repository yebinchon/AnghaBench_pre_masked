
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* args; } ;
struct fuse_read_in {int lock_owner; int read_flags; } ;
struct TYPE_5__ {struct fuse_read_in in; } ;
struct TYPE_6__ {TYPE_1__ read; } ;
struct fuse_req {TYPE_4__ out; TYPE_2__ misc; } ;
struct fuse_io_priv {scalar_t__ async; struct file* file; } ;
struct fuse_file {struct fuse_conn* fc; } ;
struct fuse_conn {int dummy; } ;
struct file {struct fuse_file* private_data; } ;
typedef int loff_t ;
typedef int * fl_owner_t ;
struct TYPE_7__ {size_t size; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct fuse_conn*,struct fuse_req*,size_t,struct fuse_io_priv*) ;
 int FUNC_1 (struct fuse_conn*,int *) ;
 int FUNC_2 (struct fuse_req*,struct file*,int ,size_t,int ) ;
 int FUNC_3 (struct fuse_conn*,struct fuse_req*) ;

__attribute__((used)) static size_t FUNC_4(struct fuse_req *VAR_2, struct fuse_io_priv *VAR_3,
        loff_t VAR_4, size_t VAR_5, fl_owner_t VAR_6)
{
 struct file *VAR_7 = VAR_3->file;
 struct fuse_file *VAR_8 = VAR_7->private_data;
 struct fuse_conn *VAR_9 = VAR_8->fc;

 FUNC_2(VAR_2, VAR_7, VAR_4, VAR_5, VAR_0);
 if (VAR_6 != ((void*)0)) {
  struct fuse_read_in *VAR_10 = &VAR_2->misc.read.in;

  VAR_10->read_flags |= VAR_1;
  VAR_10->lock_owner = FUNC_1(VAR_9, VAR_6);
 }

 if (VAR_3->async)
  return FUNC_0(VAR_9, VAR_2, VAR_5, VAR_3);

 FUNC_3(VAR_9, VAR_2);
 return VAR_2->out.args[0].size;
}
