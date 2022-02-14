
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct metapage {unsigned int logical_size; int count; unsigned long index; scalar_t__ data; scalar_t__ nohomeok; int xflag; scalar_t__ flag; struct page* page; } ;
struct inode {int i_blkbits; unsigned long i_size; int i_sb; struct address_space* i_mapping; int i_ino; } ;
struct address_space {int dummy; } ;
struct TYPE_6__ {TYPE_1__* direct_inode; } ;
struct TYPE_5__ {int pagealloc; } ;
struct TYPE_4__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct metapage* FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (struct metapage*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct metapage*) ;
 struct page* FUNC_10 (struct address_space*,unsigned long) ;
 int FUNC_11 (struct page*,struct metapage*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (char*,struct metapage*,...) ;
 int FUNC_15 (struct metapage*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (scalar_t__,int ,unsigned long) ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_18 (struct page*) ;
 struct metapage* FUNC_19 (struct page*,unsigned long) ;
 struct page* FUNC_20 (struct address_space*,unsigned long,int *) ;
 scalar_t__ FUNC_21 (int ,scalar_t__*) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (struct page*) ;

struct metapage *FUNC_24(struct inode *VAR_7, unsigned long VAR_8,
    unsigned int VAR_9, int VAR_10,
    unsigned long VAR_11)
{
 int VAR_12;
 int VAR_13;
 struct address_space *VAR_14;
 struct metapage *VAR_15 = ((void*)0);
 struct page *VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;

 FUNC_14("__get_metapage: ino = %ld, lblock = 0x%lx, abs=%d",
   VAR_7->i_ino, VAR_8, VAR_10);

 VAR_13 = VAR_7->i_blkbits;
 VAR_12 = VAR_3 - VAR_13;
 VAR_17 = VAR_8 >> VAR_12;
 VAR_18 = (VAR_8 - (VAR_17 << VAR_12)) << VAR_13;
 if ((VAR_18 + VAR_9) > VAR_4) {
  FUNC_12("MetaData crosses page boundary!!");
  FUNC_12("lblock = %lx, size  = %d", VAR_8, VAR_9);
  FUNC_8();
  return ((void*)0);
 }
 if (VAR_10)
  VAR_14 = FUNC_2(VAR_7->i_sb)->direct_inode->i_mapping;
 else {





  if ((VAR_8 << VAR_7->i_blkbits) >= VAR_7->i_size)
   return ((void*)0);
  VAR_14 = VAR_7->i_mapping;
 }

 if (VAR_11 && (VAR_5 == VAR_4)) {
  VAR_16 = FUNC_10(VAR_14, VAR_17);
  if (!VAR_16) {
   FUNC_12("grab_cache_page failed!");
   return ((void*)0);
  }
  FUNC_4(VAR_16);
 } else {
  VAR_16 = FUNC_20(VAR_14, VAR_17, ((void*)0));
  if (FUNC_1(VAR_16) || !FUNC_3(VAR_16)) {
   FUNC_12("read_mapping_page failed!");
   return ((void*)0);
  }
  FUNC_16(VAR_16);
 }

 VAR_15 = FUNC_19(VAR_16, VAR_18);
 if (VAR_15) {
  if (VAR_15->logical_size != VAR_9) {
   FUNC_13(VAR_7->i_sb,
      "__get_metapage: mp->logical_size != size");
   FUNC_12("logical_size = %d, size = %d",
    VAR_15->logical_size, VAR_9);
   FUNC_8();
   goto unlock;
  }
  VAR_15->count++;
  FUNC_15(VAR_15);
  if (FUNC_21(VAR_2, &VAR_15->flag)) {
   if (!VAR_11) {
    FUNC_13(VAR_7->i_sb,
       "__get_metapage: using a "
       "discarded metapage");
    FUNC_7(VAR_15);
    goto unlock;
   }
   FUNC_6(VAR_2, &VAR_15->flag);
  }
 } else {
  FUNC_0(VAR_6.pagealloc);
  VAR_15 = FUNC_5(VAR_1);
  VAR_15->page = VAR_16;
  VAR_15->flag = 0;
  VAR_15->xflag = VAR_0;
  VAR_15->count = 1;
  VAR_15->nohomeok = 0;
  VAR_15->logical_size = VAR_9;
  VAR_15->data = FUNC_18(VAR_16) + VAR_18;
  VAR_15->index = VAR_8;
  if (FUNC_22(FUNC_11(VAR_16, VAR_15))) {
   FUNC_9(VAR_15);
   goto unlock;
  }
  FUNC_15(VAR_15);
 }

 if (VAR_11) {
  FUNC_14("zeroing mp = 0x%p", VAR_15);
  FUNC_17(VAR_15->data, 0, VAR_5);
 }

 FUNC_23(VAR_16);
 FUNC_14("__get_metapage: returning = 0x%p data = 0x%p", VAR_15, VAR_15->data);
 return VAR_15;

unlock:
 FUNC_23(VAR_16);
 return ((void*)0);
}
