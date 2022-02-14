
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct bfad_s {int comp; int bfad_lock; int bfa_fcs; TYPE_1__ pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bfad_s*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct bfad_s *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_2->bfad_lock, VAR_3);
 FUNC_2(&VAR_2->comp);
 VAR_2->pport.flags |= VAR_1;
 FUNC_0(&VAR_2->bfa_fcs);
 FUNC_4(&VAR_2->bfad_lock, VAR_3);
 FUNC_5(&VAR_2->comp);

 FUNC_1(VAR_2, VAR_0);
}
