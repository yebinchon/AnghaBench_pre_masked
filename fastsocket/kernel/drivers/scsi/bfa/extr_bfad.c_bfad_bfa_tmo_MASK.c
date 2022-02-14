
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_4__ {int timer_mod; } ;
struct bfad_s {int hal_tmo; int bfad_lock; TYPE_1__ bfa; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct list_head*) ;
 int FUNC_1 (TYPE_1__*,struct list_head*) ;
 int FUNC_2 (TYPE_1__*,struct list_head*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct list_head*) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void
FUNC_9(unsigned long VAR_2)
{
 struct bfad_s *VAR_3 = (struct bfad_s *) VAR_2;
 unsigned long VAR_4;
 struct list_head VAR_5;

 FUNC_7(&VAR_3->bfad_lock, VAR_4);

 FUNC_3(&VAR_3->bfa.timer_mod);

 FUNC_0(&VAR_3->bfa, &VAR_5);
 FUNC_8(&VAR_3->bfad_lock, VAR_4);

 if (!FUNC_4(&VAR_5)) {
  FUNC_2(&VAR_3->bfa, &VAR_5);
  FUNC_7(&VAR_3->bfad_lock, VAR_4);
  FUNC_1(&VAR_3->bfa, &VAR_5);
  FUNC_8(&VAR_3->bfad_lock, VAR_4);
 }

 FUNC_5(&VAR_3->hal_tmo,
    VAR_1 + FUNC_6(VAR_0));
}
