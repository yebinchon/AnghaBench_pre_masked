
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumf_ctr_info {int act_ctl; int enable_ctl; int auth_ctl; int csvn; int cfvn; } ;
typedef int cf_info ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct cpumf_ctr_info*,int ,int) ;
 int FUNC_4 (char*,int,int ,int ,int ,int ,int ) ;
 int FUNC_5 (char*,int ,struct cpumf_ctr_info*,int) ;
 int FUNC_6 (struct cpumf_ctr_info*) ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 struct cpumf_ctr_info VAR_1;
 unsigned long VAR_2;
 int VAR_3;

 if (!FUNC_0())
  return;

 FUNC_2(VAR_2);

 VAR_3 = FUNC_7();
 FUNC_3(&VAR_1, 0, sizeof(VAR_1));
 if (!FUNC_6(&VAR_1)) {
  FUNC_4("CPU[%i] CPUM_CF: ver=%u.%u A=%04x E=%04x C=%04x\n",
   VAR_3, VAR_1.cfvn, VAR_1.csvn,
   VAR_1.auth_ctl, VAR_1.enable_ctl, VAR_1.act_ctl);
  FUNC_5("CPUMF Query: ", VAR_0,
         &VAR_1, sizeof(VAR_1));
 }

 FUNC_1(VAR_2);
}
