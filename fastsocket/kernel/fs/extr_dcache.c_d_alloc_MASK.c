
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qstr {int len; int name; int hash; } ;
struct TYPE_5__ {int d_child; } ;
struct TYPE_4__ {char* name; int len; int hash; } ;
struct dentry {char* d_iname; int d_subdirs; TYPE_2__ d_u; int * d_sb; int * d_parent; int d_alias; int d_lru; int d_hash; scalar_t__ d_mounted; int * d_fsdata; int * d_op; int * d_inode; int d_lock; int d_flags; int d_count; TYPE_1__ d_name; } ;
struct TYPE_6__ {int nr_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int * FUNC_3 (struct dentry*) ;
 char* FUNC_4 (int,int ) ;
 struct dentry* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct dentry*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct dentry *FUNC_12(struct dentry * VAR_6, const struct qstr *VAR_7)
{
 struct dentry *VAR_8;
 char *VAR_9;

 VAR_8 = FUNC_5(VAR_4, VAR_2);
 if (!VAR_8)
  return ((void*)0);

 if (VAR_7->len > VAR_1-1) {
  VAR_9 = FUNC_4(VAR_7->len + 1, VAR_2);
  if (!VAR_9) {
   FUNC_6(VAR_4, VAR_8);
   return ((void*)0);
  }
 } else {
  VAR_9 = VAR_8->d_iname;
 }
 VAR_8->d_name.name = VAR_9;

 VAR_8->d_name.len = VAR_7->len;
 VAR_8->d_name.hash = VAR_7->hash;
 FUNC_8(VAR_9, VAR_7->name, VAR_7->len);
 VAR_9[VAR_7->len] = 0;

 FUNC_2(&VAR_8->d_count, 1);
 VAR_8->d_flags = VAR_0;
 FUNC_10(&VAR_8->d_lock);
 VAR_8->d_inode = ((void*)0);
 VAR_8->d_parent = ((void*)0);
 VAR_8->d_sb = ((void*)0);
 VAR_8->d_op = ((void*)0);
 VAR_8->d_fsdata = ((void*)0);
 VAR_8->d_mounted = 0;
 FUNC_0(&VAR_8->d_hash);
 FUNC_1(&VAR_8->d_lru);
 FUNC_1(&VAR_8->d_subdirs);
 FUNC_1(&VAR_8->d_alias);

 if (VAR_6) {
  VAR_8->d_parent = FUNC_3(VAR_6);
  VAR_8->d_sb = VAR_6->d_sb;
 } else {
  FUNC_1(&VAR_8->d_u.d_child);
 }

 FUNC_9(&VAR_3);
 if (VAR_6)
  FUNC_7(&VAR_8->d_u.d_child, &VAR_6->d_subdirs);
 VAR_5.nr_dentry++;
 FUNC_11(&VAR_3);

 return VAR_8;
}
