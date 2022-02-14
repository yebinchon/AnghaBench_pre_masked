
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_buf {int flags; int head; int len; } ;
struct rpc_rqst {struct xdr_buf rq_snd_buf; } ;
struct nfs_writeargs {int pgbase; int pages; int fh; int count; int offset; } ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (struct xdr_buf*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct rpc_rqst *VAR_1, __be32 *VAR_2, struct nfs_writeargs *VAR_3)
{
 struct xdr_buf *VAR_4 = &VAR_1->rq_snd_buf;
 u32 VAR_5 = (u32)VAR_3->offset;
 u32 VAR_6 = VAR_3->count;

 VAR_2 = FUNC_2(VAR_2, VAR_3->fh);
 *VAR_2++ = FUNC_0(VAR_5);
 *VAR_2++ = FUNC_0(VAR_5);
 *VAR_2++ = FUNC_0(VAR_6);
 *VAR_2++ = FUNC_0(VAR_6);
 VAR_4->len = FUNC_1(VAR_4->head, VAR_2);


 FUNC_3(VAR_4, VAR_3->pages, VAR_3->pgbase, VAR_6);
 VAR_4->flags |= VAR_0;
 return 0;
}
