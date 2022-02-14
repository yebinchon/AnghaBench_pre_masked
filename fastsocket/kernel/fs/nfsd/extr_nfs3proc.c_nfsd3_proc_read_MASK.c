
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct svc_rqst {int rq_vec; } ;
struct TYPE_5__ {TYPE_1__* fh_dentry; } ;
struct nfsd3_readres {scalar_t__ count; int eof; TYPE_2__ fh; } ;
struct nfsd3_readargs {scalar_t__ count; scalar_t__ offset; int vlen; int fh; } ;
struct inode {scalar_t__ i_size; } ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,unsigned long,unsigned long) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,TYPE_2__*,scalar_t__,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct svc_rqst*) ;
 int FUNC_6 (struct svc_rqst*,scalar_t__) ;

__attribute__((used)) static __be32
FUNC_7(struct svc_rqst *VAR_1, struct nfsd3_readargs *VAR_2,
            struct nfsd3_readres *VAR_3)
{
 __be32 VAR_4;
 u32 VAR_5 = FUNC_5(VAR_1);

 FUNC_2("nfsd: READ(3) %s %lu bytes at %lu\n",
    FUNC_1(&VAR_2->fh),
    (unsigned long) VAR_2->count,
    (unsigned long) VAR_2->offset);






 VAR_3->count = VAR_2->count;
 if (VAR_5 < VAR_3->count)
  VAR_3->count = VAR_5;

 FUNC_6(VAR_1, ((1 + VAR_0 + 3)<<2) + VAR_3->count +4);

 FUNC_3(&VAR_3->fh, &VAR_2->fh);
 VAR_4 = FUNC_4(VAR_1, &VAR_3->fh,
      VAR_2->offset,
         VAR_1->rq_vec, VAR_2->vlen,
      &VAR_3->count);
 if (VAR_4 == 0) {
  struct inode *VAR_6 = VAR_3->fh.fh_dentry->d_inode;

  VAR_3->eof = (VAR_2->offset + VAR_3->count) >= VAR_6->i_size;
 }

 FUNC_0(VAR_4);
}
