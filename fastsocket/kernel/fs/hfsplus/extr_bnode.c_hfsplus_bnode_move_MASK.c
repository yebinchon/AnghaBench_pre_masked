
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hfs_bnode {struct page** page; scalar_t__ page_offset; } ;


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

void FUNC_6(struct hfs_bnode *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct page **VAR_8, **VAR_9;
 int VAR_10;

 FUNC_0(VAR_0, "movebytes: %u,%u,%u\n", VAR_5, VAR_6, VAR_7);
 if (!VAR_7)
  return;
 VAR_6 += VAR_4->page_offset;
 VAR_5 += VAR_4->page_offset;
 if (VAR_5 > VAR_6) {
  VAR_6 += VAR_7 - 1;
  VAR_8 = VAR_4->page + (VAR_6 >> VAR_2);
  VAR_6 = (VAR_6 & ~VAR_1) + 1;
  VAR_5 += VAR_7 - 1;
  VAR_9 = VAR_4->page + (VAR_5 >> VAR_2);
  VAR_5 = (VAR_5 & ~VAR_1) + 1;

  if (VAR_6 == VAR_5) {
   while (VAR_6 < VAR_7) {
    FUNC_3(FUNC_1(*VAR_9), FUNC_1(*VAR_8), VAR_6);
    FUNC_2(*VAR_8);
    FUNC_5(*VAR_9);
    FUNC_2(*VAR_9);
    VAR_7 -= VAR_6;
    VAR_6 = VAR_3;
    VAR_8--;
    VAR_9--;
   }
   VAR_6 -= VAR_7;
   FUNC_3(FUNC_1(*VAR_9) + VAR_6, FUNC_1(*VAR_8) + VAR_6, VAR_7);
   FUNC_2(*VAR_8);
   FUNC_5(*VAR_9);
   FUNC_2(*VAR_9);
  } else {
   void *VAR_11, *VAR_12;

   do {
    VAR_11 = FUNC_1(*VAR_8) + VAR_6;
    VAR_12 = FUNC_1(*VAR_9) + VAR_5;
    if (VAR_6 < VAR_5) {
     VAR_10 = VAR_6;
     VAR_6 = VAR_3;
     VAR_5 -= VAR_10;
    } else {
     VAR_10 = VAR_5;
     VAR_6 -= VAR_10;
     VAR_5 = VAR_3;
    }
    VAR_10 = FUNC_4(VAR_7, VAR_10);
    FUNC_3(VAR_12 - VAR_10, VAR_11 - VAR_10, VAR_10);
    FUNC_2(*VAR_8);
    FUNC_5(*VAR_9);
    FUNC_2(*VAR_9);
    if (VAR_5 == VAR_3)
     VAR_9--;
    else
     VAR_8--;
   } while ((VAR_7 -= VAR_10));
  }
 } else {
  VAR_8 = VAR_4->page + (VAR_6 >> VAR_2);
  VAR_6 &= ~VAR_1;
  VAR_9 = VAR_4->page + (VAR_5 >> VAR_2);
  VAR_5 &= ~VAR_1;

  if (VAR_6 == VAR_5) {
   VAR_10 = FUNC_4(VAR_7, (int)VAR_3 - VAR_6);
   FUNC_3(FUNC_1(*VAR_9) + VAR_6, FUNC_1(*VAR_8) + VAR_6, VAR_10);
   FUNC_2(*VAR_8);
   FUNC_5(*VAR_9);
   FUNC_2(*VAR_9);

   while ((VAR_7 -= VAR_10) != 0) {
    VAR_10 = FUNC_4(VAR_7, (int)VAR_3);
    FUNC_3(FUNC_1(*++VAR_9), FUNC_1(*++VAR_8), VAR_10);
    FUNC_2(*VAR_8);
    FUNC_5(*VAR_9);
    FUNC_2(*VAR_9);
   }
  } else {
   void *VAR_13, *VAR_14;

   do {
    VAR_13 = FUNC_1(*VAR_8) + VAR_6;
    VAR_14 = FUNC_1(*VAR_9) + VAR_5;
    if (VAR_3 - VAR_6 < VAR_3 - VAR_5) {
     VAR_10 = VAR_3 - VAR_6;
     VAR_6 = 0;
     VAR_5 += VAR_10;
    } else {
     VAR_10 = VAR_3 - VAR_5;
     VAR_6 += VAR_10;
     VAR_5 = 0;
    }
    VAR_10 = FUNC_4(VAR_7, VAR_10);
    FUNC_3(VAR_14, VAR_13, VAR_10);
    FUNC_2(*VAR_8);
    FUNC_5(*VAR_9);
    FUNC_2(*VAR_9);
    if (!VAR_5)
     VAR_9++;
    else
     VAR_8++;
   } while ((VAR_7 -= VAR_10));
  }
 }
}
