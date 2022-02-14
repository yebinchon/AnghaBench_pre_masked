
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct quad_buffer_head {int dummy; } ;
struct hpfs_dirent {int length; int namelen; int down; } ;
struct dnode {scalar_t__ magic; unsigned int self; int first_free; } ;
struct TYPE_2__ {int sb_chk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hpfs_dirent*) ;
 int FUNC_1 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_2 (struct super_block*,unsigned int,int,char*) ;
 int FUNC_3 (struct super_block*,char*,unsigned int,...) ;
 struct dnode* FUNC_4 (struct super_block*,unsigned int,struct quad_buffer_head*,int ) ;
 TYPE_1__* FUNC_5 (struct super_block*) ;
 int FUNC_6 (char*,unsigned int) ;

struct dnode *FUNC_7(struct super_block *VAR_3, unsigned VAR_4,
        struct quad_buffer_head *VAR_5)
{
 struct dnode *VAR_6;
 if (FUNC_5(VAR_3)->sb_chk) {
  if (FUNC_2(VAR_3, VAR_4, 4, "dnode")) return ((void*)0);
  if (VAR_4 & 3) {
   FUNC_3(VAR_3, "dnode %08x not byte-aligned", VAR_4);
   return ((void*)0);
  }
 }
 if ((VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_1)))
  if (FUNC_5(VAR_3)->sb_chk) {
   unsigned VAR_7, VAR_8 = 0;
   unsigned char *VAR_9 = (char *)VAR_6;
   int VAR_10 = 0;
   if (VAR_6->magic != VAR_0) {
    FUNC_3(VAR_3, "bad magic on dnode %08x", VAR_4);
    goto bail;
   }
   if (VAR_6->self != VAR_4)
    FUNC_3(VAR_3, "bad self pointer on dnode %08x self = %08x", VAR_4, VAR_6->self);


   if (VAR_6->first_free > 2048 ) {
    FUNC_3(VAR_3, "dnode %08x has first_free == %08x", VAR_4, VAR_6->first_free);
    goto bail;
   }
   for (VAR_7 = 20; VAR_7 < VAR_6->first_free; VAR_7 += VAR_9[VAR_7] + (VAR_9[VAR_7+1] << 8)) {
    struct hpfs_dirent *VAR_11 = (struct hpfs_dirent *)((char *)VAR_6 + VAR_7);
    if (VAR_11->length > 292 || (VAR_11->length < 32) || (VAR_11->length & 3) || VAR_7 + VAR_11->length > 2048) {
     FUNC_3(VAR_3, "bad dirent size in dnode %08x, dirent %03x, last %03x", VAR_4, VAR_7, VAR_8);
     goto bail;
    }
    if (((31 + VAR_11->namelen + VAR_11->down*4 + 3) & ~3) != VAR_11->length) {
     if (((31 + VAR_11->namelen + VAR_11->down*4 + 3) & ~3) < VAR_11->length && VAR_3->s_flags & VAR_2) goto ok;
     FUNC_3(VAR_3, "namelen does not match dirent size in dnode %08x, dirent %03x, last %03x", VAR_4, VAR_7, VAR_8);
     goto bail;
    }
    ok:
    if (FUNC_5(VAR_3)->sb_chk >= 2) VAR_10 |= 1 << VAR_11->down;
    if (VAR_11->down) if (FUNC_0(VAR_11) < 0x10) {
     FUNC_3(VAR_3, "bad down pointer in dnode %08x, dirent %03x, last %03x", VAR_4, VAR_7, VAR_8);
     goto bail;
    }
    VAR_8 = VAR_7;

   }
   if (VAR_7 != VAR_6->first_free) {
    FUNC_3(VAR_3, "size on last dirent does not match first_free; dnode %08x", VAR_4);
    goto bail;
   }
   if (VAR_9[VAR_8 + 30] != 1 || VAR_9[VAR_8 + 31] != 255) {
    FUNC_3(VAR_3, "dnode %08x does not end with \\377 entry", VAR_4);
    goto bail;
   }
   if (VAR_10 == 3) FUNC_6("HPFS: warning: unbalanced dnode tree, dnode %08x; see hpfs.txt 4 more info\n", VAR_4);
  }
 return VAR_6;
 bail:
 FUNC_1(VAR_5);
 return ((void*)0);
}
