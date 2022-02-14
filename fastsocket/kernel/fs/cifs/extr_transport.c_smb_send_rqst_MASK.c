
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct socket {int dummy; } ;
struct smb_rqst {int rq_nvec; unsigned int rq_npages; int * rq_pages; struct kvec* rq_iov; } ;
struct kvec {int iov_len; int iov_base; } ;
struct TCP_Server_Info {int tcpStatus; struct socket* ssocket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,unsigned long,unsigned int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*,unsigned int,...) ;
 int FUNC_3 (struct smb_rqst*,unsigned int,struct kvec*) ;
 int FUNC_4 (int ,int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (struct socket*,int ,int ,char*,int) ;
 int FUNC_7 (int ) ;
 unsigned long FUNC_8 (struct smb_rqst*) ;
 int FUNC_9 (struct TCP_Server_Info*,struct kvec*,int,size_t*) ;

__attribute__((used)) static int
FUNC_10(struct TCP_Server_Info *VAR_6, struct smb_rqst *VAR_7)
{
 int VAR_8;
 struct kvec *VAR_9 = VAR_7->rq_iov;
 int VAR_10 = VAR_7->rq_nvec;
 unsigned int VAR_11 = FUNC_5(VAR_9[0].iov_base);
 unsigned long VAR_12;
 unsigned int VAR_13;
 size_t VAR_14 = 0, VAR_15;
 struct socket *VAR_16 = VAR_6->ssocket;
 int VAR_17 = 1;

 if (VAR_16 == ((void*)0))
  return -VAR_3;


 VAR_12 = FUNC_8(VAR_7);
 if (VAR_12 != VAR_11 + 4) {
  FUNC_0(1, "Send length mismatch(send_length=%lu smb_buf_length=%u)\n", VAR_12, VAR_11);
  return -VAR_2;
 }

 FUNC_2(1, "Sending smb: smb_len=%u", VAR_11);
 FUNC_4(VAR_9[0].iov_base, VAR_9[0].iov_len);


 FUNC_6(VAR_16, VAR_4, VAR_5,
    (char *)&VAR_17, sizeof(VAR_17));

 VAR_8 = FUNC_9(VAR_6, VAR_9, VAR_10, &VAR_15);
 if (VAR_8 < 0)
  goto uncork;

 VAR_14 += VAR_15;


 for (VAR_13 = 0; VAR_13 < VAR_7->rq_npages; VAR_13++) {
  struct kvec VAR_18;

  FUNC_3(VAR_7, VAR_13, &VAR_18);
  VAR_8 = FUNC_9(VAR_6, &VAR_18, 1, &VAR_15);
  FUNC_7(VAR_7->rq_pages[VAR_13]);
  if (VAR_8 < 0)
   break;

  VAR_14 += VAR_15;
 }

uncork:

 VAR_17 = 0;
 FUNC_6(VAR_16, VAR_4, VAR_5,
    (char *)&VAR_17, sizeof(VAR_17));

 if ((VAR_14 > 0) && (VAR_14 != VAR_11 + 4)) {
  FUNC_2(1, "partial send (wanted=%u sent=%zu): terminating "
   "session", VAR_11 + 4, VAR_14);





  VAR_6->tcpStatus = VAR_0;
 }

 if (VAR_8 < 0 && VAR_8 != -VAR_1)
  FUNC_1(1, "Error %d sending data on socket to server", VAR_8);
 else
  VAR_8 = 0;

 return VAR_8;
}
