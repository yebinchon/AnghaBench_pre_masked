
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfa_iocfc_s {TYPE_2__* bfa; } ;
typedef enum iocfc_event { ____Placeholder_iocfc_event } iocfc_event ;
struct TYPE_6__ {int dis_hcb_qe; int op_status; } ;
struct TYPE_7__ {TYPE_1__ iocfc; int ioc; } ;


 int VAR_0 ;





 int FUNC_0 (TYPE_2__*,int *,int ,TYPE_2__*) ;
 int FUNC_1 (struct bfa_iocfc_s*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_iocfc_s *VAR_5, enum iocfc_event VAR_6)
{
 FUNC_4(VAR_5->bfa, VAR_6);

 switch (VAR_6) {
 case 128:
  FUNC_1(VAR_5, VAR_4);
  break;
 case 132:
  FUNC_2(&VAR_5->bfa->ioc);
  break;
 case 130:
  FUNC_1(VAR_5, VAR_2);
  break;
 case 131:
  FUNC_1(VAR_5, VAR_3);
  VAR_5->bfa->iocfc.op_status = VAR_0;
  FUNC_0(VAR_5->bfa, &VAR_5->bfa->iocfc.dis_hcb_qe,
        VAR_1, VAR_5->bfa);
  break;
 case 129:
  break;
 default:
  FUNC_3(VAR_5->bfa, VAR_6);
  break;
 }
}
