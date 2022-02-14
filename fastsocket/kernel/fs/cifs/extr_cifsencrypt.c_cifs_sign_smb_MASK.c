
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int smb_buf_length; } ;
struct kvec {scalar_t__ iov_len; struct smb_hdr* iov_base; } ;
struct TCP_Server_Info {int dummy; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvec*,int,struct TCP_Server_Info*,int *) ;

int FUNC_2(struct smb_hdr *VAR_0, struct TCP_Server_Info *VAR_1,
    __u32 *VAR_2)
{
 struct kvec VAR_3;

 VAR_3.iov_base = VAR_0;
 VAR_3.iov_len = FUNC_0(VAR_0->smb_buf_length) + 4;

 return FUNC_1(&VAR_3, 1, VAR_1,
         VAR_2);
}
