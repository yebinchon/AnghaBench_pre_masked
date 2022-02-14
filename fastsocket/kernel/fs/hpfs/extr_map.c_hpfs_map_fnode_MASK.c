
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {int n_used_nodes; int first_free; scalar_t__ internal; scalar_t__ n_free_nodes; } ;
struct fnode {scalar_t__ magic; int ea_size_s; int acl_size_s; scalar_t__ ea_offs; TYPE_1__ btree; int dirflag; } ;
struct extended_attribute {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ino_t ;
struct TYPE_4__ {scalar_t__ sb_chk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 struct extended_attribute* FUNC_1 (struct fnode*) ;
 struct extended_attribute* FUNC_2 (struct fnode*) ;
 scalar_t__ FUNC_3 (struct super_block*,scalar_t__,int,char*) ;
 int FUNC_4 (struct super_block*,char*,unsigned long,...) ;
 struct fnode* FUNC_5 (struct super_block*,scalar_t__,struct buffer_head**,int ) ;
 TYPE_2__* FUNC_6 (struct super_block*) ;
 struct extended_attribute* FUNC_7 (struct extended_attribute*) ;

struct fnode *FUNC_8(struct super_block *VAR_2, ino_t VAR_3, struct buffer_head **VAR_4)
{
 struct fnode *VAR_5;
 if (FUNC_6(VAR_2)->sb_chk) if (FUNC_3(VAR_2, VAR_3, 1, "fnode")) {
  return ((void*)0);
 }
 if ((VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_1))) {
  if (FUNC_6(VAR_2)->sb_chk) {
   struct extended_attribute *VAR_6;
   struct extended_attribute *VAR_7;
   if (VAR_5->magic != VAR_0) {
    FUNC_4(VAR_2, "bad magic on fnode %08lx",
     (unsigned long)VAR_3);
    goto bail;
   }
   if (!VAR_5->dirflag) {
    if ((unsigned)VAR_5->btree.n_used_nodes + (unsigned)VAR_5->btree.n_free_nodes !=
        (VAR_5->btree.internal ? 12 : 8)) {
     FUNC_4(VAR_2,
        "bad number of nodes in fnode %08lx",
         (unsigned long)VAR_3);
     goto bail;
    }
    if (VAR_5->btree.first_free !=
        8 + VAR_5->btree.n_used_nodes * (VAR_5->btree.internal ? 8 : 12)) {
     FUNC_4(VAR_2,
         "bad first_free pointer in fnode %08lx",
         (unsigned long)VAR_3);
     goto bail;
    }
   }
   if (VAR_5->ea_size_s && ((signed int)VAR_5->ea_offs < 0xc4 ||
      (signed int)VAR_5->ea_offs + VAR_5->acl_size_s + VAR_5->ea_size_s > 0x200)) {
    FUNC_4(VAR_2,
     "bad EA info in fnode %08lx: ea_offs == %04x ea_size_s == %04x",
     (unsigned long)VAR_3,
     VAR_5->ea_offs, VAR_5->ea_size_s);
    goto bail;
   }
   VAR_6 = FUNC_1(VAR_5);
   VAR_7 = FUNC_2(VAR_5);
   while (VAR_6 != VAR_7) {
    if (VAR_6 > VAR_7) {
     FUNC_4(VAR_2, "bad EA in fnode %08lx",
      (unsigned long)VAR_3);
     goto bail;
    }
    VAR_6 = FUNC_7(VAR_6);
   }
  }
 }
 return VAR_5;
 bail:
 FUNC_0(*VAR_4);
 return ((void*)0);
}
