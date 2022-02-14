
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc; } ;
struct bfad_s {scalar_t__ disable_active; int disable_comp; int bfad_lock; TYPE_1__ bfa; } ;
struct bfa_bsg_gen_s {void* status; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct bfad_s *VAR_4, void *VAR_5)
{
 struct bfa_bsg_gen_s *VAR_6 = (struct bfa_bsg_gen_s *)VAR_5;
 int VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_3(&VAR_4->bfad_lock, VAR_8);
 if (FUNC_0(&VAR_4->bfa.ioc)) {
  FUNC_4(&VAR_4->bfad_lock, VAR_8);
  VAR_6->status = VAR_1;
  return VAR_7;
 }

 if (VAR_4->disable_active) {
  FUNC_4(&VAR_4->bfad_lock, VAR_8);
  return -VAR_3;
 }

 VAR_4->disable_active = VAR_2;
 FUNC_2(&VAR_4->disable_comp);
 FUNC_1(&VAR_4->bfa);
 FUNC_4(&VAR_4->bfad_lock, VAR_8);

 FUNC_5(&VAR_4->disable_comp);
 VAR_4->disable_active = VAR_0;
 VAR_6->status = VAR_1;

 return VAR_7;
}
