
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hfs_bnode {struct page** page; scalar_t__ page_offset; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct page*) ;

void FUNC_4(struct hfs_bnode *VAR_0, int VAR_1, int VAR_2)
{
 struct page *VAR_3;

 VAR_1 += VAR_0->page_offset;
 VAR_3 = VAR_0->page[0];

 FUNC_2(FUNC_0(VAR_3) + VAR_1, 0, VAR_2);
 FUNC_1(VAR_3);
 FUNC_3(VAR_3);
}
