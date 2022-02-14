
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioim_s {int iotag; int bfa; int hcb_qe; TYPE_1__* iosp; int reqq; int itnim; } ;
typedef enum bfa_ioim_event { ____Placeholder_bfa_ioim_event } bfa_ioim_event ;
struct TYPE_2__ {int reqq_wait; int abort_explicit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,struct bfa_ioim_s*) ;
 int FUNC_2 (struct bfa_ioim_s*) ;
 int FUNC_3 (struct bfa_ioim_s*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct bfa_ioim_s*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_9(struct bfa_ioim_s *VAR_9, enum bfa_ioim_event VAR_10)
{
 FUNC_8(VAR_9->bfa, VAR_9->iotag);
 FUNC_8(VAR_9->bfa, VAR_10);

 switch (VAR_10) {
 case 132:
 case 133:
 case 130:
 case 129:
  break;

 case 135:
  FUNC_6(VAR_9, VAR_7);
  FUNC_1(VAR_9->bfa, &VAR_9->hcb_qe, VAR_2,
         VAR_9);
  break;

 case 136:
  FUNC_6(VAR_9, VAR_6);
  FUNC_2(VAR_9);
  FUNC_1(VAR_9->bfa, &VAR_9->hcb_qe, VAR_2,
         VAR_9);
  break;

 case 131:
  FUNC_6(VAR_9, VAR_6);
  FUNC_2(VAR_9);
  FUNC_1(VAR_9->bfa, &VAR_9->hcb_qe, VAR_2,
         VAR_9);
  break;

 case 134:
  FUNC_0(VAR_9->iosp->abort_explicit != VAR_1);
  VAR_9->iosp->abort_explicit = VAR_0;

  if (FUNC_3(VAR_9))
   FUNC_6(VAR_9, VAR_4);
  else {
   FUNC_6(VAR_9, VAR_5);
   FUNC_7(VAR_9->itnim, VAR_8);
   FUNC_4(VAR_9->bfa, VAR_9->reqq,
       &VAR_9->iosp->reqq_wait);
  }
  break;

 case 128:
  FUNC_6(VAR_9, VAR_6);
  FUNC_2(VAR_9);
  FUNC_1(VAR_9->bfa, &VAR_9->hcb_qe, VAR_3,
         VAR_9);
  break;

 default:
  FUNC_5(VAR_9->bfa, VAR_10);
 }
}
