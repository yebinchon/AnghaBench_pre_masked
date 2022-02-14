
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dentry; TYPE_1__* mnt; } ;
struct kstatfs {int f_bavail; unsigned int f_ffree; } ;
struct cachefiles_cache {int bshift; scalar_t__ fstop; unsigned int bstop; scalar_t__ fcull; unsigned int bcull; scalar_t__ frun; unsigned int brun; int flags; TYPE_1__* mnt; } ;
typedef int stats ;
struct TYPE_2__ {int mnt_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct cachefiles_cache*,char*) ;
 int FUNC_3 (struct cachefiles_cache*) ;
 int FUNC_4 (struct kstatfs*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct path*,struct kstatfs*) ;

int FUNC_9(struct cachefiles_cache *VAR_3,
    unsigned VAR_4, unsigned VAR_5)
{
 struct kstatfs VAR_6;
 struct path VAR_7 = {
  .mnt = VAR_3->mnt,
  .dentry = VAR_3->mnt->mnt_root,
 };
 int VAR_8;
 FUNC_4(&VAR_6, 0, sizeof(VAR_6));

 VAR_8 = FUNC_8(&VAR_7, &VAR_6);
 if (VAR_8 < 0) {
  if (VAR_8 == -VAR_1)
   FUNC_2(VAR_3, "statfs failed");
  FUNC_1(" = %d", VAR_8);
  return VAR_8;
 }

 VAR_6.f_bavail >>= VAR_3->bshift;






 if (VAR_6.f_ffree > VAR_4)
  VAR_6.f_ffree -= VAR_4;
 else
  VAR_6.f_ffree = 0;

 if (VAR_6.f_bavail > VAR_5)
  VAR_6.f_bavail -= VAR_5;
 else
  VAR_6.f_bavail = 0;

 VAR_8 = -VAR_2;
 if (VAR_6.f_ffree < VAR_3->fstop ||
     VAR_6.f_bavail < VAR_3->bstop)
  goto begin_cull;

 VAR_8 = 0;
 if (VAR_6.f_ffree < VAR_3->fcull ||
     VAR_6.f_bavail < VAR_3->bcull)
  goto begin_cull;

 if (FUNC_7(VAR_0, &VAR_3->flags) &&
     VAR_6.f_ffree >= VAR_3->frun &&
     VAR_6.f_bavail >= VAR_3->brun &&
     FUNC_5(VAR_0, &VAR_3->flags)
     ) {
  FUNC_0("cease culling");
  FUNC_3(VAR_3);
 }


 return 0;

begin_cull:
 if (!FUNC_6(VAR_0, &VAR_3->flags)) {
  FUNC_0("### CULL CACHE ###");
  FUNC_3(VAR_3);
 }

 FUNC_1(" = %d", VAR_8);
 return VAR_8;
}
