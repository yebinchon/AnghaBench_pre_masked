
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_ioc_s {int ioc_aen_seq; TYPE_2__* attr; TYPE_1__* bfa; } ;
struct TYPE_7__ {int ioc_type; void* mac; int pwwn; } ;
struct TYPE_8__ {TYPE_3__ ioc; } ;
struct bfa_aen_entry_s {TYPE_4__ aen_data; } ;
typedef enum bfa_ioc_type_e { ____Placeholder_bfa_ioc_type_e } bfa_ioc_type_e ;
typedef enum bfa_ioc_aen_event { ____Placeholder_bfa_ioc_aen_event } bfa_ioc_aen_event ;
struct TYPE_6__ {int pwwn; } ;
struct TYPE_5__ {scalar_t__ bfad; } ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 void* FUNC_1 (struct bfa_ioc_s*) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (struct bfad_s*,struct bfa_aen_entry_s*) ;
 int FUNC_4 (struct bfa_aen_entry_s*,struct bfad_s*,int ,int ,int) ;

void
FUNC_5(struct bfa_ioc_s *VAR_1, enum bfa_ioc_aen_event VAR_2)
{
 struct bfad_s *VAR_3 = (struct bfad_s *)VAR_1->bfa->bfad;
 struct bfa_aen_entry_s *VAR_4;
 enum bfa_ioc_type_e VAR_5;

 FUNC_3(VAR_3, VAR_4);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_2(VAR_1);
 switch (VAR_5) {
 case 130:
  VAR_4->aen_data.ioc.pwwn = VAR_1->attr->pwwn;
  break;
 case 129:
  VAR_4->aen_data.ioc.pwwn = VAR_1->attr->pwwn;
  VAR_4->aen_data.ioc.mac = FUNC_1(VAR_1);
  break;
 case 128:
  VAR_4->aen_data.ioc.mac = FUNC_1(VAR_1);
  break;
 default:
  FUNC_0(VAR_5 != 130);
  break;
 }


 VAR_4->aen_data.ioc.ioc_type = VAR_5;
 FUNC_4(VAR_4, VAR_3, ++VAR_1->ioc_aen_seq,
      VAR_0, VAR_2);
}
