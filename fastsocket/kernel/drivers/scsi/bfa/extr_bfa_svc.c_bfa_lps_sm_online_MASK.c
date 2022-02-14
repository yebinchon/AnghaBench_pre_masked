
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_lps_s {int bfa_tag; TYPE_1__* bfa; int wqe; int reqq; } ;
typedef enum bfa_lps_event { ____Placeholder_bfa_lps_event } bfa_lps_event ;
struct TYPE_5__ {int plog; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_lps_s*) ;
 int FUNC_1 (struct bfa_lps_s*) ;
 int FUNC_2 (struct bfa_lps_s*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct bfa_lps_s*,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_9(struct bfa_lps_s *VAR_7, enum bfa_lps_event VAR_8)
{
 FUNC_8(VAR_7->bfa, VAR_7->bfa_tag);
 FUNC_8(VAR_7->bfa, VAR_8);

 switch (VAR_8) {
 case 131:
  if (FUNC_4(VAR_7->bfa, VAR_7->reqq)) {
   FUNC_7(VAR_7, VAR_5);
   FUNC_5(VAR_7->bfa, VAR_7->reqq, &VAR_7->wqe);
  } else {
   FUNC_7(VAR_7, VAR_4);
   FUNC_1(VAR_7);
  }
  FUNC_3(VAR_7->bfa->plog, VAR_2,
   VAR_1, 0, "Logout");
  break;

 case 129:
  FUNC_7(VAR_7, VAR_3);


  FUNC_0(VAR_7);
  FUNC_3(VAR_7->bfa->plog, VAR_2,
   VAR_0, 0, "FCF Clear Virt. Link Rx");
  break;

 case 128:
  if (FUNC_4(VAR_7->bfa, VAR_7->reqq)) {
   FUNC_7(VAR_7, VAR_6);
   FUNC_5(VAR_7->bfa, VAR_7->reqq, &VAR_7->wqe);
  } else
   FUNC_2(VAR_7);
                break;

 case 130:
 case 132:
  FUNC_7(VAR_7, VAR_3);
  break;

 default:
  FUNC_6(VAR_7->bfa, VAR_8);
 }
}
