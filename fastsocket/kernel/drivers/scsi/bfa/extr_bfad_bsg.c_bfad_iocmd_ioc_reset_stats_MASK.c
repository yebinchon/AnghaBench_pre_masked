
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc; } ;
struct bfad_s {int bfad_lock; TYPE_1__ bfa; } ;
struct bfa_bsg_gen_s {int status; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct bfa_bsg_gen_s *VAR_6 = (struct bfa_bsg_gen_s *)VAR_4;
 unsigned long VAR_7;

 if (VAR_5 == VAR_2) {
  FUNC_0(&VAR_3->bfa);
  VAR_6->status = VAR_0;
 } else if (VAR_5 == VAR_1) {
  FUNC_2(&VAR_3->bfad_lock, VAR_7);
  VAR_6->status = FUNC_1(&VAR_3->bfa.ioc);
  FUNC_3(&VAR_3->bfad_lock, VAR_7);
 }

 return 0;
}
