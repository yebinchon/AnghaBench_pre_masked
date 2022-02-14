
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct xdr_stream {int nwords; TYPE_2__* buf; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_getaclres {unsigned int acl_len; scalar_t__ acl_data_offset; int acl_flags; } ;
struct TYPE_4__ {scalar_t__ page_len; TYPE_1__* head; } ;
struct TYPE_3__ {unsigned int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xdr_stream*,unsigned int*) ;
 int FUNC_1 (struct xdr_stream*,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct xdr_stream*,int ) ;
 int FUNC_3 (char*,unsigned int,int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (struct xdr_stream*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct xdr_stream*) ;

__attribute__((used)) static int FUNC_8(struct xdr_stream *VAR_5, struct rpc_rqst *VAR_6,
   struct nfs_getaclres *VAR_7)
{
 unsigned int VAR_8;
 uint32_t VAR_9,
   VAR_10[2] = {0};
 int VAR_11;
 unsigned int VAR_12;

 VAR_7->acl_len = 0;
 if ((VAR_11 = FUNC_2(VAR_5, VAR_4)) != 0)
  goto out;

 FUNC_6(VAR_5, VAR_5->buf->page_len);


 VAR_12 = VAR_5->buf->head[0].iov_len;

 if ((VAR_11 = FUNC_0(VAR_5, VAR_10)) != 0)
  goto out;
 if ((VAR_11 = FUNC_1(VAR_5, &VAR_9, &VAR_8)) != 0)
  goto out;

 if (FUNC_5(VAR_10[0] & (VAR_2 - 1U)))
  return -VAR_0;
 if (FUNC_4(VAR_10[0] & VAR_2)) {




  VAR_7->acl_data_offset = FUNC_7(VAR_5) - VAR_12;
  VAR_7->acl_len = VAR_9;


  if (VAR_7->acl_len > (VAR_5->nwords << 2) ||
      VAR_7->acl_len + VAR_7->acl_data_offset > VAR_5->buf->page_len) {
   VAR_7->acl_flags |= VAR_3;
   FUNC_3("NFS: acl reply: attrlen %u > page_len %u\n",
     VAR_9, VAR_5->nwords << 2);
  }
 } else
  VAR_11 = -VAR_1;

out:
 return VAR_11;
}
