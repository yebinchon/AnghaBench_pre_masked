
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_smp {int hop_ptr; int hop_cnt; scalar_t__ dr_dlid; scalar_t__ dr_slid; } ;
typedef enum smi_forward_action { ____Placeholder_smi_forward_action } smi_forward_action ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ib_smp*) ;

enum smi_forward_action FUNC_1(struct ib_smp *VAR_4)
{
 u8 VAR_5, VAR_6;

 VAR_5 = VAR_4->hop_ptr;
 VAR_6 = VAR_4->hop_cnt;

 if (!FUNC_0(VAR_4)) {

  if (VAR_5 && VAR_5 < VAR_6)
   return VAR_1;


  if (VAR_5 == VAR_6)
   return (VAR_4->dr_dlid == VAR_0 ?
    VAR_3 : VAR_2);


  if (VAR_5 == VAR_6 + 1)
   return VAR_3;
 } else {

  if (2 <= VAR_5 && VAR_5 <= VAR_6)
   return VAR_1;


  if (VAR_5 == 1)
   return (VAR_4->dr_slid != VAR_0 ?
    VAR_3 : VAR_2);
 }
 return VAR_2;
}
