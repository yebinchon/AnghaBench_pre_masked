
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct metapage {int flag; struct page* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,struct metapage*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int) ;

void FUNC_8(struct metapage *VAR_2)
{
 struct page *VAR_3 = VAR_2->page;
 FUNC_1("force_metapage: mp = 0x%p", VAR_2);
 FUNC_5(VAR_0, &VAR_2->flag);
 FUNC_0(VAR_1, &VAR_2->flag);
 FUNC_3(VAR_3);
 FUNC_2(VAR_3);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3, 1);
 FUNC_0(VAR_0, &VAR_2->flag);
 FUNC_4(VAR_3);
}
