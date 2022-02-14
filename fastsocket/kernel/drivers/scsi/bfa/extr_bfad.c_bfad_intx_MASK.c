
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct bfad_s {int bfad_lock; int bfa; } ;
typedef int irqreturn_t ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct list_head*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

irqreturn_t
FUNC_7(int VAR_2, void *VAR_3)
{
 struct bfad_s *VAR_4 = VAR_3;
 struct list_head VAR_5;
 unsigned long VAR_6;
 bfa_boolean_t VAR_7;

 FUNC_5(&VAR_4->bfad_lock, VAR_6);
 VAR_7 = FUNC_3(&VAR_4->bfa);
 if (!VAR_7) {
  FUNC_6(&VAR_4->bfad_lock, VAR_6);
  return VAR_1;
 }

 FUNC_0(&VAR_4->bfa, &VAR_5);
 FUNC_6(&VAR_4->bfad_lock, VAR_6);

 if (!FUNC_4(&VAR_5)) {
  FUNC_2(&VAR_4->bfa, &VAR_5);

  FUNC_5(&VAR_4->bfad_lock, VAR_6);
  FUNC_1(&VAR_4->bfa, &VAR_5);
  FUNC_6(&VAR_4->bfad_lock, VAR_6);
 }

 return VAR_0;

}
