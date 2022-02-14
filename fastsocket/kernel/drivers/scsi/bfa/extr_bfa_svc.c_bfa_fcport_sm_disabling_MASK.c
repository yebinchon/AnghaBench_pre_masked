
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_fcport_s {TYPE_1__* bfa; int pwwn; } ;
typedef enum bfa_fcport_sm_event { ____Placeholder_bfa_fcport_sm_event } bfa_fcport_sm_event ;
struct TYPE_3__ {int plog; scalar_t__ bfad; } ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bfa_fcport_s*,int ) ;
 int FUNC_2 (struct bfa_fcport_s*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct bfa_fcport_s*,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcport_s *VAR_11,
      enum bfa_fcport_sm_event VAR_12)
{
 char VAR_13[VAR_3];
 struct bfad_s *VAR_14 = (struct bfad_s *)VAR_11->bfa->bfad;
 FUNC_6(VAR_11->bfa, VAR_12);

 switch (VAR_12) {
 case 132:
  FUNC_5(VAR_11, VAR_5);
  break;

 case 134:



  break;

 case 133:
  if (FUNC_2(VAR_11))
   FUNC_5(VAR_11, VAR_6);
  else
   FUNC_5(VAR_11,
      VAR_7);

  FUNC_3(VAR_11->bfa->plog, VAR_1,
    VAR_0, 0, "Port Enable");
  FUNC_7(VAR_13, VAR_11->pwwn);
  FUNC_0(VAR_4, VAR_14, VAR_10,
   "Base port enabled: WWN = %s\n", VAR_13);
  FUNC_1(VAR_11, VAR_2);
  break;

 case 128:
  FUNC_5(VAR_11, VAR_9);
  break;

 case 129:
 case 130:




  break;

 case 131:
  FUNC_5(VAR_11, VAR_8);
  break;

 default:
  FUNC_4(VAR_11->bfa, VAR_12);
 }
}
