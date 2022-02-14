
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_vec; } ;
struct nfsd3_writeres {unsigned long count; scalar_t__ committed; int fh; } ;
struct nfsd3_writeargs {unsigned long len; int vlen; scalar_t__ offset; scalar_t__ stable; int fh; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,unsigned long,unsigned long,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct svc_rqst*,int *,int *,scalar_t__,int ,int ,unsigned long*,scalar_t__*) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_0, struct nfsd3_writeargs *VAR_1,
      struct nfsd3_writeres *VAR_2)
{
 __be32 VAR_3;
 unsigned long VAR_4 = VAR_1->len;

 FUNC_2("nfsd: WRITE(3)    %s %d bytes at %ld%s\n",
    FUNC_1(&VAR_1->fh),
    VAR_1->len,
    (unsigned long) VAR_1->offset,
    VAR_1->stable? " stable" : "");

 FUNC_3(&VAR_2->fh, &VAR_1->fh);
 VAR_2->committed = VAR_1->stable;
 VAR_3 = FUNC_4(VAR_0, &VAR_2->fh, ((void*)0),
       VAR_1->offset,
       VAR_0->rq_vec, VAR_1->vlen,
       &VAR_4,
       &VAR_2->committed);
 VAR_2->count = VAR_4;
 FUNC_0(VAR_3);
}
