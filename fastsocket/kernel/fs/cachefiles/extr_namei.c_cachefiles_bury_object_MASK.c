
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int name; int len; } ;
struct dentry {TYPE_2__* d_inode; struct dentry* d_parent; TYPE_1__ d_name; } ;
struct cachefiles_cache {TYPE_5__* graveyard; int gravecounter; } ;
struct TYPE_11__ {TYPE_4__* d_inode; } ;
struct TYPE_10__ {int i_mode; } ;
struct TYPE_9__ {int i_mutex; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct cachefiles_cache*,char*,...) ;
 int FUNC_8 (struct cachefiles_cache*,struct dentry*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 scalar_t__ FUNC_12 () ;
 struct dentry* FUNC_13 (TYPE_5__*,struct dentry*) ;
 struct dentry* FUNC_14 (char*,TYPE_5__*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char*,int,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (TYPE_5__*,struct dentry*) ;
 int FUNC_19 (TYPE_2__*,struct dentry*,TYPE_4__*,struct dentry*) ;
 int FUNC_20 (TYPE_2__*,struct dentry*) ;

__attribute__((used)) static int FUNC_21(struct cachefiles_cache *VAR_2,
      struct dentry *VAR_3,
      struct dentry *VAR_4,
      bool VAR_5)
{
 struct dentry *VAR_6, *VAR_7;
 char VAR_8[8 + 8 + 1];
 int VAR_9;

 FUNC_4(",'%*.*s','%*.*s'",
        VAR_3->d_name.len, VAR_3->d_name.len, VAR_3->d_name.name,
        VAR_4->d_name.len, VAR_4->d_name.len, VAR_4->d_name.name);

 FUNC_3("remove %p from %p", VAR_4, VAR_3);


 if (!FUNC_2(VAR_4->d_inode->i_mode)) {
  FUNC_3("unlink stale object");
  VAR_9 = FUNC_20(VAR_3->d_inode, VAR_4);

  if (VAR_5)
   FUNC_8(VAR_2, VAR_4);

  FUNC_15(&VAR_3->d_inode->i_mutex);

  if (VAR_9 == -VAR_0)
   FUNC_7(VAR_2, "Unlink failed");

  FUNC_5(" = %d", VAR_9);
  return VAR_9;
 }


 FUNC_3("move stale object to graveyard");
 FUNC_15(&VAR_3->d_inode->i_mutex);

try_again:

 FUNC_16(VAR_8, "%08x%08x",
  (uint32_t) FUNC_12(),
  (uint32_t) FUNC_6(&VAR_2->gravecounter));


 VAR_7 = FUNC_13(VAR_2->graveyard, VAR_3);


 if (VAR_4->d_parent != VAR_3) {


  FUNC_18(VAR_2->graveyard, VAR_3);
  FUNC_5(" = 0 [culled?]");
  return 0;
 }

 if (!FUNC_2(VAR_2->graveyard->d_inode->i_mode)) {
  FUNC_18(VAR_2->graveyard, VAR_3);
  FUNC_7(VAR_2, "Graveyard no longer a directory");
  return -VAR_0;
 }

 if (VAR_7 == VAR_4) {
  FUNC_18(VAR_2->graveyard, VAR_3);
  FUNC_7(VAR_2, "May not make directory loop");
  return -VAR_0;
 }

 if (FUNC_10(VAR_4)) {
  FUNC_18(VAR_2->graveyard, VAR_3);
  FUNC_7(VAR_2, "Mountpoint in cache");
  return -VAR_0;
 }

 VAR_6 = FUNC_14(VAR_8, VAR_2->graveyard, FUNC_17(VAR_8));
 if (FUNC_0(VAR_6)) {
  FUNC_18(VAR_2->graveyard, VAR_3);

  if (FUNC_1(VAR_6) == -VAR_1) {
   FUNC_5(" = -ENOMEM");
   return -VAR_1;
  }

  FUNC_7(VAR_2, "Lookup error %ld",
        FUNC_1(VAR_6));
  return -VAR_0;
 }

 if (VAR_6->d_inode) {
  FUNC_18(VAR_2->graveyard, VAR_3);
  FUNC_11(VAR_6);
  VAR_6 = ((void*)0);
  FUNC_9();
  goto try_again;
 }

 if (FUNC_10(VAR_6)) {
  FUNC_18(VAR_2->graveyard, VAR_3);
  FUNC_11(VAR_6);
  FUNC_7(VAR_2, "Mountpoint in graveyard");
  return -VAR_0;
 }


 if (VAR_7 == VAR_6) {
  FUNC_18(VAR_2->graveyard, VAR_3);
  FUNC_11(VAR_6);
  FUNC_7(VAR_2, "May not make directory loop");
  return -VAR_0;
 }


 VAR_9 = FUNC_19(VAR_3->d_inode, VAR_4, VAR_2->graveyard->d_inode, VAR_6);
 if (VAR_9 != 0 && VAR_9 != -VAR_1)
  FUNC_7(VAR_2, "Rename failed with error %d", VAR_9);

 if (VAR_5)
  FUNC_8(VAR_2, VAR_4);

 FUNC_18(VAR_2->graveyard, VAR_3);
 FUNC_11(VAR_6);
 FUNC_5(" = 0");
 return 0;
}
