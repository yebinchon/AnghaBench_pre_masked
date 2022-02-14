
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_tskim_s {int tsk_tag; int bfa; int reqq_wait; TYPE_1__* itnim; int tsk_status; } ;
typedef enum bfa_tskim_event { ____Placeholder_bfa_tskim_event } bfa_tskim_event ;
struct TYPE_3__ {int reqq; } ;



 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_tskim_s*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct bfa_tskim_s*) ;
 int FUNC_7 (struct bfa_tskim_s*) ;
 int FUNC_8 (struct bfa_tskim_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9(struct bfa_tskim_s *VAR_5, enum bfa_tskim_event VAR_6)
{
 FUNC_5(VAR_5->bfa, VAR_5->tsk_tag << 16 | VAR_6);

 switch (VAR_6) {
 case 128:
  FUNC_3(VAR_5, VAR_1);
  FUNC_7(VAR_5);





  if (!FUNC_0(VAR_5->itnim)) {
   FUNC_3(VAR_5, VAR_2);
   VAR_5->tsk_status = VAR_0;
   FUNC_6(VAR_5);
   return;
  }

  if (!FUNC_8(VAR_5)) {
   FUNC_3(VAR_5, VAR_3);
   FUNC_4(VAR_5->itnim, VAR_4);
   FUNC_1(VAR_5->bfa, VAR_5->itnim->reqq,
       &VAR_5->reqq_wait);
  }
  break;

 default:
  FUNC_2(VAR_5->bfa, VAR_6);
 }
}
