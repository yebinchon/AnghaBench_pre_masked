
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfad_s {int bfad_flags; } ;
struct bfa_fcs_lport_s {TYPE_1__* fabric; TYPE_2__* fcs; } ;
struct TYPE_6__ {int (* online ) (struct bfa_fcs_lport_s*) ;int (* init ) (struct bfa_fcs_lport_s*) ;} ;
struct TYPE_5__ {scalar_t__ bfad; } ;
struct TYPE_4__ {size_t fab_type; int oper_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct bfa_fcs_lport_s*) ;
 int FUNC_5 (struct bfa_fcs_lport_s*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_lport_s *VAR_6)
{
 struct bfad_s *VAR_7 = (struct bfad_s *)VAR_6->fcs->bfad;
 char VAR_8[VAR_2];

 FUNC_3(VAR_6->fcs, VAR_6->fabric->oper_type);

 VAR_4[VAR_6->fabric->fab_type].init(VAR_6);
 VAR_4[VAR_6->fabric->fab_type].online(VAR_6);

 FUNC_6(VAR_8, FUNC_2(VAR_6));
 FUNC_0(VAR_3, VAR_7, VAR_5,
  "Logical port online: WWN = %s Role = %s\n",
  VAR_8, "Initiator");
 FUNC_1(VAR_6, VAR_1);

 VAR_7->bfad_flags |= VAR_0;
}
