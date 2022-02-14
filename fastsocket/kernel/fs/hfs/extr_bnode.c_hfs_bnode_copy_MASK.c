
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hfs_btree {int dummy; } ;
struct hfs_bnode {struct page** page; scalar_t__ page_offset; struct hfs_btree* tree; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct page*) ;

void FUNC_5(struct hfs_bnode *VAR_1, int VAR_2,
  struct hfs_bnode *VAR_3, int VAR_4, int VAR_5)
{
 struct hfs_btree *VAR_6;
 struct page *VAR_7, *VAR_8;

 FUNC_0(VAR_0, "copybytes: %u,%u,%u\n", VAR_2, VAR_4, VAR_5);
 if (!VAR_5)
  return;
 VAR_6 = VAR_3->tree;
 VAR_4 += VAR_3->page_offset;
 VAR_2 += VAR_1->page_offset;
 VAR_7 = VAR_3->page[0];
 VAR_8 = VAR_1->page[0];

 FUNC_3(FUNC_1(VAR_8) + VAR_2, FUNC_1(VAR_7) + VAR_4, VAR_5);
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 FUNC_4(VAR_8);
}
