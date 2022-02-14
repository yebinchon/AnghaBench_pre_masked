
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fuse_open_out {int open_flags; int fh; } ;
struct fuse_file {int open_flags; int nodeid; int fh; } ;
struct fuse_conn {int dummy; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fuse_file* FUNC_0 (struct fuse_conn*) ;
 int FUNC_1 (struct fuse_file*) ;
 int FUNC_2 (struct fuse_file*) ;
 int FUNC_3 (struct fuse_conn*,int ,struct file*,int,struct fuse_open_out*) ;

int FUNC_4(struct fuse_conn *VAR_4, u64 VAR_5, struct file *VAR_6,
   bool VAR_7)
{
 struct fuse_open_out VAR_8;
 struct fuse_file *VAR_9;
 int VAR_10;
 int VAR_11 = VAR_7 ? VAR_3 : VAR_2;

 VAR_9 = FUNC_0(VAR_4);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_11, &VAR_8);
 if (VAR_10) {
  FUNC_1(VAR_9);
  return VAR_10;
 }

 if (VAR_7)
  VAR_8.open_flags &= ~VAR_1;

 VAR_9->fh = VAR_8.fh;
 VAR_9->nodeid = VAR_5;
 VAR_9->open_flags = VAR_8.open_flags;
 VAR_6->private_data = FUNC_2(VAR_9);

 return 0;
}
