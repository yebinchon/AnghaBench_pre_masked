
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {TYPE_1__* fcs; } ;
struct bfa_fcs_rpf_s {int rpsc_retries; int fcxp_wqe; struct bfa_fcs_rport_s* rport; } ;
typedef enum rpf_event { ____Placeholder_rpf_event } rpf_event ;
struct TYPE_3__ {int bfa; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct bfa_fcs_rpf_s*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_rpf_s *VAR_2, enum rpf_event VAR_3)
{
 struct bfa_fcs_rport_s *VAR_4 = VAR_2->rport;

 FUNC_3(VAR_4->fcs, VAR_3);

 switch (VAR_3) {
 case 129:
  FUNC_2(VAR_2, VAR_1);
  break;

 case 128:
  FUNC_2(VAR_2, VAR_0);
  FUNC_0(VAR_4->fcs->bfa, &VAR_2->fcxp_wqe);
  VAR_2->rpsc_retries = 0;
  break;

 default:
  FUNC_1(VAR_4->fcs, VAR_3);
 }
}
