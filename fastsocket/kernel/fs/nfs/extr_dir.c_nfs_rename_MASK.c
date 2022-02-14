
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_8__ {int name; } ;
struct dentry {TYPE_2__ d_name; TYPE_4__* d_parent; int d_count; struct inode* d_inode; } ;
struct TYPE_10__ {int (* rename ) (struct inode*,TYPE_2__*,struct inode*,TYPE_2__*) ;} ;
struct TYPE_7__ {int name; } ;
struct TYPE_9__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct dentry* FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*,struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (int ,char*,int ,int ,int ,int ,int) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct dentry*,int ) ;
 int FUNC_16 (struct inode*,struct dentry*) ;
 int FUNC_17 (struct inode*,TYPE_2__*,struct inode*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_3, struct dentry *VAR_4,
        struct inode *VAR_5, struct dentry *VAR_6)
{
 struct inode *VAR_7 = VAR_4->d_inode;
 struct inode *VAR_8 = VAR_6->d_inode;
 struct dentry *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 int VAR_11 = -VAR_0;

 FUNC_8(VAR_2, "NFS: rename(%s/%s -> %s/%s, ct=%d)\n",
   VAR_4->d_parent->d_name.name, VAR_4->d_name.name,
   VAR_6->d_parent->d_name.name, VAR_6->d_name.name,
   FUNC_2(&VAR_6->d_count));







 if (VAR_8 && !FUNC_1(VAR_8->i_mode)) {




  if (!FUNC_7(VAR_6)) {
   FUNC_4(VAR_6);
   VAR_10 = VAR_6;
  }

  if (FUNC_2(&VAR_6->d_count) > 2) {
   int VAR_12;


   VAR_9 = FUNC_3(VAR_6->d_parent,
      &VAR_6->d_name);
   if (!VAR_9)
    goto out;


   VAR_12 = FUNC_16(VAR_5, VAR_6);
   if (VAR_12)
    goto out;

   VAR_6 = VAR_9;
   VAR_10 = ((void*)0);
   VAR_8 = ((void*)0);
  }
 }

 FUNC_12(VAR_7);
 if (VAR_8 != ((void*)0))
  FUNC_12(VAR_8);

 VAR_11 = FUNC_0(VAR_3)->rename(VAR_3, &VAR_4->d_name,
        VAR_5, &VAR_6->d_name);
 FUNC_13(VAR_7);
out:
 if (VAR_10)
  FUNC_6(VAR_10);
 if (!VAR_11) {
  if (VAR_8 != ((void*)0))
   FUNC_11(VAR_8);
  FUNC_5(VAR_4, VAR_6);
  FUNC_15(VAR_6,
     FUNC_14(VAR_5));
 } else if (VAR_11 == -VAR_1)
  FUNC_10(VAR_4);


 if (VAR_9)
  FUNC_9(VAR_9);
 return VAR_11;
}
