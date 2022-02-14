
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct jffs2_xattr_datum {size_t xid; size_t version; int xindex; } ;
struct jffs2_sb_info {scalar_t__ highest_xid; int * xattrindex; } ;


 int VAR_0 ;
 struct jffs2_xattr_datum* FUNC_0 (int ) ;
 size_t VAR_1 ;
 struct jffs2_xattr_datum* FUNC_1 () ;
 struct jffs2_xattr_datum* FUNC_2 (struct jffs2_sb_info*,size_t) ;
 int FUNC_3 (int *,int *) ;

struct jffs2_xattr_datum *FUNC_4(struct jffs2_sb_info *VAR_2,
        uint32_t VAR_3, uint32_t VAR_4)
{
 struct jffs2_xattr_datum *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5) {
  VAR_5 = FUNC_1();
  if (!VAR_5)
   return FUNC_0(-VAR_0);
  VAR_5->xid = VAR_3;
  VAR_5->version = VAR_4;
  if (VAR_5->xid > VAR_2->highest_xid)
   VAR_2->highest_xid = VAR_5->xid;
  FUNC_3(&VAR_5->xindex, &VAR_2->xattrindex[VAR_3 % VAR_1]);
 }
 return VAR_5;
}
