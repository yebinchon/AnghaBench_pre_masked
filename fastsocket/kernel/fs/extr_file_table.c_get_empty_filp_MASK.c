
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {int fu_list; } ;
struct file {int f_lock; int f_cred; TYPE_2__ f_owner; int f_count; TYPE_1__ f_u; } ;
struct cred {int dummy; } ;
struct TYPE_6__ {long max_files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 struct cred* FUNC_3 () ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct cred const*) ;
 int FUNC_7 () ;
 long FUNC_8 () ;
 struct file* FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct file*) ;
 int FUNC_15 (int *) ;

struct file *FUNC_16(void)
{
 const struct cred *VAR_5 = FUNC_3();
 static long VAR_6;
 struct file * VAR_7;




 if (FUNC_8() >= VAR_2.max_files && !FUNC_2(VAR_0)) {




  if (FUNC_11(&VAR_4) >= VAR_2.max_files)
   goto over;
 }

 VAR_7 = FUNC_9(VAR_3, VAR_1);
 if (VAR_7 == ((void*)0))
  goto fail;

 FUNC_10(&VAR_4);
 if (FUNC_14(VAR_7))
  goto fail_sec;

 FUNC_0(&VAR_7->f_u.fu_list);
 FUNC_1(&VAR_7->f_count, 1);
 FUNC_13(&VAR_7->f_owner.lock);
 VAR_7->f_cred = FUNC_6(VAR_5);
 FUNC_15(&VAR_7->f_lock);
 FUNC_4(VAR_7);

 return VAR_7;

over:

 if (FUNC_8() > VAR_6) {
  FUNC_12("VFS: file-max limit %lu reached\n", FUNC_7());
  VAR_6 = FUNC_8();
 }
 goto fail;

fail_sec:
 FUNC_5(VAR_7);
fail:
 return ((void*)0);
}
