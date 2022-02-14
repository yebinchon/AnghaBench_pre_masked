
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_fcport_s {TYPE_1__* bfa; int reqq_wait; int pwwn; } ;
typedef enum bfa_fcport_sm_event { ____Placeholder_bfa_fcport_sm_event } bfa_fcport_sm_event ;
struct TYPE_3__ {int plog; scalar_t__ bfad; } ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bfa_fcport_s*,int ) ;
 int FUNC_2 (struct bfa_fcport_s*) ;
 int FUNC_3 (struct bfa_fcport_s*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ,int ,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct bfa_fcport_s*,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static void
FUNC_10(struct bfa_fcport_s *VAR_12,
    enum bfa_fcport_sm_event VAR_13)
{
 char VAR_14[VAR_4];
 struct bfad_s *VAR_15 = (struct bfad_s *)VAR_12->bfa->bfad;
 FUNC_8(VAR_12->bfa, VAR_13);

 switch (VAR_13) {
 case 129:
  FUNC_7(VAR_12, VAR_7);
  FUNC_3(VAR_12);
  break;

 case 128:
  FUNC_5(&VAR_12->reqq_wait);
  FUNC_7(VAR_12, VAR_10);
  break;

 case 134:



  break;

 case 135:




  FUNC_7(VAR_12, VAR_6);
  FUNC_5(&VAR_12->reqq_wait);
  FUNC_4(VAR_12->bfa->plog, VAR_1,
    VAR_0, 0, "Port Disable");
  FUNC_9(VAR_14, VAR_12->pwwn);
  FUNC_0(VAR_5, VAR_15, VAR_11,
   "Base port disabled: WWN = %s\n", VAR_14);
  FUNC_1(VAR_12, VAR_2);
  break;

 case 130:
 case 131:




  break;

 case 132:
  FUNC_5(&VAR_12->reqq_wait);
  FUNC_7(VAR_12, VAR_9);
  break;

 case 133:
  FUNC_2(VAR_12);
  FUNC_1(VAR_12, VAR_3);
  FUNC_7(VAR_12, VAR_8);
  break;

 default:
  FUNC_6(VAR_12->bfa, VAR_13);
 }
}
