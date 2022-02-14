
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct metapage {scalar_t__ lsn; int flag; scalar_t__ nohomeok; scalar_t__ count; struct page* page; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct page*,struct metapage*) ;
 int FUNC_4 (char*,struct metapage*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct metapage*) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct metapage*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,int) ;

void FUNC_13(struct metapage * VAR_2)
{
 struct page *VAR_3 = VAR_2->page;
 FUNC_4("release_metapage: mp = 0x%p, flag = 0x%lx", VAR_2, VAR_2->flag);

 FUNC_0(!VAR_3);

 FUNC_5(VAR_3);
 FUNC_10(VAR_2);

 FUNC_1(VAR_2->count);
 if (--VAR_2->count || VAR_2->nohomeok) {
  FUNC_11(VAR_3);
  FUNC_6(VAR_3);
  return;
 }

 if (FUNC_9(VAR_0, &VAR_2->flag)) {
  FUNC_8(VAR_3);
  if (FUNC_9(VAR_1, &VAR_2->flag)) {
   FUNC_2(VAR_1, &VAR_2->flag);
   FUNC_12(VAR_3, 1);
   FUNC_5(VAR_3);
  }
 } else if (VAR_2->lsn)
  FUNC_7(VAR_2);


 FUNC_3(VAR_3, VAR_2);

 FUNC_11(VAR_3);
 FUNC_6(VAR_3);
}
