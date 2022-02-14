
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct kioctx {int ctx_lock; } ;
struct kiocb {int * ki_filp; int ki_list; struct kioctx* ki_ctx; } ;
struct TYPE_3__ {int next; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 struct kiocb* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct kioctx*,struct kiocb*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct work_struct *VAR_2)
{
 FUNC_8(&VAR_1);
 while (FUNC_1(!FUNC_3(&VAR_0))) {
  struct kiocb *VAR_3 = FUNC_4(VAR_0.next);
  struct kioctx *VAR_4 = VAR_3->ki_ctx;

  FUNC_2(&VAR_3->ki_list);
  FUNC_9(&VAR_1);


  if (VAR_3->ki_filp != ((void*)0))
   FUNC_0(VAR_3->ki_filp);


  FUNC_5();
  FUNC_8(&VAR_4->ctx_lock);
  FUNC_7(VAR_4, VAR_3);




  FUNC_9(&VAR_4->ctx_lock);
  FUNC_6();

  FUNC_8(&VAR_1);
 }
 FUNC_9(&VAR_1);
}
