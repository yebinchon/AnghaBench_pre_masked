
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int pages_stored; int compr_size; int good_compress; int pages_expand; int pages_zero; } ;
struct zram {TYPE_2__* table; TYPE_1__ stats; int mem_pool; } ;
struct zobj_header {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_4__ {int offset; struct page* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 void* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (void*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,struct page*,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct zram*,size_t,int ) ;
 int FUNC_7 (struct zram*,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct zram*,size_t,int ) ;

__attribute__((used)) static void FUNC_10(struct zram *VAR_4, size_t VAR_5)
{
 u32 VAR_6;
 void *VAR_7;

 struct page *VAR_8 = VAR_4->table[VAR_5].page;
 u32 VAR_9 = VAR_4->table[VAR_5].offset;

 if (FUNC_3(!VAR_8)) {




  if (FUNC_9(VAR_4, VAR_5, VAR_3)) {
   FUNC_6(VAR_4, VAR_5, VAR_3);
   FUNC_8(&VAR_4->stats.pages_zero);
  }
  return;
 }

 if (FUNC_3(FUNC_9(VAR_4, VAR_5, VAR_2))) {
  VAR_6 = VAR_1;
  FUNC_0(VAR_8);
  FUNC_6(VAR_4, VAR_5, VAR_2);
  FUNC_8(&VAR_4->stats.pages_expand);
  goto out;
 }

 VAR_7 = FUNC_1(VAR_8, VAR_0) + VAR_9;
 VAR_6 = FUNC_5(VAR_7) - sizeof(struct zobj_header);
 FUNC_2(VAR_7, VAR_0);

 FUNC_4(VAR_4->mem_pool, VAR_8, VAR_9);
 if (VAR_6 <= VAR_1 / 2)
  FUNC_8(&VAR_4->stats.good_compress);

out:
 FUNC_7(VAR_4, &VAR_4->stats.compr_size, VAR_6);
 FUNC_8(&VAR_4->stats.pages_stored);

 VAR_4->table[VAR_5].page = ((void*)0);
 VAR_4->table[VAR_5].offset = 0;
}
