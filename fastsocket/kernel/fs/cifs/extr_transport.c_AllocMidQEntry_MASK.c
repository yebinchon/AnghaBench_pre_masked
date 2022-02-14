
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_hdr {int Command; int Mid; } ;
struct mid_q_entry {int mid_state; TYPE_1__* callback_data; int callback; int when_alloc; int command; int pid; int mid; } ;
struct TCP_Server_Info {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 struct mid_q_entry* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mid_q_entry*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

struct mid_q_entry *
FUNC_6(const struct smb_hdr *VAR_7, struct TCP_Server_Info *VAR_8)
{
 struct mid_q_entry *VAR_9;

 if (VAR_8 == ((void*)0)) {
  FUNC_1(1, "Null TCP session in AllocMidQEntry");
  return ((void*)0);
 }

 VAR_9 = FUNC_4(VAR_2, VAR_0);
 if (VAR_9 == ((void*)0))
  return VAR_9;
 else {
  FUNC_5(VAR_9, 0, sizeof(struct mid_q_entry));
  VAR_9->mid = VAR_7->Mid;
  VAR_9->pid = VAR_3->pid;
  VAR_9->command = FUNC_3(VAR_7->Command);
  FUNC_2(1, "For smb_command %d", VAR_7->Command);


  VAR_9->when_alloc = VAR_4;





  VAR_9->callback = VAR_6;
  VAR_9->callback_data = VAR_3;
 }

 FUNC_0(&VAR_5);
 VAR_9->mid_state = VAR_1;
 return VAR_9;
}
