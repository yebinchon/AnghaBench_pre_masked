
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int response_code; int queue_empty; } ;
typedef int ap_qid_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ap_queue_status FUNC_0 (int ,unsigned long long*,void*,size_t) ;

int FUNC_1(ap_qid_t VAR_3, unsigned long long *VAR_4, void *VAR_5, size_t VAR_6)
{
 struct ap_queue_status VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 switch (VAR_7.response_code) {
 case 130:
  return 0;
 case 129:
  if (VAR_7.queue_empty)
   return -VAR_2;
  return -VAR_0;
 case 128:
  return -VAR_0;
 default:
  return -VAR_1;
 }
}
