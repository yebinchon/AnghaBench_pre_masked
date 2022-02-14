
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int mnt; int dentry; } ;
struct kstatfs {int f_flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct kstatfs*) ;

int FUNC_2(struct path *VAR_0, struct kstatfs *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->dentry, VAR_1);
 if (!VAR_2)
  VAR_1->f_flags = FUNC_0(VAR_0->mnt);
 return VAR_2;
}
