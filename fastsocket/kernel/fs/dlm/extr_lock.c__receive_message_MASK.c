
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {int m_type; int m_result; int m_remid; int m_lkid; TYPE_1__ m_header; } ;
struct dlm_ls {int dummy; } ;
 int FUNC_0 () ;
 int FUNC_1 (struct dlm_ls*,int ) ;
 int FUNC_2 (struct dlm_ls*,char*,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct dlm_ls*,char*,int) ;
 int FUNC_4 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_5 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_6 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_7 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_8 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_9 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_10 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_11 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_12 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_13 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_14 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_15 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_16 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_17 (struct dlm_ls*,struct dlm_message*) ;

__attribute__((used)) static void FUNC_18(struct dlm_ls *VAR_0, struct dlm_message *VAR_1)
{
 if (!FUNC_1(VAR_0, VAR_1->m_header.h_nodeid)) {
  FUNC_2(VAR_0, "ignore non-member message %d from %d %x %x %d",
     VAR_1->m_type, VAR_1->m_header.h_nodeid, VAR_1->m_lkid,
     VAR_1->m_remid, VAR_1->m_result);
  return;
 }

 switch (VAR_1->m_type) {



 case 131:
  FUNC_14(VAR_0, VAR_1);
  break;

 case 138:
  FUNC_7(VAR_0, VAR_1);
  break;

 case 129:
  FUNC_16(VAR_0, VAR_1);
  break;

 case 140:
  FUNC_5(VAR_0, VAR_1);
  break;



 case 130:
  FUNC_15(VAR_0, VAR_1);
  break;

 case 137:
  FUNC_8(VAR_0, VAR_1);
  break;

 case 128:
  FUNC_17(VAR_0, VAR_1);
  break;

 case 139:
  FUNC_6(VAR_0, VAR_1);
  break;



 case 136:
  FUNC_9(VAR_0, VAR_1);
  break;

 case 141:
  FUNC_4(VAR_0, VAR_1);
  break;



 case 135:
  FUNC_10(VAR_0, VAR_1);
  break;

 case 132:
  FUNC_13(VAR_0, VAR_1);
  break;



 case 134:
  FUNC_11(VAR_0, VAR_1);
  break;



 case 133:
  FUNC_12(VAR_0, VAR_1);
  break;

 default:
  FUNC_3(VAR_0, "unknown message type %d", VAR_1->m_type);
 }

 FUNC_0();
}
