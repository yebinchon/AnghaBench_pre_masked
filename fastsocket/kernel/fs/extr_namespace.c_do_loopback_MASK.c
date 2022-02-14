
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {int dentry; int mnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct vfsmount* FUNC_3 (int ,int ,int ) ;
 struct vfsmount* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vfsmount*,struct path*) ;
 int FUNC_7 (char*,int,struct path*) ;
 scalar_t__ FUNC_8 (struct path*) ;
 int FUNC_9 (struct path*) ;
 int VAR_4 ;
 int FUNC_10 (struct path*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_5 ;
 int FUNC_14 (struct vfsmount*,int ,int *) ;
 int FUNC_15 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_16(struct path *VAR_7, char *VAR_8,
    int VAR_9)
{
 struct path VAR_10;
 struct vfsmount *VAR_11 = ((void*)0);
 int VAR_12 = FUNC_9(VAR_7);
 if (VAR_12)
  return VAR_12;
 if (!VAR_8 || !*VAR_8)
  return -VAR_0;
 VAR_12 = FUNC_7(VAR_8, VAR_3|VAR_2, &VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = -VAR_0;
 if (FUNC_8(&VAR_10))
  goto out;

 FUNC_5(&VAR_4);
 VAR_12 = -VAR_0;
 if (FUNC_0(VAR_10.mnt))
  goto out;

 if (!FUNC_2(VAR_7->mnt) || !FUNC_2(VAR_10.mnt))
  goto out;

 VAR_12 = -VAR_1;
 if (VAR_9)
  VAR_11 = FUNC_4(VAR_10.mnt, VAR_10.dentry, 0);
 else
  VAR_11 = FUNC_3(VAR_10.mnt, VAR_10.dentry, 0);

 if (!VAR_11)
  goto out;

 VAR_12 = FUNC_6(VAR_11, VAR_7);
 if (VAR_12) {
  FUNC_1(VAR_5);
  FUNC_12(&VAR_6);
  FUNC_14(VAR_11, 0, &VAR_5);
  FUNC_13(&VAR_6);
  FUNC_11(&VAR_5);
 }

out:
 FUNC_15(&VAR_4);
 FUNC_10(&VAR_10);
 return VAR_12;
}
