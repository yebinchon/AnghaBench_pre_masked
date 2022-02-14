
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa; } ;
struct TYPE_2__ {int cfg_value; } ;
struct bfa_bsg_fcpim_throttle_s {TYPE_1__ throttle; int status; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct bfad_s *VAR_0, void *VAR_1)
{
 struct bfa_bsg_fcpim_throttle_s *VAR_2 =
   (struct bfa_bsg_fcpim_throttle_s *)VAR_1;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->bfad_lock, VAR_3);
 VAR_2->status = FUNC_0(&VAR_0->bfa,
    VAR_2->throttle.cfg_value);
 FUNC_2(&VAR_0->bfad_lock, VAR_3);

 return 0;
}
