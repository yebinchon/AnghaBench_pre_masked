
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bfad; } ;
struct bfad_vport_s {TYPE_1__ drv_port; scalar_t__ comp_del; } ;
struct bfa_fcs_vport_s {int lps; scalar_t__ vport_drv; } ;


 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (int ,struct bfa_fcs_vport_s*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_vport_s *VAR_0)
{
 struct bfad_vport_s *VAR_1 =
   (struct bfad_vport_s *)VAR_0->vport_drv;

 FUNC_1(FUNC_0(VAR_0), VAR_0);
 FUNC_2(VAR_0->lps);

 if (VAR_1->comp_del) {
  FUNC_4(VAR_1->comp_del);
  return;
 }






 FUNC_3(VAR_1->drv_port.bfad, &VAR_1->drv_port);
}
