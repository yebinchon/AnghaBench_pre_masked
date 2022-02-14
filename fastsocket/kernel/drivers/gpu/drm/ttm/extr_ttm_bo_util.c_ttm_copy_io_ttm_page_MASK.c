
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {struct page** pages; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct page*) ;
 void* FUNC_1 (struct page*,int ,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,void*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (struct page**,int,int ,int ) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8(struct ttm_tt *VAR_5, void *VAR_6,
    unsigned long VAR_7,
    pgprot_t VAR_8)
{
 struct page *VAR_9 = VAR_5->pages[VAR_7];
 void *VAR_10;

 if (!VAR_9)
  return -VAR_0;

 VAR_6 = (void *)((unsigned long)VAR_6 + (VAR_7 << VAR_3));




 if (FUNC_5(VAR_8) != FUNC_5(VAR_2))
  VAR_10 = FUNC_6(&VAR_9, 1, 0, VAR_8);
 else
  VAR_10 = FUNC_0(VAR_9);

 if (!VAR_10)
  return -VAR_0;

 FUNC_4(VAR_10, VAR_6, VAR_4);




 if (FUNC_5(VAR_8) != FUNC_5(VAR_2))
  FUNC_7(VAR_10);
 else
  FUNC_2(VAR_9);


 return 0;
}
