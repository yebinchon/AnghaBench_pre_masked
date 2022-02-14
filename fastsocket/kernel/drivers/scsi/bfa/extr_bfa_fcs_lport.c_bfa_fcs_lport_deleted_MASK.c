
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_fcs_lport_s {TYPE_2__* fabric; scalar_t__ vport; TYPE_1__* fcs; } ;
struct TYPE_4__ {int wc; } ;
struct TYPE_3__ {scalar_t__ bfad; } ;


 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_lport_s *VAR_4)
{
 struct bfad_s *VAR_5 = (struct bfad_s *)VAR_4->fcs->bfad;
 char VAR_6[VAR_1];

 FUNC_5(VAR_6, FUNC_2(VAR_4));
 FUNC_0(VAR_2, VAR_5, VAR_3,
  "Logical port deleted: WWN = %s Role = %s\n",
  VAR_6, "Initiator");
 FUNC_1(VAR_4, VAR_0);


 if (VAR_4->vport)
  FUNC_3(VAR_4->vport);
 else
  FUNC_4(&VAR_4->fabric->wc);
}
