
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct kstat {int mode; scalar_t__ size; int ino; int ctime; int mtime; int atime; int rdev; scalar_t__ blocks; int gid; int uid; scalar_t__ nlink; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int *,struct svc_fh*) ;
 int * FUNC_4 (int *,int *) ;
 void* FUNC_5 (int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_6 (struct svc_rqst*,int ) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,int ) ;
 int * FUNC_8 (int *,int) ;

__attribute__((used)) static __be32 *
FUNC_9(struct svc_rqst *VAR_3, __be32 *VAR_4, struct svc_fh *VAR_5,
       struct kstat *VAR_6)
{
 *VAR_4++ = FUNC_5(VAR_2[(VAR_6->mode & VAR_1) >> 12]);
 *VAR_4++ = FUNC_5((u32) VAR_6->mode);
 *VAR_4++ = FUNC_5((u32) VAR_6->nlink);
 *VAR_4++ = FUNC_5((u32) FUNC_7(VAR_3, VAR_6->uid));
 *VAR_4++ = FUNC_5((u32) FUNC_6(VAR_3, VAR_6->gid));
 if (FUNC_2(VAR_6->mode) && VAR_6->size > VAR_0) {
  VAR_4 = FUNC_8(VAR_4, (u64) VAR_0);
 } else {
  VAR_4 = FUNC_8(VAR_4, (u64) VAR_6->size);
 }
 VAR_4 = FUNC_8(VAR_4, ((u64)VAR_6->blocks) << 9);
 *VAR_4++ = FUNC_5((u32) FUNC_0(VAR_6->rdev));
 *VAR_4++ = FUNC_5((u32) FUNC_1(VAR_6->rdev));
 VAR_4 = FUNC_3(VAR_4, VAR_5);
 VAR_4 = FUNC_8(VAR_4, VAR_6->ino);
 VAR_4 = FUNC_4(VAR_4, &VAR_6->atime);
 VAR_4 = FUNC_4(VAR_4, &VAR_6->mtime);
 VAR_4 = FUNC_4(VAR_4, &VAR_6->ctime);

 return VAR_4;
}
