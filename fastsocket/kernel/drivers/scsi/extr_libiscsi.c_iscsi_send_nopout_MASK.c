
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {int dummy; } ;
struct iscsi_nopout {int opcode; void* ttt; void* itt; int lun; int flags; } ;
struct iscsi_nopin {void* ttt; int lun; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {int last_ping; struct iscsi_task* ping_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct iscsi_task* FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 int FUNC_1 (int ,struct iscsi_conn*,char*) ;
 int VAR_5 ;
 int FUNC_2 (struct iscsi_nopout*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct iscsi_conn *VAR_6, struct iscsi_nopin *VAR_7)
{
        struct iscsi_nopout VAR_8;
 struct iscsi_task *VAR_9;

 if (!VAR_7 && VAR_6->ping_task)
  return;

 FUNC_2(&VAR_8, 0, sizeof(struct iscsi_nopout));
 VAR_8.opcode = VAR_2 | VAR_1;
 VAR_8.flags = VAR_0;

 if (VAR_7) {
  VAR_8.lun = VAR_7->lun;
  VAR_8.ttt = VAR_7->ttt;
  VAR_8.itt = VAR_4;
 } else
  VAR_8.ttt = VAR_4;

 VAR_9 = FUNC_0(VAR_6, (struct iscsi_hdr *)&VAR_8, ((void*)0), 0);
 if (!VAR_9)
  FUNC_1(VAR_3, VAR_6, "Could not send nopout\n");
 else if (!VAR_7) {

  VAR_6->ping_task = VAR_9;
  VAR_6->last_ping = VAR_5;
 }
}
