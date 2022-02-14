
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsm_interrupt_info {int aArm_interrupts_pending; int aArm_en_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 struct smsm_interrupt_info* FUNC_2 (int ,int) ;

int FUNC_3(struct smsm_interrupt_info *VAR_4)
{
 struct smsm_interrupt_info *VAR_5;

 VAR_5 = FUNC_2(VAR_2, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0)) {
  FUNC_0("smsm_set_sleep_duration <SM NO INT_INFO>\n");
  return -VAR_0;
 }
 if (VAR_3 & VAR_1)
  FUNC_1("smsm_set_interrupt_info %x %x -> %x %x\n",
         VAR_5->aArm_en_mask, VAR_5->aArm_interrupts_pending,
         VAR_4->aArm_en_mask, VAR_4->aArm_interrupts_pending);
 *VAR_5 = *VAR_4;
 return 0;
}
