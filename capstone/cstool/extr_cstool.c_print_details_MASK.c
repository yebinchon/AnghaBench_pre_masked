
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int csh ;
typedef int cs_mode ;
struct TYPE_18__ {TYPE_1__* detail; } ;
typedef TYPE_2__ cs_insn ;
typedef int cs_arch ;
struct TYPE_17__ {int groups_count; int * groups; } ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int ,TYPE_2__*) ;
 int FUNC_12 (int ,int ,TYPE_2__*) ;
 int FUNC_13 (int ,TYPE_2__*) ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static void FUNC_15(csh VAR_0, cs_arch VAR_1, cs_mode VAR_2, cs_insn *VAR_3)
{
 switch(VAR_1) {
  case 129:
   FUNC_12(VAR_0, VAR_2, VAR_3);
   break;
  case 140:
   FUNC_1(VAR_0, VAR_3);
   break;
  case 139:
   FUNC_2(VAR_0, VAR_3);
   break;
  case 135:
   FUNC_6(VAR_0, VAR_3);
   break;
  case 133:
   FUNC_8(VAR_0, VAR_3);
   break;
  case 132:
   FUNC_9(VAR_0, VAR_3);
   break;
  case 131:
   FUNC_10(VAR_0, VAR_3);
   break;
  case 128:
   FUNC_13(VAR_0, VAR_3);
   break;
  case 136:
   FUNC_5(VAR_0, VAR_3);
   break;
  case 130:
   FUNC_11(VAR_0, VAR_3);
   break;
  case 137:
   FUNC_4(VAR_0, VAR_3);
   break;
  case 138:
   FUNC_3(VAR_0, VAR_3);
   break;
  case 134:
   FUNC_7(VAR_0, VAR_3);
   break;
  default: break;
 }

 if (VAR_3->detail->groups_count) {
  int VAR_4;

  FUNC_14("\tGroups: ");
  for(VAR_4 = 0; VAR_4 < VAR_3->detail->groups_count; VAR_4++) {
   FUNC_14("%s ", FUNC_0(VAR_0, VAR_3->detail->groups[VAR_4]));
  }
  FUNC_14("\n");
 }

 FUNC_14("\n");
}
