
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_flags; int im; } ;
struct bfa_fcs_itnim_s {int dummy; } ;
struct bfad_itnim_s {int itnim_work; int state; struct bfa_fcs_itnim_s fcs_itnim; int im; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct bfad_itnim_s* FUNC_1 (int,int ) ;

void
FUNC_2(struct bfad_s *VAR_4, struct bfa_fcs_itnim_s **VAR_5,
      struct bfad_itnim_s **VAR_6)
{
 *VAR_6 = FUNC_1(sizeof(struct bfad_itnim_s), VAR_1);
 if (*VAR_6 == ((void*)0))
  return;

 (*VAR_6)->im = VAR_4->im;
 *VAR_5 = &(*VAR_6)->fcs_itnim;
 (*VAR_6)->state = VAR_2;




 FUNC_0(&(*VAR_6)->itnim_work, VAR_3);
 VAR_4->bfad_flags |= VAR_0;
}
