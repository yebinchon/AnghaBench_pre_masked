
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_tm {int dummy; } ;
struct iscsi_task {int dummy; } ;
struct iscsi_session {int age; scalar_t__ state; int lock; int eh_mutex; } ;
struct iscsi_hdr {int dummy; } ;
struct TYPE_3__ {unsigned long data; int function; scalar_t__ expires; } ;
struct iscsi_conn {scalar_t__ tmf_state; TYPE_1__ tmf_timer; int ehwait; int tmfcmd_pdus_cnt; struct iscsi_session* session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iscsi_session*,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct iscsi_task* FUNC_1 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iscsi_conn*,int ) ;
 int FUNC_6 (int ,struct iscsi_conn*,char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int FUNC_13(struct iscsi_conn *VAR_10,
       struct iscsi_tm *VAR_11, int VAR_12,
       int VAR_13)
{
 struct iscsi_session *VAR_14 = VAR_10->session;
 struct iscsi_task *VAR_15;

 VAR_15 = FUNC_1(VAR_10, (struct iscsi_hdr *)VAR_11,
          ((void*)0), 0);
 if (!VAR_15) {
  FUNC_11(&VAR_14->lock);
  FUNC_6(VAR_5, VAR_10, "Could not send TMF.\n");
  FUNC_5(VAR_10, VAR_3);
  FUNC_10(&VAR_14->lock);
  return -VAR_1;
 }
 VAR_10->tmfcmd_pdus_cnt++;
 VAR_10->tmf_timer.expires = VAR_13 * VAR_2 + VAR_9;
 VAR_10->tmf_timer.function = VAR_8;
 VAR_10->tmf_timer.data = (unsigned long)VAR_10;
 FUNC_2(&VAR_10->tmf_timer);
 FUNC_0(VAR_14, "tmf set timeout\n");

 FUNC_11(&VAR_14->lock);
 FUNC_8(&VAR_14->eh_mutex);
 FUNC_12(VAR_10->ehwait, VAR_12 != VAR_14->age ||
     VAR_14->state != VAR_4 ||
     VAR_10->tmf_state != VAR_6);
 if (FUNC_9(VAR_7))
  FUNC_4(VAR_7);
 FUNC_3(&VAR_10->tmf_timer);

 FUNC_7(&VAR_14->eh_mutex);
 FUNC_10(&VAR_14->lock);

 if (VAR_12 != VAR_14->age ||
     VAR_14->state != VAR_4)
  return -VAR_0;
 return 0;
}
