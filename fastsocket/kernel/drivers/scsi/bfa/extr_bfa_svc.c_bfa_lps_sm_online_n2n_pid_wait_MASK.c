
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_lps_s {int bfa_tag; TYPE_1__* bfa; int wqe; } ;
typedef enum bfa_lps_event { ____Placeholder_bfa_lps_event } bfa_lps_event ;
struct TYPE_3__ {int plog; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_lps_s*) ;
 int FUNC_1 (struct bfa_lps_s*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct bfa_lps_s*,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_lps_s *VAR_6, enum bfa_lps_event VAR_7)
{
 FUNC_6(VAR_6->bfa, VAR_6->bfa_tag);
 FUNC_6(VAR_6->bfa, VAR_7);

 switch (VAR_7) {
 case 129:
  FUNC_5(VAR_6, VAR_5);
  FUNC_1(VAR_6);
  break;

 case 131:
  FUNC_5(VAR_6, VAR_4);
  FUNC_2(VAR_6->bfa->plog, VAR_2,
   VAR_1, 0, "Logout");
  break;

 case 128:
  FUNC_5(VAR_6, VAR_3);
  FUNC_3(&VAR_6->wqe);


  FUNC_0(VAR_6);
  FUNC_2(VAR_6->bfa->plog, VAR_2,
   VAR_0, 0, "FCF Clear Virt. Link Rx");
  break;

 case 130:
 case 132:
  FUNC_5(VAR_6, VAR_3);
  FUNC_3(&VAR_6->wqe);
  break;

 default:
  FUNC_4(VAR_6->bfa, VAR_7);
 }
}
