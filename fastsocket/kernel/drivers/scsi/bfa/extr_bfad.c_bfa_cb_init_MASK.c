
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_flags; int comp; int bfad_tsk; } ;
typedef scalar_t__ bfa_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void
FUNC_2(void *VAR_3, bfa_status_t VAR_4)
{
 struct bfad_s *VAR_5 = VAR_3;

 if (VAR_4 == VAR_2) {
  VAR_5->bfad_flags |= VAR_0;






  if ((VAR_5->bfad_flags & VAR_1)) {
   VAR_5->bfad_flags &= ~VAR_1;
   FUNC_1(VAR_5->bfad_tsk);
  }
 }

 FUNC_0(&VAR_5->comp);
}
