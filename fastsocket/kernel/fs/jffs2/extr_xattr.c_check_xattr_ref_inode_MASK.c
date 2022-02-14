
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jffs2_xattr_ref {scalar_t__ xseqno; struct jffs2_xattr_ref* next; TYPE_1__* xd; } ;
struct jffs2_sb_info {int xattr_sem; } ;
struct jffs2_inode_cache {int flags; struct jffs2_xattr_ref* xref; } ;
struct TYPE_2__ {scalar_t__ xprefix; int xname; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jffs2_sb_info*,struct jffs2_xattr_ref*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct jffs2_sb_info*,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct jffs2_sb_info *VAR_2, struct jffs2_inode_cache *VAR_3)
{




 struct jffs2_xattr_ref *VAR_4, *VAR_5, **VAR_6, **VAR_7;
 int VAR_8 = 0;

 if (FUNC_2(VAR_3->flags & VAR_0))
  return 0;
 FUNC_1(&VAR_2->xattr_sem);
 retry:
 VAR_8 = 0;
 for (VAR_4=VAR_3->xref, VAR_6=&VAR_3->xref; VAR_4; VAR_6=&VAR_4->next, VAR_4=VAR_4->next) {
  if (!VAR_4->xd->xname) {
   VAR_8 = FUNC_3(VAR_2, VAR_4->xd);
   if (FUNC_5(VAR_8 > 0)) {
    *VAR_6 = VAR_4->next;
    FUNC_0(VAR_2, VAR_4);
    goto retry;
   } else if (FUNC_5(VAR_8 < 0))
    goto out;
  }
  for (VAR_5=VAR_4->next, VAR_7=&VAR_4->next; VAR_5; VAR_7=&VAR_5->next, VAR_5=VAR_5->next) {
   if (!VAR_5->xd->xname) {
    VAR_4->xd->flags |= VAR_1;
    VAR_8 = FUNC_3(VAR_2, VAR_5->xd);
    VAR_4->xd->flags &= ~VAR_1;
    if (FUNC_5(VAR_8 > 0)) {
     *VAR_7 = VAR_5->next;
     FUNC_0(VAR_2, VAR_5);
     goto retry;
    } else if (FUNC_5(VAR_8 < 0))
     goto out;
   }
   if (VAR_4->xd->xprefix == VAR_5->xd->xprefix
       && !FUNC_4(VAR_4->xd->xname, VAR_5->xd->xname)) {
    if (VAR_4->xseqno > VAR_5->xseqno) {
     *VAR_7 = VAR_5->next;
     FUNC_0(VAR_2, VAR_5);
    } else {
     *VAR_6 = VAR_4->next;
     FUNC_0(VAR_2, VAR_4);
    }
    goto retry;
   }
  }
 }
 VAR_3->flags |= VAR_0;
 out:
 FUNC_6(&VAR_2->xattr_sem);

 return VAR_8;
}
