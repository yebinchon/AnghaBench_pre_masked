
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_5__ {int name; } ;
struct dentry {int d_sb; TYPE_2__* d_inode; TYPE_1__ d_name; } ;
struct afs_super_info {TYPE_4__* volume; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__* cell; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {size_t i_size; int i_mapping; } ;


 scalar_t__ VAR_0 ;
 struct afs_super_info* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vfsmount* FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int) ;
 int VAR_7 ;
 int FUNC_9 (unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;
 char* FUNC_11 (struct page*,int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (struct page*) ;
 struct page* FUNC_15 (int ,int ,int *) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,int ) ;
 struct vfsmount* FUNC_18 (int *,int ,char*,char*) ;

__attribute__((used)) static struct vfsmount *FUNC_19(struct dentry *VAR_8)
{
 struct afs_super_info *VAR_9;
 struct vfsmount *VAR_10;
 struct page *VAR_11 = ((void*)0);
 size_t VAR_12;
 char *VAR_13, *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 int VAR_16;

 FUNC_7("{%s}", VAR_8->d_name.name);

 FUNC_1(!VAR_8->d_inode);

 VAR_16 = -VAR_1;
 VAR_12 = VAR_8->d_inode->i_size;
 if (VAR_12 > VAR_6 - 1)
  goto error;

 VAR_16 = -VAR_3;
 VAR_14 = (char *) FUNC_10(VAR_4);
 if (!VAR_14)
  goto error;

 VAR_15 = (char *) FUNC_10(VAR_4);
 if (!VAR_15)
  goto error;


 VAR_11 = FUNC_15(VAR_8->d_inode->i_mapping, 0, ((void*)0));
 if (FUNC_3(VAR_11)) {
  VAR_16 = FUNC_4(VAR_11);
  goto error;
 }

 VAR_16 = -VAR_2;
 if (FUNC_5(VAR_11))
  goto error;

 VAR_13 = FUNC_11(VAR_11, VAR_5);
 FUNC_13(VAR_14, VAR_13, VAR_12);
 FUNC_12(VAR_13, VAR_5);
 FUNC_14(VAR_11);
 VAR_11 = ((void*)0);


 VAR_9 = FUNC_0(VAR_8->d_sb);
 FUNC_13(VAR_15, "cell=", 5);
 FUNC_17(VAR_15 + 5, VAR_9->volume->cell->name);
 if (VAR_9->volume->type == VAR_0)
  FUNC_16(VAR_15, ",rwpath");


 FUNC_6("--- attempting mount %s -o %s ---", VAR_14, VAR_15);
 VAR_10 = FUNC_18(&VAR_7, 0, VAR_14, VAR_15);
 FUNC_6("--- mount result %p ---", VAR_10);

 FUNC_9((unsigned long) VAR_14);
 FUNC_9((unsigned long) VAR_15);
 FUNC_8(" = %p", VAR_10);
 return VAR_10;

error:
 if (VAR_11)
  FUNC_14(VAR_11);
 if (VAR_14)
  FUNC_9((unsigned long) VAR_14);
 if (VAR_15)
  FUNC_9((unsigned long) VAR_15);
 FUNC_8(" = %d", VAR_16);
 return FUNC_2(VAR_16);
}
