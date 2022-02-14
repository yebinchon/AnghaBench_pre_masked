
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int lock; } ;
struct iscsi_conn {scalar_t__ tmf_state; int ehwait; struct iscsi_session* session; } ;


 int FUNC_0 (struct iscsi_session*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct iscsi_conn *VAR_3 = (struct iscsi_conn *)VAR_2;
 struct iscsi_session *VAR_4 = VAR_3->session;

 FUNC_1(&VAR_4->lock);
 if (VAR_3->tmf_state == VAR_0) {
  VAR_3->tmf_state = VAR_1;
  FUNC_0(VAR_4, "tmf timedout\n");

  FUNC_3(&VAR_3->ehwait);
 }
 FUNC_2(&VAR_4->lock);
}
