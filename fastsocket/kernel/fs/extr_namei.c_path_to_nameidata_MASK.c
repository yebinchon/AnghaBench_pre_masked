
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {scalar_t__ mnt; int dentry; } ;
struct TYPE_2__ {scalar_t__ mnt; int dentry; } ;
struct nameidata {TYPE_1__ path; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct path *VAR_0, struct nameidata *VAR_1)
{
 FUNC_0(VAR_1->path.dentry);
 if (VAR_1->path.mnt != VAR_0->mnt)
  FUNC_1(VAR_1->path.mnt);
 VAR_1->path.mnt = VAR_0->mnt;
 VAR_1->path.dentry = VAR_0->dentry;
}
