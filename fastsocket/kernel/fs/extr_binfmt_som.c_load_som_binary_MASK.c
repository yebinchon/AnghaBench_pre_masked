
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct som_hdr {unsigned int aux_header_size; int aux_header_location; } ;
struct som_exec_auxhdr {unsigned long exec_entry; } ;
struct pt_regs {int dummy; } ;
struct linux_binprm {scalar_t__ p; int file; scalar_t__ buf; } ;
struct TYPE_7__ {scalar_t__ brk; scalar_t__ start_stack; scalar_t__ end_data; scalar_t__ start_code; scalar_t__ end_code; scalar_t__ start_brk; } ;
struct TYPE_5__ {int task_size; int map_base; } ;
struct TYPE_6__ {TYPE_3__* mm; TYPE_1__ thread; int personality; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct som_hdr*) ;
 int FUNC_1 (struct linux_binprm*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (struct linux_binprm*) ;
 int FUNC_3 (struct linux_binprm*) ;
 int FUNC_4 (int ,int ,char*,unsigned int) ;
 int FUNC_5 (struct som_exec_auxhdr*) ;
 struct som_exec_auxhdr* FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (int ,struct som_exec_auxhdr*) ;
 int FUNC_9 (char*,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct linux_binprm*,int ,int ) ;
 int FUNC_12 (struct linux_binprm*) ;
 int VAR_9 ;
 int FUNC_13 (struct pt_regs*,unsigned long,scalar_t__) ;

__attribute__((used)) static int
FUNC_14(struct linux_binprm * VAR_10, struct pt_regs * VAR_11)
{
 int VAR_12;
 unsigned int VAR_13;
 unsigned long VAR_14;
 struct som_hdr *VAR_15;
 struct som_exec_auxhdr *VAR_16;


 VAR_15 = (struct som_hdr *) VAR_10->buf;

 VAR_12 = FUNC_0(VAR_15);
 if (VAR_12 != 0)
  goto out;



 VAR_12 = -VAR_1;
 VAR_13 = VAR_15->aux_header_size;
 if (VAR_13 > VAR_6)
  goto out;
 VAR_16 = FUNC_6(VAR_13, VAR_3);
 if (!VAR_16)
  goto out;

 VAR_12 = FUNC_4(VAR_10->file, VAR_15->aux_header_location,
   (char *) VAR_16, VAR_13);
 if (VAR_12 != VAR_13) {
  if (VAR_12 >= 0)
   VAR_12 = -VAR_0;
  goto out_free;
 }


 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12)
  goto out_free;


 VAR_8->flags &= ~VAR_5;
 VAR_8->personality = VAR_4;
 FUNC_12(VAR_10);







 VAR_8->thread.task_size = 0xc0000000;



 VAR_8->thread.map_base = 0x80000000;

 VAR_12 = FUNC_8(VAR_10->file, VAR_16);
 if (VAR_12 < 0)
  goto out_free;

 VAR_14 = VAR_16->exec_entry;
 FUNC_5(VAR_16);

 FUNC_10(&VAR_9);
 FUNC_3(VAR_10);
 FUNC_11(VAR_10, VAR_7, VAR_2);

 FUNC_1(VAR_10);

 VAR_8->mm->start_stack = VAR_10->p;
 FUNC_7(VAR_8,VAR_8->mm);

 FUNC_13(VAR_11, VAR_14, VAR_10->p);
 return 0;


out_free:
 FUNC_5(VAR_16);
out:
 return VAR_12;
}
