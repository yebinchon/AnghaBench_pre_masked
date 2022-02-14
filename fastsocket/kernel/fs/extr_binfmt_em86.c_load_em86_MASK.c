
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct linux_binprm {char* filename; struct file* file; int argc; scalar_t__ buf; } ;
struct file {TYPE_1__* f_op; } ;
struct elfhdr {scalar_t__ e_type; scalar_t__ e_machine; int e_ident; } ;
struct TYPE_2__ {int mmap; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int VAR_8 ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int,char**,struct linux_binprm*) ;
 int FUNC_4 (struct file*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 struct file* FUNC_6 (char*) ;
 int FUNC_7 (struct linux_binprm*) ;
 int FUNC_8 (struct linux_binprm*) ;
 int FUNC_9 (struct linux_binprm*,struct pt_regs*) ;

__attribute__((used)) static int FUNC_10(struct linux_binprm *VAR_9,struct pt_regs *VAR_10)
{
 char *VAR_11, *VAR_12, *VAR_13;
 struct file * VAR_14;
 int VAR_15;
 struct elfhdr VAR_16;


 VAR_16 = *((struct elfhdr *)VAR_9->buf);

 if (FUNC_5(VAR_16.e_ident, VAR_0, VAR_8) != 0)
  return -VAR_5;


 if ((VAR_16.e_type != VAR_7 && VAR_16.e_type != VAR_6) ||
  (!((VAR_16.e_machine == VAR_3) || (VAR_16.e_machine == VAR_4))) ||
  (!VAR_9->file->f_op || !VAR_9->file->f_op->mmap)) {
   return -VAR_5;
 }

 FUNC_2(VAR_9->file);
 FUNC_4(VAR_9->file);
 VAR_9->file = ((void*)0);




 VAR_11 = VAR_1;
 VAR_12 = VAR_2;
 VAR_13 = ((void*)0);
 FUNC_8(VAR_9);
 VAR_15 = FUNC_3(1, &VAR_9->filename, VAR_9);
 if (VAR_15 < 0) return VAR_15;
 VAR_9->argc++;
 if (VAR_13) {
  VAR_15 = FUNC_3(1, &VAR_13, VAR_9);
  if (VAR_15 < 0) return VAR_15;
  VAR_9->argc++;
 }
 VAR_15 = FUNC_3(1, &VAR_12, VAR_9);
 if (VAR_15 < 0) return VAR_15;
 VAR_9->argc++;






 VAR_14 = FUNC_6(VAR_11);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_9->file = VAR_14;

 VAR_15 = FUNC_7(VAR_9);
 if (VAR_15 < 0)
  return VAR_15;

 return FUNC_9(VAR_9, VAR_10);
}
