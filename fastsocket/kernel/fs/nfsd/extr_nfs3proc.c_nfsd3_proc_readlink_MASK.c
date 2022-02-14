
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd3_readlinkres {int len; int fh; } ;
struct nfsd3_readlinkargs {int buffer; int fh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct svc_rqst*,int *,int ,int *) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_1, struct nfsd3_readlinkargs *VAR_2,
        struct nfsd3_readlinkres *VAR_3)
{
 __be32 VAR_4;

 FUNC_2("nfsd: READLINK(3) %s\n", FUNC_1(&VAR_2->fh));


 FUNC_3(&VAR_3->fh, &VAR_2->fh);
 VAR_3->len = VAR_0;
 VAR_4 = FUNC_4(VAR_1, &VAR_3->fh, VAR_2->buffer, &VAR_3->len);
 FUNC_0(VAR_4);
}
