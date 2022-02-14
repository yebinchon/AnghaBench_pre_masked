
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct svc_rqst {int dummy; } ;
struct kstatfs {int f_bsize; int f_blocks; int f_bfree; int f_bavail; int f_files; int f_ffree; } ;
struct nfsd3_fsstatres {scalar_t__ status; int invarsec; struct kstatfs stats; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (struct svc_rqst*,int *) ;
 int VAR_0 ;

int
FUNC_3(struct svc_rqst *VAR_1, __be32 *VAR_2,
     struct nfsd3_fsstatres *VAR_3)
{
 struct kstatfs *VAR_4 = &VAR_3->stats;
 u64 VAR_5 = VAR_4->f_bsize;

 *VAR_2++ = VAR_0;

 if (VAR_3->status == 0) {
  VAR_2 = FUNC_1(VAR_2, VAR_5 * VAR_4->f_blocks);
  VAR_2 = FUNC_1(VAR_2, VAR_5 * VAR_4->f_bfree);
  VAR_2 = FUNC_1(VAR_2, VAR_5 * VAR_4->f_bavail);
  VAR_2 = FUNC_1(VAR_2, VAR_4->f_files);
  VAR_2 = FUNC_1(VAR_2, VAR_4->f_ffree);
  VAR_2 = FUNC_1(VAR_2, VAR_4->f_ffree);
  *VAR_2++ = FUNC_0(VAR_3->invarsec);
 }
 return FUNC_2(VAR_1, VAR_2);
}
