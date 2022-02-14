
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct smb_hdr {int Flags2; } ;
struct mid_q_entry {int sequence_number; } ;
struct TCP_Server_Info {int sec_mode; } ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 struct mid_q_entry* FUNC_0 (struct smb_hdr*,struct TCP_Server_Info*) ;
 int FUNC_1 (struct mid_q_entry*) ;
 int VAR_0 ;
 struct mid_q_entry* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct smb_rqst*,struct TCP_Server_Info*,int *) ;

struct mid_q_entry *
FUNC_4(struct TCP_Server_Info *VAR_4, struct smb_rqst *VAR_5)
{
 int VAR_6;
 struct smb_hdr *VAR_7 = (struct smb_hdr *)VAR_5->rq_iov[0].iov_base;
 struct mid_q_entry *VAR_8;


 if (VAR_4->sec_mode & (VAR_2 | VAR_1))
  VAR_7->Flags2 |= VAR_3;

 VAR_8 = FUNC_0(VAR_7, VAR_4);
 if (VAR_8 == ((void*)0))
  return FUNC_2(-VAR_0);

 VAR_6 = FUNC_3(VAR_5, VAR_4, &VAR_8->sequence_number);
 if (VAR_6) {
  FUNC_1(VAR_8);
  return FUNC_2(VAR_6);
 }

 return VAR_8;
}
