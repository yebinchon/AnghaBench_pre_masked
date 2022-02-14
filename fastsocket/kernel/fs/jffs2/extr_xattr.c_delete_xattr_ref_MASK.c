
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jffs2_xattr_ref {int xseqno; int xid; int ino; struct jffs2_xattr_ref* next; struct jffs2_xattr_datum* xd; TYPE_1__* ic; } ;
struct jffs2_xattr_datum {int xid; } ;
struct jffs2_sb_info {int erase_completion_lock; struct jffs2_xattr_ref* xref_dead_list; } ;
struct TYPE_2__ {int ino; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct jffs2_sb_info*,struct jffs2_xattr_datum*) ;

__attribute__((used)) static void FUNC_4(struct jffs2_sb_info *VAR_1, struct jffs2_xattr_ref *VAR_2)
{

 struct jffs2_xattr_datum *VAR_3;

 VAR_3 = VAR_2->xd;
 VAR_2->xseqno |= VAR_0;
 VAR_2->ino = VAR_2->ic->ino;
 VAR_2->xid = VAR_2->xd->xid;
 FUNC_1(&VAR_1->erase_completion_lock);
 VAR_2->next = VAR_1->xref_dead_list;
 VAR_1->xref_dead_list = VAR_2;
 FUNC_2(&VAR_1->erase_completion_lock);

 FUNC_0("xref(ino=%u, xid=%u, xseqno=%u) was removed.\n",
    VAR_2->ino, VAR_2->xid, VAR_2->xseqno);

 FUNC_3(VAR_1, VAR_3);
}
