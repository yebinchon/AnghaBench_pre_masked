
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct kvec {int dummy; } ;
struct TCP_Server_Info {int dummy; } ;


 int FUNC_0 (struct TCP_Server_Info*,struct smb_rqst*) ;

__attribute__((used)) static int
FUNC_1(struct TCP_Server_Info *VAR_0, struct kvec *VAR_1, int VAR_2)
{
 struct smb_rqst VAR_3 = { .rq_iov = VAR_1,
     .rq_nvec = VAR_2 };

 return FUNC_0(VAR_0, &VAR_3);
}
