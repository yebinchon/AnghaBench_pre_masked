
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_2__ {int name; scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct autofs_info {int last_used; } ;


 int FUNC_0 (char*,struct dentry*,int,int ) ;
 int FUNC_1 (struct dentry*,unsigned long,int) ;
 struct autofs_info* FUNC_2 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_3 (struct vfsmount*) ;

__attribute__((used)) static int FUNC_4(struct vfsmount *VAR_1,
    struct dentry *VAR_2,
    unsigned long VAR_3,
    int VAR_4)
{
 FUNC_0("top %p %.*s",
  VAR_2, (int) VAR_2->d_name.len, VAR_2->d_name.name);


 if (!FUNC_3(VAR_1)) {
  struct autofs_info *VAR_5 = FUNC_2(VAR_2);
  if (VAR_5)
   VAR_5->last_used = VAR_0;
  return 1;
 }


 if (!FUNC_1(VAR_2, VAR_3, VAR_4))
  return 1;

 return 0;
}
