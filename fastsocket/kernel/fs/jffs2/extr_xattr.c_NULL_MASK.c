
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {scalar_t__ (* list ) (struct inode*,char*,scalar_t__,int ,int ) ;} ;
struct jffs2_xattr_ref {struct jffs2_xattr_ref* next; struct jffs2_xattr_datum* xd; struct jffs2_inode_cache* ic; } ;
struct jffs2_xattr_datum {int name_len; int xname; int xprefix; } ;
struct jffs2_sb_info {int xattr_sem; } ;
struct jffs2_inode_info {struct jffs2_inode_cache* inocache; } ;
struct jffs2_inode_cache {struct jffs2_xattr_ref* xref; } ;
struct inode {int i_sb; } ;
struct dentry {struct inode* d_inode; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 struct jffs2_inode_info* FUNC_1 (struct inode*) ;
 struct jffs2_sb_info* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct jffs2_sb_info*,struct jffs2_inode_cache*) ;
 int FUNC_4 (struct jffs2_sb_info*,struct jffs2_xattr_ref*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct jffs2_sb_info*,struct jffs2_xattr_datum*) ;
 scalar_t__ FUNC_8 (struct inode*,char*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_9 (struct inode*,char*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct xattr_handler* FUNC_13 (int ) ;

ssize_t FUNC_14(struct dentry *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct inode *VAR_3 = VAR_0->d_inode;
 struct jffs2_inode_info *VAR_4 = FUNC_1(VAR_3);
 struct jffs2_sb_info *VAR_5 = FUNC_2(VAR_3->i_sb);
 struct jffs2_inode_cache *VAR_6 = VAR_4->inocache;
 struct jffs2_xattr_ref *VAR_7, **VAR_8;
 struct jffs2_xattr_datum *VAR_9;
 struct xattr_handler *VAR_10;
 ssize_t VAR_11, VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_3(VAR_5, VAR_6);
 if (FUNC_10(VAR_12))
  return VAR_12;

 FUNC_5(&VAR_5->xattr_sem);
 retry:
 VAR_11 = 0;
 for (VAR_7=VAR_6->xref, VAR_8=&VAR_6->xref; VAR_7; VAR_8=&VAR_7->next, VAR_7=VAR_7->next) {
  FUNC_0(VAR_7->ic != VAR_6);
  VAR_9 = VAR_7->xd;
  if (!VAR_9->xname) {

   if (!VAR_13) {
    VAR_13 = 1;
    FUNC_11(&VAR_5->xattr_sem);
    FUNC_6(&VAR_5->xattr_sem);
    goto retry;
   } else {
    VAR_12 = FUNC_7(VAR_5, VAR_9);
    if (FUNC_10(VAR_12 > 0)) {
     *VAR_8 = VAR_7->next;
     FUNC_4(VAR_5, VAR_7);
     goto retry;
    } else if (FUNC_10(VAR_12 < 0))
     goto out;
   }
  }
  VAR_10 = FUNC_13(VAR_9->xprefix);
  if (!VAR_10)
   continue;
  if (VAR_1) {
   VAR_12 = VAR_10->list(VAR_3, VAR_1+VAR_11, VAR_2-VAR_11, VAR_9->xname, VAR_9->name_len);
  } else {
   VAR_12 = VAR_10->list(VAR_3, ((void*)0), 0, VAR_9->xname, VAR_9->name_len);
  }
  if (VAR_12 < 0)
   goto out;
  VAR_11 += VAR_12;
 }
 VAR_12 = VAR_11;
 out:
 if (!VAR_13) {
  FUNC_11(&VAR_5->xattr_sem);
 } else {
  FUNC_12(&VAR_5->xattr_sem);
 }
 return VAR_12;
}
