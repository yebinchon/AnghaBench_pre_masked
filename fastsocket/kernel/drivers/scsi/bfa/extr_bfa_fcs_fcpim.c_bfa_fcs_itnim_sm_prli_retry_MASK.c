
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_itnim_s {int prli_retries; int fcs; int timer; TYPE_1__* rport; } ;
typedef enum bfa_fcs_itnim_event { ____Placeholder_bfa_fcs_itnim_event } bfa_fcs_itnim_event ;
struct TYPE_2__ {int pwwn; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*) ;
 int FUNC_1 (struct bfa_fcs_itnim_s*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_itnim_s *VAR_7,
       enum bfa_fcs_itnim_event VAR_8)
{
 FUNC_6(VAR_7->fcs, VAR_7->rport->pwwn);
 FUNC_6(VAR_7->fcs, VAR_8);

 switch (VAR_8) {
 case 128:
  if (VAR_7->prli_retries < VAR_0) {
   VAR_7->prli_retries++;
   FUNC_6(VAR_7->fcs, VAR_7->prli_retries);
   FUNC_4(VAR_7, VAR_6);
   FUNC_1(VAR_7, ((void*)0));
  } else {

   FUNC_4(VAR_7, VAR_5);
   FUNC_3(VAR_7->rport, VAR_3);
  }
  break;


 case 129:
  FUNC_4(VAR_7, VAR_5);
  FUNC_5(&VAR_7->timer);
  FUNC_3(VAR_7->rport, VAR_2);
  break;

 case 130:
  FUNC_4(VAR_7, VAR_4);
  FUNC_5(&VAR_7->timer);
  FUNC_3(VAR_7->rport, VAR_1);
  break;

 case 131:
  FUNC_4(VAR_7, VAR_5);
  FUNC_5(&VAR_7->timer);
  FUNC_0(VAR_7);
  break;

 default:
  FUNC_2(VAR_7->fcs, VAR_8);
 }
}
