
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_recv_msg {int link; } ;
struct ipmi_file_private {int recv_msg_lock; int fasync_queue; int wait; int recv_msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ipmi_recv_msg *VAR_2,
     void *VAR_3)
{
 struct ipmi_file_private *VAR_4 = VAR_3;
 int VAR_5;
 unsigned long VAR_6;

 FUNC_3(&(VAR_4->recv_msg_lock), VAR_6);

 VAR_5 = FUNC_2(&(VAR_4->recv_msgs));
 FUNC_1(&(VAR_2->link), &(VAR_4->recv_msgs));

 if (VAR_5) {
  FUNC_5(&VAR_4->wait);
  FUNC_0(&VAR_4->fasync_queue, VAR_1, VAR_0);
 }

 FUNC_4(&(VAR_4->recv_msg_lock), VAR_6);
}
