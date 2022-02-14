
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {size_t len; TYPE_1__* tail; TYPE_1__* head; } ;
struct rpc_rqst {struct xdr_buf rq_snd_buf; } ;
struct nfs_symlinkargs {int sattr; int pathlen; int pages; int fromlen; int fromname; int fromfh; } ;
typedef int __be32 ;
struct TYPE_2__ {size_t iov_len; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (struct xdr_buf*,int ,int ,int ) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs_symlinkargs *VAR_2)
{
 struct xdr_buf *VAR_3 = &VAR_0->rq_snd_buf;
 size_t VAR_4;

 VAR_1 = FUNC_3(VAR_1, VAR_2->fromfh);
 VAR_1 = FUNC_2(VAR_1, VAR_2->fromname, VAR_2->fromlen);
 *VAR_1++ = FUNC_0(VAR_2->pathlen);
 VAR_3->len = FUNC_1(VAR_3->head, VAR_1);

 FUNC_4(VAR_3, VAR_2->pages, 0, VAR_2->pathlen);






 VAR_4 = VAR_3->tail->iov_len;
 if (VAR_4 > 0)
  VAR_1++;
 VAR_1 = FUNC_5(VAR_1, VAR_2->sattr);
 VAR_3->len += FUNC_1(VAR_3->tail, VAR_1) - VAR_4;
 return 0;
}
