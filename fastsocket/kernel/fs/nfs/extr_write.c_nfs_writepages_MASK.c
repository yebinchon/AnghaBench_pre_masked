
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct nfs_pageio_descriptor {int pg_error; } ;
struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
struct TYPE_4__ {unsigned long flags; } ;
struct TYPE_3__ {int (* write_pageio_init ) (struct nfs_pageio_descriptor*,struct inode*,int ,int *) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (int ,unsigned long*) ;
 int VAR_3 ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct nfs_pageio_descriptor*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (struct nfs_pageio_descriptor*,struct inode*,int ,int *) ;
 int FUNC_7 (unsigned long*,int ,int ,int ) ;
 int FUNC_8 (unsigned long*,int ) ;
 int FUNC_9 (struct writeback_control*) ;
 int FUNC_10 (struct address_space*,struct writeback_control*,int ,struct nfs_pageio_descriptor*) ;

int FUNC_11(struct address_space *VAR_6, struct writeback_control *VAR_7)
{
 struct inode *VAR_8 = VAR_6->host;
 unsigned long *VAR_9 = &FUNC_0(VAR_8)->flags;
 struct nfs_pageio_descriptor VAR_10;
 int VAR_11;


 VAR_11 = FUNC_7(VAR_9, VAR_1,
   VAR_4, VAR_2);
 if (VAR_11)
  goto out_err;

 FUNC_3(VAR_8, VAR_0);

 FUNC_1(VAR_8)->write_pageio_init(&VAR_10, VAR_8, FUNC_9(VAR_7), &VAR_3);
 VAR_11 = FUNC_10(VAR_6, VAR_7, VAR_5, &VAR_10);
 FUNC_4(&VAR_10);

 FUNC_2(VAR_1, VAR_9);
 FUNC_5();
 FUNC_8(VAR_9, VAR_1);

 if (VAR_11 < 0)
  goto out_err;
 VAR_11 = VAR_10.pg_error;
 if (VAR_11 < 0)
  goto out_err;
 return 0;
out_err:
 return VAR_11;
}
