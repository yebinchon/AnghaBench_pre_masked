
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cee; } ;
struct TYPE_4__ {TYPE_1__ modules; } ;
struct bfad_s {int bfad_lock; TYPE_2__ bfa; } ;
struct bfa_bsg_gen_s {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct bfad_s*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_1, void *VAR_2)
{
 struct bfa_bsg_gen_s *VAR_3 = (struct bfa_bsg_gen_s *)VAR_2;
 unsigned long VAR_4;

 FUNC_2(&VAR_1->bfad_lock, VAR_4);
 VAR_3->status = FUNC_0(&VAR_1->bfa.modules.cee, ((void*)0), ((void*)0));
 FUNC_3(&VAR_1->bfad_lock, VAR_4);
 if (VAR_3->status != VAR_0)
  FUNC_1(VAR_1, 0x5555);
 return 0;
}
