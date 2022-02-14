
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int len; struct kvec* head; } ;
struct rpc_rqst {TYPE_1__ rq_rcv_buf; } ;
struct nfs_readres {int count; void* eof; int fattr; } ;
struct kvec {size_t iov_len; scalar_t__ iov_base; } ;
typedef int __be32 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct rpc_rqst *VAR_1, __be32 *VAR_2, struct nfs_readres *VAR_3)
{
 struct kvec *VAR_4 = VAR_1->rq_rcv_buf.head;
 size_t VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(*VAR_2++);
 VAR_2 = FUNC_3(VAR_2, VAR_3->fattr);

 if (VAR_9 != 0)
  return FUNC_1(VAR_9);




 VAR_6 = FUNC_2(*VAR_2++);
 VAR_3->eof = FUNC_2(*VAR_2++);
 VAR_7 = FUNC_2(*VAR_2++);

 if (VAR_7 != VAR_6) {
  FUNC_0("NFS: READ count doesn't match RPC opaque count.\n");
  return -VAR_0;
 }

 VAR_5 = (u8 *) VAR_2 - (u8 *) VAR_4->iov_base;
 if (VAR_4->iov_len < VAR_5) {
  FUNC_0("NFS: READ reply header overflowed:"
    "length %Zu > %Zu\n", VAR_5, VAR_4->iov_len);
         return -VAR_0;
 } else if (VAR_4->iov_len != VAR_5) {
  FUNC_0("NFS: READ header is short. iovec will be shifted.\n");
  FUNC_4(&VAR_1->rq_rcv_buf, VAR_4->iov_len - VAR_5);
 }

 VAR_8 = VAR_1->rq_rcv_buf.len - VAR_5;
 if (VAR_6 > VAR_8) {
  FUNC_0("NFS: server cheating in read reply: "
   "count %u > recvd %u\n", VAR_6, VAR_8);
  VAR_6 = VAR_8;
  VAR_3->eof = 0;
 }

 VAR_3->count = VAR_6;

 return VAR_6;
}
