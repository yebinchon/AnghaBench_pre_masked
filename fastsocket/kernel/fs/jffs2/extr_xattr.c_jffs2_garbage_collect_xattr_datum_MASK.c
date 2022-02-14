
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jffs2_xattr_datum {int flags; struct jffs2_raw_node_ref* node; int version; int xid; scalar_t__ value_len; scalar_t__ name_len; } ;
struct jffs2_sb_info {int xattr_sem; } ;
struct jffs2_raw_xattr {int dummy; } ;
struct jffs2_raw_node_ref {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct jffs2_sb_info*,struct jffs2_raw_node_ref*) ;
 int FUNC_5 (struct jffs2_sb_info*,int ,int *,int ) ;
 int FUNC_6 (struct jffs2_sb_info*,struct jffs2_xattr_datum*) ;
 int FUNC_7 (struct jffs2_raw_node_ref*) ;
 int FUNC_8 (struct jffs2_sb_info*,struct jffs2_xattr_datum*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct jffs2_sb_info *VAR_3, struct jffs2_xattr_datum *VAR_4,
          struct jffs2_raw_node_ref *VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 FUNC_3(&VAR_3->xattr_sem);
 if (VAR_4->node != VAR_5)
  goto out;
 if (VAR_4->flags & (VAR_1|VAR_2))
  goto out;

 VAR_9 = FUNC_6(VAR_3, VAR_4);
 if (FUNC_9(VAR_9)) {
  VAR_9 = (VAR_9 > 0) ? 0 : VAR_9;
  goto out;
 }
 VAR_8 = FUNC_7(VAR_4->node);
 VAR_6 = FUNC_1(sizeof(struct jffs2_raw_xattr)
   + VAR_4->name_len + 1 + VAR_4->value_len);
 VAR_9 = FUNC_5(VAR_3, VAR_6, &VAR_7, VAR_0);
 if (VAR_9) {
  FUNC_0("jffs2_reserve_space_gc()=%d, request=%u\n", VAR_9, VAR_6);
  goto out;
 }
 VAR_9 = FUNC_8(VAR_3, VAR_4);
 if (!VAR_9)
  FUNC_2("xdatum (xid=%u, version=%u) GC'ed from %#08x to %08x\n",
     VAR_4->xid, VAR_4->version, VAR_8, FUNC_7(VAR_4->node));
 out:
 if (!VAR_9)
  FUNC_4(VAR_3, VAR_5);
 FUNC_10(&VAR_3->xattr_sem);
 return VAR_9;
}
