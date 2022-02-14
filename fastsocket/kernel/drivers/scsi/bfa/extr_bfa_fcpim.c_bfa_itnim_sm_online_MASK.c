
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_itnim_s {int bfa; void* is_online; TYPE_1__* rport; } ;
typedef enum bfa_itnim_event { ____Placeholder_bfa_itnim_event } bfa_itnim_event ;
struct TYPE_2__ {int rport_tag; } ;


 void* VAR_0 ;




 int FUNC_0 (struct bfa_itnim_s*) ;
 int FUNC_1 (struct bfa_itnim_s*) ;
 int FUNC_2 (struct bfa_itnim_s*) ;
 int FUNC_3 (struct bfa_itnim_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_itnim_s*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_itnim_s *VAR_5, enum bfa_itnim_event VAR_6)
{
 FUNC_6(VAR_5->bfa, VAR_5->rport->rport_tag);
 FUNC_6(VAR_5->bfa, VAR_6);

 switch (VAR_6) {
 case 129:
  FUNC_5(VAR_5, VAR_2);
  VAR_5->is_online = VAR_0;
  FUNC_2(VAR_5);
  FUNC_0(VAR_5);
  break;

 case 131:
  FUNC_5(VAR_5, VAR_1);
  VAR_5->is_online = VAR_0;
  FUNC_0(VAR_5);
  break;

 case 128:
  FUNC_5(VAR_5, VAR_4);
  VAR_5->is_online = VAR_0;
  FUNC_2(VAR_5);
  FUNC_3(VAR_5);
  break;

 case 130:
  FUNC_5(VAR_5, VAR_3);
  VAR_5->is_online = VAR_0;
  FUNC_2(VAR_5);
  FUNC_1(VAR_5);
  break;

 default:
  FUNC_4(VAR_5->bfa, VAR_6);
 }
}
