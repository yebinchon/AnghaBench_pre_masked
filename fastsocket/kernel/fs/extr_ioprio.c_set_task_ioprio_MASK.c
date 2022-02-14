
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct io_context* io_context; } ;
struct io_context {int ioprio; int ioprio_changed; } ;
struct cred {scalar_t__ uid; scalar_t__ euid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 struct io_context* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 struct cred* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct task_struct*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*) ;

int FUNC_10(struct task_struct *VAR_4, int VAR_5)
{
 int VAR_6;
 struct io_context *VAR_7;
 const struct cred *VAR_8 = FUNC_3(), *VAR_9;

 FUNC_4();
 VAR_9 = FUNC_0(VAR_4);
 if (VAR_9->uid != VAR_8->euid &&
     VAR_9->uid != VAR_8->uid && !FUNC_2(VAR_0)) {
  FUNC_5();
  return -VAR_2;
 }
 FUNC_5();

 VAR_6 = FUNC_6(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_8(VAR_4);
 do {
  VAR_7 = VAR_4->io_context;

  FUNC_7();
  if (VAR_7)
   break;

  VAR_7 = FUNC_1(VAR_3, -1);
  if (!VAR_7) {
   VAR_6 = -VAR_1;
   break;
  }
  VAR_4->io_context = VAR_7;
 } while (1);

 if (!VAR_6) {
  VAR_7->ioprio = VAR_5;
  VAR_7->ioprio_changed = 1;
 }

 FUNC_9(VAR_4);
 return VAR_6;
}
