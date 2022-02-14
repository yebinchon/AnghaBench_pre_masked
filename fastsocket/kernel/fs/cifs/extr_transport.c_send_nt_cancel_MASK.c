
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int Mid; int smb_buf_length; scalar_t__ WordCount; int Command; } ;
struct mid_q_entry {int sequence_number; } ;
struct TCP_Server_Info {int srv_mutex; int sequence_number; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ,int) ;
 int FUNC_2 (struct smb_hdr*,struct TCP_Server_Info*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct smb_hdr*) ;
 int FUNC_7 (struct TCP_Server_Info*,struct smb_hdr*,int ) ;

__attribute__((used)) static int
FUNC_8(struct TCP_Server_Info *VAR_1, struct smb_hdr *VAR_2,
  struct mid_q_entry *VAR_3)
{
 int VAR_4 = 0;


 VAR_2->smb_buf_length = FUNC_3(sizeof(struct smb_hdr) - 4 + 2);
 VAR_2->Command = VAR_0;
 VAR_2->WordCount = 0;
 FUNC_6(0, VAR_2);

 FUNC_4(&VAR_1->srv_mutex);
 VAR_4 = FUNC_2(VAR_2, VAR_1, &VAR_3->sequence_number);
 if (VAR_4) {
  FUNC_5(&VAR_1->srv_mutex);
  return VAR_4;
 }






 --VAR_1->sequence_number;
 VAR_4 = FUNC_7(VAR_1, VAR_2, FUNC_0(VAR_2->smb_buf_length));
 if (VAR_4 < 0)
  VAR_1->sequence_number--;

 FUNC_5(&VAR_1->srv_mutex);

 FUNC_1(1, "issued NT_CANCEL for mid %u, rc = %d",
  VAR_2->Mid, VAR_4);

 return VAR_4;
}
