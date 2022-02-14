
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd3_symlinkargs {int attrs; int tlen; int tname; int flen; int fname; int ffh; } ;
struct nfsd3_diropres {int fh; int dirfh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct svc_rqst*,int *,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static __be32
FUNC_6(struct svc_rqst *VAR_1, struct nfsd3_symlinkargs *VAR_2,
        struct nfsd3_diropres *VAR_3)
{
 __be32 VAR_4;

 FUNC_2("nfsd: SYMLINK(3)  %s %.*s -> %.*s\n",
    FUNC_1(&VAR_2->ffh),
    VAR_2->flen, VAR_2->fname,
    VAR_2->tlen, VAR_2->tname);

 FUNC_3(&VAR_3->dirfh, &VAR_2->ffh);
 FUNC_4(&VAR_3->fh, VAR_0);
 VAR_4 = FUNC_5(VAR_1, &VAR_3->dirfh, VAR_2->fname, VAR_2->flen,
         VAR_2->tname, VAR_2->tlen,
         &VAR_3->fh, &VAR_2->attrs);
 FUNC_0(VAR_4);
}
