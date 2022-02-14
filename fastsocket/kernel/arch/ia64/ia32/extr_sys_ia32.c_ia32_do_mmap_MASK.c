
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
typedef int loff_t ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_5__ {int mmap_sem; } ;
struct TYPE_4__ {int mmap; } ;


 int FUNC_0 (char*,...) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* VAR_6 ;
 unsigned long FUNC_3 (struct file*,unsigned long,unsigned long,int,int,int ) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (struct file*,unsigned long,unsigned long,int,int,int ) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

unsigned long
FUNC_10 (struct file *VAR_8, unsigned long VAR_9, unsigned long VAR_10, int VAR_11, int VAR_12,
       loff_t VAR_13)
{
 FUNC_0("ia32_do_mmap(file=%p,addr=0x%lx,len=0x%lx,prot=%x,flags=%x,offset=0x%llx)\n",
     VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);

 if (VAR_8 && (!VAR_8->f_op || !VAR_8->f_op->mmap))
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_10);
 if (VAR_10 == 0)
  return VAR_9;

 if (VAR_10 > VAR_3 || VAR_9 > VAR_3 - VAR_10)
 {
  if (VAR_12 & VAR_4)
   return -VAR_2;
  else
  return -VAR_0;
 }

 if (FUNC_2(VAR_13))
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_11);

 if (VAR_12 & VAR_5)
  return -VAR_2;
 FUNC_4(&VAR_6->mm->mmap_sem);
 {
  VAR_9 = FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 }
 FUNC_9(&VAR_6->mm->mmap_sem);

 FUNC_0("ia32_do_mmap: returning 0x%lx\n", VAR_9);
 return VAR_9;
}
