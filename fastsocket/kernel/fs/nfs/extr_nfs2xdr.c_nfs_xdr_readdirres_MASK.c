
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xdr_buf {unsigned int page_len; size_t len; struct page** pages; struct kvec* head; } ;
struct rpc_rqst {struct xdr_buf rq_rcv_buf; } ;
struct page {int dummy; } ;
struct kvec {size_t iov_len; scalar_t__ iov_base; } ;
typedef int __be32 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xdr_buf*,size_t) ;

__attribute__((used)) static int
FUNC_4(struct rpc_rqst *VAR_1, __be32 *VAR_2, void *VAR_3)
{
 struct xdr_buf *VAR_4 = &VAR_1->rq_rcv_buf;
 struct kvec *VAR_5 = VAR_4->head;
 struct page **VAR_6;
 size_t VAR_7;
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 if ((VAR_10 = FUNC_2(*VAR_2++)))
  return FUNC_1(VAR_10);

 VAR_7 = (u8 *) VAR_2 - (u8 *) VAR_5->iov_base;
 if (VAR_5->iov_len < VAR_7) {
  FUNC_0("NFS: READDIR reply header overflowed:"
    "length %Zu > %Zu\n", VAR_7, VAR_5->iov_len);
  return -VAR_0;
 } else if (VAR_5->iov_len != VAR_7) {
  FUNC_0("NFS: READDIR header is short. iovec will be shifted.\n");
  FUNC_3(VAR_4, VAR_5->iov_len - VAR_7);
 }

 VAR_8 = VAR_4->page_len;
 VAR_9 = VAR_4->len - VAR_7;
 if (VAR_8 > VAR_9)
  VAR_8 = VAR_9;
 VAR_6 = VAR_4->pages;
 return VAR_8;
}
