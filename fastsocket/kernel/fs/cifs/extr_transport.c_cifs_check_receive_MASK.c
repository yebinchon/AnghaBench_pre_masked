
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct mid_q_entry {int resp_buf; scalar_t__ sequence_number; } ;
struct kvec {unsigned int iov_len; int iov_base; } ;
struct TCP_Server_Info {int sec_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct smb_rqst*,struct TCP_Server_Info*,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,unsigned int) ;
 int VAR_2 ;

int
FUNC_6(struct mid_q_entry *VAR_3, struct TCP_Server_Info *VAR_4,
     bool VAR_5)
{
 unsigned int VAR_6 = FUNC_3(VAR_3->resp_buf) + 4;

 FUNC_2(VAR_3->resp_buf, FUNC_5(VAR_2, 92, VAR_6));


 if (VAR_4->sec_mode & (VAR_1 | VAR_0)) {
  struct kvec VAR_7;
  int VAR_8 = 0;
  struct smb_rqst VAR_9 = { .rq_iov = &VAR_7,
      .rq_nvec = 1 };

  VAR_7.iov_base = VAR_3->resp_buf;
  VAR_7.iov_len = VAR_6;

  VAR_8 = FUNC_1(&VAR_9, VAR_4,
        VAR_3->sequence_number + 1);
  if (VAR_8)
   FUNC_0(1, "SMB signature verification returned error = "
          "%d", VAR_8);
 }


 return FUNC_4(VAR_3->resp_buf, VAR_5);
}
