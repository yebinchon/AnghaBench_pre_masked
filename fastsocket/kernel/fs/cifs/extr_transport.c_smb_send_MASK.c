
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int dummy; } ;
struct kvec {unsigned int iov_len; struct smb_hdr* iov_base; } ;
struct TCP_Server_Info {int dummy; } ;


 int FUNC_0 (struct TCP_Server_Info*,struct kvec*,int) ;

int
FUNC_1(struct TCP_Server_Info *VAR_0, struct smb_hdr *VAR_1,
  unsigned int VAR_2)
{
 struct kvec VAR_3;

 VAR_3.iov_base = VAR_1;
 VAR_3.iov_len = VAR_2 + 4;

 return FUNC_0(VAR_0, &VAR_3, 1);
}
