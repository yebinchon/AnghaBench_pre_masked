
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_ioim_s {int bfa; int hcb_qe; TYPE_2__* itnim; int nsges; int qe; TYPE_1__* fcpim; } ;
typedef enum bfa_ioim_event { ____Placeholder_bfa_ioim_event } bfa_ioim_event ;
struct TYPE_5__ {int pending_q; } ;
struct TYPE_4__ {int ioim_comp_q; } ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,struct bfa_ioim_s*) ;
 int FUNC_2 (struct bfa_ioim_s*) ;
 int FUNC_3 (struct bfa_ioim_s*) ;
 int FUNC_4 (struct bfa_ioim_s*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,struct bfa_ioim_s*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct bfa_ioim_s*,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct bfa_ioim_s *VAR_7, enum bfa_ioim_event VAR_8)
{
 switch (VAR_8) {
 case 128:
  if (!FUNC_6(VAR_7->itnim)) {
   if (!FUNC_5(VAR_7->itnim)) {
    FUNC_9(VAR_7, VAR_4);
    FUNC_11(&VAR_7->qe);
    FUNC_10(&VAR_7->qe,
     &VAR_7->fcpim->ioim_comp_q);
    FUNC_1(VAR_7->bfa, &VAR_7->hcb_qe,
      VAR_2, VAR_7);
   } else {
    FUNC_11(&VAR_7->qe);
    FUNC_10(&VAR_7->qe,
     &VAR_7->itnim->pending_q);
   }
   break;
  }

  if (VAR_7->nsges > VAR_0) {
   if (!FUNC_4(VAR_7)) {
    FUNC_9(VAR_7, VAR_6);
    return;
   }
  }

  if (!FUNC_3(VAR_7)) {
   FUNC_9(VAR_7, VAR_5);
   break;
  }

  FUNC_9(VAR_7, VAR_3);
  break;

 case 129:
  FUNC_9(VAR_7, VAR_4);
  FUNC_2(VAR_7);
  FUNC_1(VAR_7->bfa, &VAR_7->hcb_qe,
    VAR_2, VAR_7);
  break;

 case 130:




  FUNC_9(VAR_7, VAR_4);
  FUNC_0(!FUNC_7(&VAR_7->itnim->pending_q, VAR_7));
  FUNC_1(VAR_7->bfa, &VAR_7->hcb_qe,
    VAR_1, VAR_7);
  break;

 default:
  FUNC_8(VAR_7->bfa, VAR_8);
 }
}
