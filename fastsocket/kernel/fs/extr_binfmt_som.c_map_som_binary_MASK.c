
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct som_exec_auxhdr {int exec_bsize; int exec_dfile; int exec_dsize; int exec_dmem; int exec_tfile; int exec_tsize; int exec_tmem; } ;
struct file {int dummy; } ;
typedef int mm_segment_t ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long start_code; unsigned long end_code; unsigned long start_data; unsigned long end_data; unsigned long start_brk; unsigned long brk; int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (struct file*,unsigned long,unsigned long,int,int,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_8,
  const struct som_exec_auxhdr *VAR_9)
{
 unsigned long VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15;
 int VAR_16;
 int VAR_17 = VAR_5 | VAR_4;
 int VAR_18 = VAR_2|VAR_3|VAR_0|VAR_1;

 mm_segment_t VAR_19 = FUNC_5();
 FUNC_6(FUNC_4());

 VAR_10 = FUNC_1(VAR_9->exec_tmem);
 VAR_11 = FUNC_0(VAR_9->exec_tsize);
 VAR_7->mm->start_code = VAR_10;
 VAR_7->mm->end_code = VAR_10 + VAR_11;
 FUNC_3(&VAR_7->mm->mmap_sem);
 VAR_16 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_17,
   VAR_18, FUNC_1(VAR_9->exec_tfile));
 FUNC_7(&VAR_7->mm->mmap_sem);
 if (VAR_16 < 0 && VAR_16 > -1024)
  goto out;

 VAR_12 = FUNC_1(VAR_9->exec_dmem);
 VAR_13 = FUNC_0(VAR_9->exec_dsize);
 VAR_7->mm->start_data = VAR_12;
 VAR_7->mm->end_data = VAR_14 = VAR_12 + VAR_13;
 FUNC_3(&VAR_7->mm->mmap_sem);
 VAR_16 = FUNC_2(VAR_8, VAR_12, VAR_13,
   VAR_17 | VAR_6, VAR_18,
   FUNC_1(VAR_9->exec_dfile));
 FUNC_7(&VAR_7->mm->mmap_sem);
 if (VAR_16 < 0 && VAR_16 > -1024)
  goto out;

 VAR_15 = VAR_14 + FUNC_0(VAR_9->exec_bsize);
 VAR_7->mm->start_brk = VAR_7->mm->brk = VAR_15;
 FUNC_3(&VAR_7->mm->mmap_sem);
 VAR_16 = FUNC_2(((void*)0), VAR_14, VAR_15 - VAR_14,
   VAR_17 | VAR_6, VAR_2 | VAR_3, 0);
 FUNC_7(&VAR_7->mm->mmap_sem);
 if (VAR_16 > 0 || VAR_16 < -1024)
  VAR_16 = 0;
out:
 FUNC_6(VAR_19);
 return VAR_16;
}
