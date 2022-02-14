
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_2__ {int name; scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int FUNC_0 (char*,struct dentry*,int,int ) ;
 scalar_t__ FUNC_1 (struct dentry*,unsigned long,int) ;
 scalar_t__ FUNC_2 (struct vfsmount*,struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (struct dentry*,struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct dentry *FUNC_10(struct vfsmount *VAR_1,
        struct dentry *VAR_2,
        unsigned long VAR_3,
        int VAR_4)
{
 struct dentry *VAR_5;

 FUNC_0("parent %p %.*s",
  VAR_2, (int)VAR_2->d_name.len, VAR_2->d_name.name);

 FUNC_8(&VAR_0);
 for (VAR_5 = VAR_2; VAR_5; VAR_5 = FUNC_6(VAR_5, VAR_2)) {

  if (!FUNC_7(VAR_5))
   continue;

  FUNC_0("dentry %p %.*s",
   VAR_5, (int) VAR_5->d_name.len, VAR_5->d_name.name);

  VAR_5 = FUNC_4(VAR_5);
  FUNC_9(&VAR_0);

  if (FUNC_3(VAR_5)) {

   if (FUNC_2(VAR_1, VAR_5))
    goto cont;


   if (FUNC_1(VAR_5, VAR_3, VAR_4))
    return VAR_5;
  }
cont:
  FUNC_5(VAR_5);
  FUNC_8(&VAR_0);
 }
 FUNC_9(&VAR_0);
 return ((void*)0);
}
