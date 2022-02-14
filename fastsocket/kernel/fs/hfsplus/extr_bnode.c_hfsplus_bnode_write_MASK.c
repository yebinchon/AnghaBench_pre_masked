
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hfs_bnode {struct page** page; scalar_t__ page_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (scalar_t__,void*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct page*) ;

void FUNC_5(struct hfs_bnode *VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
 struct page **VAR_7;
 int VAR_8;

 VAR_5 += VAR_3->page_offset;
 VAR_7 = VAR_3->page + (VAR_5 >> VAR_1);
 VAR_5 &= ~VAR_0;

 VAR_8 = FUNC_3(VAR_6, (int)VAR_2 - VAR_5);
 FUNC_2(FUNC_0(*VAR_7) + VAR_5, VAR_4, VAR_8);
 FUNC_4(*VAR_7);
 FUNC_1(*VAR_7);

 while ((VAR_6 -= VAR_8) != 0) {
  VAR_4 += VAR_8;
  VAR_8 = FUNC_3(VAR_6, (int)VAR_2);
  FUNC_2(FUNC_0(*++VAR_7), VAR_4, VAR_8);
  FUNC_4(*VAR_7);
  FUNC_1(*VAR_7);
 }
}
