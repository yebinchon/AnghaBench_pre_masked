
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct smi_info {scalar_t__ si_state; int si_lock; scalar_t__ thread; int si_timer; scalar_t__ last_timeout_jiffies; int * curr_msg; int xmit_msgs; int hp_xmit_msgs; scalar_t__ run_to_completion; int stop_operation; } ;
struct ipmi_smi_msg {int* rsp; int* data; int rsp_size; int link; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct smi_info*,struct ipmi_smi_msg*) ;
 int FUNC_2 (struct timeval*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct smi_info*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct smi_info*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void FUNC_12(void *VAR_6,
     struct ipmi_smi_msg *VAR_7,
     int VAR_8)
{
 struct smi_info *VAR_9 = VAR_6;
 enum si_sm_result VAR_10;
 unsigned long VAR_11;




 if (FUNC_0(&VAR_9->stop_operation)) {
  VAR_7->rsp[0] = VAR_7->data[0] | 4;
  VAR_7->rsp[1] = VAR_7->data[1];
  VAR_7->rsp[2] = VAR_0;
  VAR_7->rsp_size = 3;
  FUNC_1(VAR_9, VAR_7);
  return;
 }






 if (VAR_9->run_to_completion) {
  FUNC_3(&(VAR_7->link), &(VAR_9->xmit_msgs));

  VAR_10 = FUNC_6(VAR_9, 0);
  while (VAR_10 != VAR_3) {
   FUNC_10(VAR_2);
   VAR_10 = FUNC_6(VAR_9,
         VAR_2);
  }
  return;
 }

 FUNC_7(&VAR_9->si_lock, VAR_11);
 if (VAR_8 > 0)
  FUNC_3(&VAR_7->link, &VAR_9->hp_xmit_msgs);
 else
  FUNC_3(&VAR_7->link, &VAR_9->xmit_msgs);

 if (VAR_9->si_state == VAR_1 && VAR_9->curr_msg == ((void*)0)) {






  VAR_9->last_timeout_jiffies = VAR_5;

  FUNC_4(&VAR_9->si_timer, VAR_5 + VAR_4);

  if (VAR_9->thread)
   FUNC_11(VAR_9->thread);

  FUNC_9(VAR_9);
  FUNC_6(VAR_9, 0);
 }
 FUNC_8(&VAR_9->si_lock, VAR_11);
}
