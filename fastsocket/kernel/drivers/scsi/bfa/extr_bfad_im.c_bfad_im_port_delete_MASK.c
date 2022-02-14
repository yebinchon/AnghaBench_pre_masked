
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_s {TYPE_1__* im; } ;
struct bfad_port_s {struct bfad_im_port_s* im_port; } ;
struct bfad_im_port_s {int port_delete_work; } ;
struct TYPE_2__ {int drv_workq; } ;


 int FUNC_0 (int ,int *) ;

void
FUNC_1(struct bfad_s *VAR_0, struct bfad_port_s *VAR_1)
{
 struct bfad_im_port_s *VAR_2 = VAR_1->im_port;

 FUNC_0(VAR_0->im->drv_workq,
    &VAR_2->port_delete_work);
}
