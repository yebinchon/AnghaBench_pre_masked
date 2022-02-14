
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioim_s {int bfa; int hcb_qe; TYPE_1__* iosp; int reqq; int itnim; int io_cbfn; } ;
typedef enum bfa_ioim_event { ____Placeholder_bfa_ioim_event } bfa_ioim_event ;
struct TYPE_2__ {int reqq_wait; int abort_explicit; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,struct bfa_ioim_s*) ;
 int FUNC_1 (struct bfa_ioim_s*) ;
 int FUNC_2 (struct bfa_ioim_s*) ;
 int FUNC_3 (struct bfa_ioim_s*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct bfa_ioim_s*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct bfa_ioim_s*,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_9(struct bfa_ioim_s *VAR_10, enum bfa_ioim_event VAR_11)
{
 switch (VAR_11) {
 case 129:

  FUNC_4(VAR_10);
  if (!FUNC_3(VAR_10)) {
   FUNC_7(VAR_10, VAR_8);
   break;
  }
  FUNC_7(VAR_10, VAR_3);
 break;

 case 130:
  VAR_10->iosp->abort_explicit = VAR_0;
  VAR_10->io_cbfn = VAR_2;

  if (FUNC_2(VAR_10))
   FUNC_7(VAR_10, VAR_4);
  else {
   FUNC_7(VAR_10, VAR_5);
   FUNC_8(VAR_10->itnim, VAR_9);
   FUNC_5(VAR_10->bfa, VAR_10->reqq,
       &VAR_10->iosp->reqq_wait);
  }
 break;

 case 128:
  FUNC_7(VAR_10, VAR_6);
  FUNC_1(VAR_10);
  FUNC_0(VAR_10->bfa, &VAR_10->hcb_qe,
    VAR_2, VAR_10);
  break;

 case 131:



  FUNC_7(VAR_10, VAR_7);
  FUNC_0(VAR_10->bfa, &VAR_10->hcb_qe, VAR_1,
         VAR_10);
  break;

 default:
  FUNC_6(VAR_10->bfa, VAR_11);
 }
}
