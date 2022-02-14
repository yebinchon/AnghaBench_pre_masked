
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct TYPE_2__ {int * val; } ;
struct kstatfs {TYPE_1__ f_fsid; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_bsize; int f_type; } ;
struct hpux_statfs {int * f_fsid; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_bsize; int f_type; } ;


 int FUNC_0 (struct hpux_statfs*,int ,int) ;
 int FUNC_1 (struct path*,struct kstatfs*) ;

__attribute__((used)) static int FUNC_2(struct path *VAR_0, struct hpux_statfs *VAR_1)
{
 struct kstatfs VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->f_type = VAR_2.f_type;
 VAR_1->f_bsize = VAR_2.f_bsize;
 VAR_1->f_blocks = VAR_2.f_blocks;
 VAR_1->f_bfree = VAR_2.f_bfree;
 VAR_1->f_bavail = VAR_2.f_bavail;
 VAR_1->f_files = VAR_2.f_files;
 VAR_1->f_ffree = VAR_2.f_ffree;
 VAR_1->f_fsid[0] = VAR_2.f_fsid.val[0];
 VAR_1->f_fsid[1] = VAR_2.f_fsid.val[1];

 return 0;
}
