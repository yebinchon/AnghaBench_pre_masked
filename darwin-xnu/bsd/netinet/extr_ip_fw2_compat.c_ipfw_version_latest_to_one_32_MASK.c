
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_compat_32 {int timestamp; int fw_bcnt; int fw_pcnt; int fw_number; int context; int version; } ;
struct ip_fw_32 {int timestamp; int bcnt; int pcnt; int rulenum; int context; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ip_fw_compat_32*,int) ;
 int FUNC_2 (struct ip_fw_32*,struct ip_fw_compat_32*) ;
 int FUNC_3 (struct ip_fw_32*,struct ip_fw_compat_32*) ;
 int FUNC_4 (struct ip_fw_compat_32*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct ip_fw_32 *VAR_2, struct ip_fw_compat_32 *VAR_3)
{
 if (!VAR_3)
  return;

 FUNC_1(VAR_3, sizeof(struct ip_fw_compat_32));

 VAR_3->version = VAR_0;
 VAR_3->context = FUNC_0(VAR_1,VAR_2->context);
 VAR_3->fw_number = VAR_2->rulenum;
 VAR_3->fw_pcnt = VAR_2->pcnt;
 VAR_3->fw_bcnt = VAR_2->bcnt;
 VAR_3->timestamp = VAR_2->timestamp;


 FUNC_2(VAR_2, VAR_3);


 FUNC_3(VAR_2, VAR_3);




}
