
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xv_pool {int lock; int total_pages; } ;
struct page {int dummy; } ;
struct block_header {int size; } ;
typedef scalar_t__ page_start ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct block_header* FUNC_1 (struct block_header*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct block_header*) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (struct page*,int ,int ) ;
 int FUNC_7 (struct xv_pool*,struct page*,int,struct block_header*) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (struct xv_pool*,struct page*,int,struct block_header*,int ) ;
 int FUNC_10 (struct block_header*,int) ;
 int FUNC_11 (struct block_header*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct block_header*,int ) ;

void FUNC_16(struct xv_pool *VAR_6, struct page *VAR_7, u32 VAR_8)
{
 void *VAR_9;
 struct block_header *VAR_10, *VAR_11;

 VAR_8 -= VAR_4;

 FUNC_12(&VAR_6->lock);

 VAR_9 = FUNC_6(VAR_7, 0, VAR_1);
 VAR_10 = (struct block_header *)((char *)VAR_9 + VAR_8);


 FUNC_2(FUNC_15(VAR_10, VAR_0));

 VAR_10->size = FUNC_0(VAR_10->size, VAR_4);

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_8 + VAR_10->size + VAR_4 == VAR_2)
  VAR_11 = ((void*)0);


 if (VAR_11 && FUNC_15(VAR_11, VAR_0)) {




  if (VAR_11->size >= VAR_5) {
   FUNC_9(VAR_6, VAR_7,
        VAR_8 + VAR_10->size + VAR_4, VAR_11,
        FUNC_5(VAR_11->size));
  }
  VAR_10->size += VAR_11->size + VAR_4;
 }


 if (FUNC_15(VAR_10, VAR_3)) {
  VAR_11 = (struct block_header *)((char *)(VAR_9) +
      FUNC_4(VAR_10));
  VAR_8 = VAR_8 - VAR_11->size - VAR_4;

  if (VAR_11->size >= VAR_5)
   FUNC_9(VAR_6, VAR_7, VAR_8, VAR_11,
        FUNC_5(VAR_11->size));

  VAR_11->size += VAR_10->size + VAR_4;
  VAR_10 = VAR_11;
 }


 if (VAR_10->size == VAR_2 - VAR_4) {
  FUNC_8(VAR_9, VAR_1);
  FUNC_13(&VAR_6->lock);

  FUNC_3(VAR_7);
  FUNC_14(&VAR_6->total_pages);
  return;
 }

 FUNC_11(VAR_10, VAR_0);
 if (VAR_10->size >= VAR_5)
  FUNC_7(VAR_6, VAR_7, VAR_8, VAR_10);

 if (VAR_8 + VAR_10->size + VAR_4 != VAR_2) {
  VAR_11 = FUNC_1(VAR_10);
  FUNC_11(VAR_11, VAR_3);
  FUNC_10(VAR_11, VAR_8);
 }

 FUNC_8(VAR_9, VAR_1);
 FUNC_13(&VAR_6->lock);
}
