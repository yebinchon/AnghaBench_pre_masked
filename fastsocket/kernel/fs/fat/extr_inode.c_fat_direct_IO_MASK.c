
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct file {TYPE_2__* f_mapping; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {scalar_t__ mmu_private; } ;
struct TYPE_5__ {struct inode* host; } ;
struct TYPE_4__ {int s_bdev; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct kiocb*,struct inode*,int ,struct iovec const*,scalar_t__,unsigned long,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct iovec const*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(int VAR_2, struct kiocb *VAR_3,
        const struct iovec *VAR_4,
        loff_t VAR_5, unsigned long VAR_6)
{
 struct file *VAR_7 = VAR_3->ki_filp;
 struct inode *VAR_8 = VAR_7->f_mapping->host;

 if (VAR_2 == VAR_0) {
  loff_t VAR_9 = VAR_5 + FUNC_2(VAR_4, VAR_6);
  if (FUNC_0(VAR_8)->mmu_private < VAR_9)
   return 0;
 }





 return FUNC_1(VAR_2, VAR_3, VAR_8, VAR_8->i_sb->s_bdev, VAR_4,
      VAR_5, VAR_6, VAR_1, ((void*)0));
}
