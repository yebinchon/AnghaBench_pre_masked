
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct xdr_buf {size_t page_len; size_t len; struct kvec* head; } ;
struct rpc_rqst {struct xdr_buf rq_rcv_buf; } ;
struct nfs_fattr {int dummy; } ;
struct kvec {size_t iov_len; scalar_t__ iov_base; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int * FUNC_3 (int *,struct nfs_fattr*) ;
 int FUNC_4 (struct xdr_buf*,size_t) ;
 int FUNC_5 (struct xdr_buf*,size_t) ;

__attribute__((used)) static int
FUNC_6(struct rpc_rqst *VAR_3, __be32 *VAR_4, struct nfs_fattr *VAR_5)
{
 struct xdr_buf *VAR_6 = &VAR_3->rq_rcv_buf;
 struct kvec *VAR_7 = VAR_6->head;
 size_t VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(*VAR_4++);
 VAR_4 = FUNC_3(VAR_4, VAR_5);

 if (VAR_11 != 0)
  return FUNC_1(VAR_11);


 VAR_9 = FUNC_2(*VAR_4++);
 if (VAR_9 >= VAR_6->page_len) {
  FUNC_0("nfs: server returned giant symlink!\n");
  return -VAR_1;
 }

 VAR_8 = (u8 *) VAR_4 - (u8 *) VAR_7->iov_base;
 if (VAR_7->iov_len < VAR_8) {
  FUNC_0("NFS: READLINK reply header overflowed:"
    "length %Zu > %Zu\n", VAR_8, VAR_7->iov_len);
  return -VAR_2;
 } else if (VAR_7->iov_len != VAR_8) {
  FUNC_0("NFS: READLINK header is short. "
   "iovec will be shifted.\n");
  FUNC_4(VAR_6, VAR_7->iov_len - VAR_8);
 }
 VAR_10 = VAR_3->rq_rcv_buf.len - VAR_8;
 if (VAR_10 < VAR_9) {
  FUNC_0("NFS: server cheating in readlink reply: "
    "count %u > recvd %u\n", VAR_9, VAR_10);
  return -VAR_0;
 }

 FUNC_5(VAR_6, VAR_9);
 return 0;
}
