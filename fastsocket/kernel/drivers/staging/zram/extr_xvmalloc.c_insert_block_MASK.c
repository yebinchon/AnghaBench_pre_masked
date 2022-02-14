
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct xv_pool {int flbitmap; int * slbitmap; TYPE_1__* freelist; } ;
struct page {int dummy; } ;
struct TYPE_4__ {size_t prev_offset; size_t next_offset; struct page* prev_page; struct page* next_page; } ;
struct block_header {TYPE_2__ link; int size; } ;
struct TYPE_3__ {size_t offset; struct page* page; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int *) ;
 size_t FUNC_1 (int ) ;
 struct block_header* FUNC_2 (struct page*,size_t,int ) ;
 int FUNC_3 (struct block_header*,int ) ;

__attribute__((used)) static void FUNC_4(struct xv_pool *VAR_2, struct page *VAR_3, u32 VAR_4,
   struct block_header *VAR_5)
{
 u32 VAR_6, VAR_7;
 struct block_header *VAR_8;

 VAR_7 = FUNC_1(VAR_5->size);
 VAR_6 = VAR_7 / VAR_0;

 VAR_5->link.prev_page = ((void*)0);
 VAR_5->link.prev_offset = 0;
 VAR_5->link.next_page = VAR_2->freelist[VAR_7].page;
 VAR_5->link.next_offset = VAR_2->freelist[VAR_7].offset;
 VAR_2->freelist[VAR_7].page = VAR_3;
 VAR_2->freelist[VAR_7].offset = VAR_4;

 if (VAR_5->link.next_page) {
  VAR_8 = FUNC_2(VAR_5->link.next_page,
     VAR_5->link.next_offset, VAR_1);
  VAR_8->link.prev_page = VAR_3;
  VAR_8->link.prev_offset = VAR_4;
  FUNC_3(VAR_8, VAR_1);

  return;
 }

 FUNC_0(VAR_7 % VAR_0, &VAR_2->slbitmap[VAR_6]);
 FUNC_0(VAR_6, &VAR_2->flbitmap);
}
