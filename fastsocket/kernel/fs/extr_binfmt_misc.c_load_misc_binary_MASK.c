
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct linux_binprm {int interp_data; char* interp; int interp_flags; int buf; struct file* file; int argc; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int flags; int interpreter; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (char*,struct linux_binprm*) ;
 TYPE_1__* FUNC_4 (struct linux_binprm*) ;
 int FUNC_5 (int,char**,struct linux_binprm*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int,struct file*) ;
 scalar_t__ FUNC_7 (struct file*,int ) ;
 int FUNC_8 (struct file*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct file*,int ,int ,int) ;
 int FUNC_11 (int ,int ,int) ;
 struct file* FUNC_12 (char*) ;
 int FUNC_13 (struct linux_binprm*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct linux_binprm*) ;
 int FUNC_17 (struct linux_binprm*,struct pt_regs*) ;
 int FUNC_18 (char*,int ,int) ;
 int FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct linux_binprm *VAR_10, struct pt_regs *VAR_11)
{
 Node *VAR_12;
 struct file * VAR_13 = ((void*)0);
 char VAR_14[VAR_0];
 char *VAR_15 = VAR_14;
 int VAR_16;
 int VAR_17 = -1;

 VAR_16 = -VAR_3;
 if (!VAR_8)
  goto _ret;


 FUNC_14(&VAR_9);
 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12)
  FUNC_18(VAR_14, VAR_12->interpreter, VAR_0);
 FUNC_15(&VAR_9);
 if (!VAR_12)
  goto _ret;

 if (!(VAR_12->flags & VAR_7)) {
  VAR_16 = FUNC_16(VAR_10);
  if (VAR_16)
   goto _ret;
 }

 if (VAR_12->flags & VAR_6) {




   VAR_17 = FUNC_9();
   if (VAR_17 < 0) {
    VAR_16 = VAR_17;
    goto _ret;
   }
   FUNC_6(VAR_17, VAR_10->file);



  if (FUNC_7(VAR_10->file, VAR_4))
   VAR_10->interp_flags |= VAR_1;

  FUNC_2(VAR_10->file);
  VAR_10->file = ((void*)0);


  VAR_10->interp_flags |= VAR_2;
  VAR_10->interp_data = VAR_17;

  } else {
   FUNC_2(VAR_10->file);
   FUNC_8(VAR_10->file);
   VAR_10->file = ((void*)0);
  }

 VAR_16 = FUNC_5 (1, &VAR_10->interp, VAR_10);
 if (VAR_16 < 0)
  goto _error;
 VAR_10->argc++;


 VAR_16 = FUNC_5 (1, &VAR_15, VAR_10);
 if (VAR_16 < 0)
  goto _error;
 VAR_10->argc ++;


 VAR_16 = FUNC_3(VAR_14, VAR_10);
 if (VAR_16 < 0)
  goto _error;

 VAR_13 = FUNC_12 (VAR_14);
 VAR_16 = FUNC_1 (VAR_13);
 if (FUNC_0 (VAR_13))
  goto _error;

 VAR_10->file = VAR_13;
 if (VAR_12->flags & VAR_5) {




  FUNC_11(VAR_10->buf, 0, VAR_0);
  VAR_16 = FUNC_10(VAR_10->file, 0, VAR_10->buf, VAR_0);
 } else
  VAR_16 = FUNC_13 (VAR_10);

 if (VAR_16 < 0)
  goto _error;

 VAR_16 = FUNC_17 (VAR_10, VAR_11);
 if (VAR_16 < 0)
  goto _error;

_ret:
 return VAR_16;
_error:
 if (VAR_17 > 0)
  FUNC_19(VAR_17);
 VAR_10->interp_flags = 0;
 VAR_10->interp_data = 0;
 goto _ret;
}
