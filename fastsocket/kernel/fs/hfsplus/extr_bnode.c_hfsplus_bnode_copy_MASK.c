
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hfs_btree {int dummy; } ;
struct hfs_bnode {struct page** page; scalar_t__ page_offset; struct hfs_btree* tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct page*) ;

void FUNC_6(struct hfs_bnode *VAR_4, int VAR_5,
      struct hfs_bnode *VAR_6, int VAR_7, int VAR_8)
{
 struct hfs_btree *VAR_9;
 struct page **VAR_10, **VAR_11;
 int VAR_12;

 FUNC_0(VAR_0, "copybytes: %u,%u,%u\n", VAR_5, VAR_7, VAR_8);
 if (!VAR_8)
  return;
 VAR_9 = VAR_6->tree;
 VAR_7 += VAR_6->page_offset;
 VAR_5 += VAR_4->page_offset;
 VAR_10 = VAR_6->page + (VAR_7 >> VAR_2);
 VAR_7 &= ~VAR_1;
 VAR_11 = VAR_4->page + (VAR_5 >> VAR_2);
 VAR_5 &= ~VAR_1;

 if (VAR_7 == VAR_5) {
  VAR_12 = FUNC_4(VAR_8, (int)VAR_3 - VAR_7);
  FUNC_3(FUNC_1(*VAR_11) + VAR_7, FUNC_1(*VAR_10) + VAR_7, VAR_12);
  FUNC_2(*VAR_10);
  FUNC_5(*VAR_11);
  FUNC_2(*VAR_11);

  while ((VAR_8 -= VAR_12) != 0) {
   VAR_12 = FUNC_4(VAR_8, (int)VAR_3);
   FUNC_3(FUNC_1(*++VAR_11), FUNC_1(*++VAR_10), VAR_12);
   FUNC_2(*VAR_10);
   FUNC_5(*VAR_11);
   FUNC_2(*VAR_11);
  }
 } else {
  void *VAR_13, *VAR_14;

  do {
   VAR_13 = FUNC_1(*VAR_10) + VAR_7;
   VAR_14 = FUNC_1(*VAR_11) + VAR_5;
   if (VAR_3 - VAR_7 < VAR_3 - VAR_5) {
    VAR_12 = VAR_3 - VAR_7;
    VAR_7 = 0;
    VAR_5 += VAR_12;
   } else {
    VAR_12 = VAR_3 - VAR_5;
    VAR_7 += VAR_12;
    VAR_5 = 0;
   }
   VAR_12 = FUNC_4(VAR_8, VAR_12);
   FUNC_3(VAR_14, VAR_13, VAR_12);
   FUNC_2(*VAR_10);
   FUNC_5(*VAR_11);
   FUNC_2(*VAR_11);
   if (!VAR_5)
    VAR_11++;
   else
    VAR_10++;
  } while ((VAR_8 -= VAR_12));
 }
}
