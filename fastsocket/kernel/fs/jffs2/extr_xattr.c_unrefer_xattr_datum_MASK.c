
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_xattr_datum {int flags; void* node; int version; int xid; int xindex; int refcnt; } ;
struct jffs2_sb_info {int erase_completion_lock; int xattr_dead_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct jffs2_xattr_datum*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct jffs2_sb_info*,struct jffs2_xattr_datum*) ;

__attribute__((used)) static void FUNC_7(struct jffs2_sb_info *VAR_2, struct jffs2_xattr_datum *VAR_3)
{

 if (FUNC_1(&VAR_3->refcnt, &VAR_2->erase_completion_lock)) {
  FUNC_6(VAR_2, VAR_3);
  VAR_3->flags |= VAR_0;
  if (VAR_3->node == (void *)VAR_3) {
   FUNC_0(!(VAR_3->flags & VAR_1));
   FUNC_3(VAR_3);
  } else {
   FUNC_4(&VAR_3->xindex, &VAR_2->xattr_dead_list);
  }
  FUNC_5(&VAR_2->erase_completion_lock);

  FUNC_2("xdatum(xid=%u, version=%u) was removed.\n",
     VAR_3->xid, VAR_3->version);
 }
}
