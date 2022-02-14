
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {int dummy; } ;
struct hfs_btree {int pages_per_bnode; scalar_t__ node_size; int hash_lock; } ;
struct hfs_bnode {int lock_wq; int flags; scalar_t__ page_offset; struct page** page; } ;


 int FUNC_0 (struct hfs_bnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hfs_bnode* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct hfs_bnode* FUNC_2 (struct hfs_btree*,int ) ;
 int FUNC_3 (int ,int *) ;
 struct hfs_bnode* FUNC_4 (struct hfs_btree*,int ) ;
 int FUNC_5 (struct hfs_bnode*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int,int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;

struct hfs_bnode *FUNC_15(struct hfs_btree *VAR_5, u32 VAR_6)
{
 struct hfs_bnode *VAR_7;
 struct page **VAR_8;
 int VAR_9;

 FUNC_11(&VAR_5->hash_lock);
 VAR_7 = FUNC_4(VAR_5, VAR_6);
 FUNC_12(&VAR_5->hash_lock);
 FUNC_0(VAR_7);
 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_7)
  return FUNC_1(-VAR_1);
 if (FUNC_13(VAR_2, &VAR_7->flags)) {
  FUNC_5(VAR_7);
  return FUNC_1(-VAR_0);
 }

 VAR_8 = VAR_7->page;
 FUNC_8(FUNC_6(*VAR_8) + VAR_7->page_offset, 0,
        FUNC_9((int)VAR_4, (int)VAR_5->node_size));
 FUNC_10(*VAR_8);
 FUNC_7(*VAR_8);
 for (VAR_9 = 1; VAR_9 < VAR_5->pages_per_bnode; VAR_9++) {
  FUNC_8(FUNC_6(*++VAR_8), 0, VAR_4);
  FUNC_10(*VAR_8);
  FUNC_7(*VAR_8);
 }
 FUNC_3(VAR_3, &VAR_7->flags);
 FUNC_14(&VAR_7->lock_wq);

 return VAR_7;
}
