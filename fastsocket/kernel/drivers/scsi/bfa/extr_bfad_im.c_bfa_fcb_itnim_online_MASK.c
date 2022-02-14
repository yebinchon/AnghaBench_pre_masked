
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_port_s {int im_port; } ;
struct bfad_itnim_s {int queue_work; int itnim_work; int im_port; int state; int fcs_itnim; int bfa_itnim; struct bfad_im_s* im; } ;
struct bfad_im_s {int drv_workq; } ;


 int VAR_0 ;
 struct bfad_port_s* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(struct bfad_itnim_s *VAR_1)
{
 struct bfad_port_s *VAR_2;
 struct bfad_im_s *VAR_3 = VAR_1->im;

 VAR_1->bfa_itnim = FUNC_1(&VAR_1->fcs_itnim);
 VAR_2 = FUNC_0(&VAR_1->fcs_itnim);
 VAR_1->state = VAR_0;
 VAR_1->queue_work = 1;
 VAR_1->im_port = VAR_2->im_port;


 if (VAR_1->queue_work)
  FUNC_2(VAR_3->drv_workq, &VAR_1->itnim_work);
}
