
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
struct coda_file_info {scalar_t__ cfi_magic; struct file* cfi_container; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int (* splice_read ) (struct file*,int *,struct pipe_inode_info*,size_t,unsigned int) ;} ;


 int FUNC_0 (int) ;
 struct coda_file_info* FUNC_1 (struct file*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct file*,int *,struct pipe_inode_info*,size_t,unsigned int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct file *VAR_1, loff_t *VAR_2,
        struct pipe_inode_info *VAR_3, size_t VAR_4,
        unsigned int VAR_5)
{
 ssize_t (*VAR_6)(struct file *, loff_t *,
          struct pipe_inode_info *, size_t, unsigned int);
 struct coda_file_info *VAR_7;
 struct file *VAR_8;

 VAR_7 = FUNC_1(VAR_1);
 FUNC_0(!VAR_7 || VAR_7->cfi_magic != VAR_0);
 VAR_8 = VAR_7->cfi_container;

 VAR_6 = VAR_8->f_op->splice_read;
 if (!VAR_6)
  VAR_6 = FUNC_2;

 return VAR_6(VAR_8, VAR_2, VAR_3, VAR_4, VAR_5);
}
