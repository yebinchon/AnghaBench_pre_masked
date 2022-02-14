
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ib_smp {scalar_t__ hop_ptr; scalar_t__ hop_cnt; int* initial_path; scalar_t__ dr_dlid; int* return_path; scalar_t__ dr_slid; } ;
typedef enum smi_action { ____Placeholder_smi_action } smi_action ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ib_smp*) ;

enum smi_action FUNC_1(struct ib_smp *VAR_5,
           u8 VAR_6, int VAR_7)
{
 u8 VAR_8, VAR_9;

 VAR_8 = VAR_5->hop_ptr;
 VAR_9 = VAR_5->hop_cnt;



 if (VAR_9 >= VAR_3)
  return VAR_1;

 if (!FUNC_0(VAR_5)) {

  if (VAR_9 && VAR_8 == 0) {
   VAR_5->hop_ptr++;
   return (VAR_5->initial_path[VAR_5->hop_ptr] ==
    VAR_7 ? VAR_2 : VAR_1);
  }


  if (VAR_8 && VAR_8 < VAR_9) {
   if (VAR_6 != VAR_4)
    return VAR_1;


   VAR_5->hop_ptr++;
   return (VAR_5->initial_path[VAR_5->hop_ptr] ==
    VAR_7 ? VAR_2 : VAR_1);
  }


  if (VAR_8 == VAR_9) {

   VAR_5->hop_ptr++;
   return (VAR_6 == VAR_4 ||
    VAR_5->dr_dlid == VAR_0 ?
    VAR_2 : VAR_1);
  }



  return (VAR_8 == VAR_9 + 1 ? VAR_2 : VAR_1);

 } else {

  if (VAR_9 && VAR_8 == VAR_9 + 1) {
   VAR_5->hop_ptr--;
   return (VAR_5->return_path[VAR_5->hop_ptr] ==
    VAR_7 ? VAR_2 : VAR_1);
  }


  if (2 <= VAR_8 && VAR_8 <= VAR_9) {
   if (VAR_6 != VAR_4)
    return VAR_1;

   VAR_5->hop_ptr--;
   return (VAR_5->return_path[VAR_5->hop_ptr] ==
    VAR_7 ? VAR_2 : VAR_1);
  }


  if (VAR_8 == 1) {
   VAR_5->hop_ptr--;

   return (VAR_6 == VAR_4 ||
    VAR_5->dr_slid == VAR_0 ?
    VAR_2 : VAR_1);
  }


  if (VAR_8 == 0)
   return VAR_2;


  return VAR_1;
 }
}
