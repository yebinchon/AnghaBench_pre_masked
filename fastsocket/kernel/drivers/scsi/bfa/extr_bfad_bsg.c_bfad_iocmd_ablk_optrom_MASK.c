
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ablk; } ;
struct TYPE_4__ {TYPE_1__ modules; } ;
struct bfad_s {int bfad_lock; TYPE_2__ bfa; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct bfa_bsg_gen_s {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,struct bfad_hal_comp*) ;
 scalar_t__ FUNC_1 (int *,int ,struct bfad_hal_comp*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct bfad_s *VAR_3, unsigned int VAR_4, void *VAR_5)
{
 struct bfa_bsg_gen_s *VAR_6 = (struct bfa_bsg_gen_s *)VAR_5;
 struct bfad_hal_comp VAR_7;
 unsigned long VAR_8;

 FUNC_2(&VAR_7.comp);
 FUNC_3(&VAR_3->bfad_lock, VAR_8);
 if (VAR_4 == VAR_1)
  VAR_6->status = FUNC_1(&VAR_3->bfa.modules.ablk,
     VAR_2, &VAR_7);
 else
  VAR_6->status = FUNC_0(&VAR_3->bfa.modules.ablk,
     VAR_2, &VAR_7);
 FUNC_4(&VAR_3->bfad_lock, VAR_8);

 if (VAR_6->status != VAR_0)
  goto out;

 FUNC_5(&VAR_7.comp);
 VAR_6->status = VAR_7.status;
out:
 return 0;
}
