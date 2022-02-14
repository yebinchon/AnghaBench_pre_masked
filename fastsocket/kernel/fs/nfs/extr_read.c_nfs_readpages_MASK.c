
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_readdesc {int * ctx; struct nfs_pageio_descriptor* pgio; } ;
struct nfs_pageio_descriptor {int pg_bytes_written; } ;
struct list_head {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
struct TYPE_4__ {int (* read_pageio_init ) (struct nfs_pageio_descriptor*,struct inode*,int *) ;} ;
struct TYPE_3__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,int ,long long,unsigned int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int ,unsigned long) ;
 int VAR_7 ;
 int FUNC_6 (struct file*) ;
 int * FUNC_7 (struct inode*,int *,int ) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct nfs_pageio_descriptor*) ;
 int FUNC_10 (int *,struct inode*,struct address_space*,struct list_head*,unsigned int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct address_space*,struct list_head*,int ,struct nfs_readdesc*) ;
 int VAR_8 ;
 int FUNC_13 (struct nfs_pageio_descriptor*,struct inode*,int *) ;

int FUNC_14(struct file *VAR_9, struct address_space *VAR_10,
  struct list_head *VAR_11, unsigned VAR_12)
{
 struct nfs_pageio_descriptor VAR_13;
 struct nfs_readdesc VAR_14 = {
  .pgio = &VAR_13,
 };
 struct inode *VAR_15 = VAR_10->host;
 unsigned long VAR_16;
 int VAR_17 = -VAR_1;

 FUNC_3("NFS: nfs_readpages (%s/%Ld %d)\n",
   VAR_15->i_sb->s_id,
   (long long)FUNC_0(VAR_15),
   VAR_12);
 FUNC_8(VAR_15, VAR_4);

 if (FUNC_2(VAR_15))
  goto out;

 if (VAR_9 == ((void*)0)) {
  VAR_14.ctx = FUNC_7(VAR_15, ((void*)0), VAR_2);
  if (VAR_14.ctx == ((void*)0))
   return -VAR_0;
 } else
  VAR_14.ctx = FUNC_4(FUNC_6(VAR_9));




 VAR_17 = FUNC_10(VAR_14.ctx, VAR_15, VAR_10,
      VAR_11, &VAR_12);
 if (VAR_17 == 0)
  goto read_complete;

 FUNC_1(VAR_15)->read_pageio_init(&VAR_13, VAR_15, &VAR_7);

 VAR_17 = FUNC_12(VAR_10, VAR_11, VAR_8, &VAR_14);

 FUNC_9(&VAR_13);
 VAR_16 = (VAR_13.pg_bytes_written + VAR_6 - 1) >> VAR_5;
 FUNC_5(VAR_15, VAR_3, VAR_16);
read_complete:
 FUNC_11(VAR_14.ctx);
out:
 return VAR_17;
}
