
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {TYPE_2__* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_conn {scalar_t__ auto_inval_data; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {TYPE_1__* f_mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct inode*,int *,TYPE_2__*,int *) ;
 int FUNC_1 (struct kiocb*,struct iovec const*,unsigned long,scalar_t__) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct iovec const*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_5(struct kiocb *VAR_0, const struct iovec *VAR_1,
      unsigned long VAR_2, loff_t VAR_3)
{
 struct inode *VAR_4 = VAR_0->ki_filp->f_mapping->host;
 struct fuse_conn *VAR_5 = FUNC_2(VAR_4);






 if (VAR_5->auto_inval_data ||
     (VAR_3 + FUNC_4(VAR_1, VAR_2) > FUNC_3(VAR_4))) {
  int VAR_6;
  VAR_6 = FUNC_0(VAR_4, ((void*)0), VAR_0->ki_filp, ((void*)0));
  if (VAR_6)
   return VAR_6;
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
