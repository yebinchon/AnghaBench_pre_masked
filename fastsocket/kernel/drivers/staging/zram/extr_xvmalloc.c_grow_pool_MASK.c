
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xv_pool {int lock; int total_pages; } ;
struct page {int dummy; } ;
struct block_header {scalar_t__ size; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct block_header*,int ) ;
 struct block_header* FUNC_2 (struct page*,int ,int ) ;
 int FUNC_3 (struct xv_pool*,struct page*,int ,struct block_header*) ;
 int FUNC_4 (struct block_header*,int ) ;
 int FUNC_5 (struct block_header*,int ) ;
 int FUNC_6 (struct block_header*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct xv_pool *VAR_6, gfp_t VAR_7)
{
 struct page *VAR_8;
 struct block_header *VAR_9;

 VAR_8 = FUNC_0(VAR_7);
 if (FUNC_10(!VAR_8))
  return -VAR_1;

 FUNC_9(&VAR_6->total_pages);

 FUNC_7(&VAR_6->lock);
 VAR_9 = FUNC_2(VAR_8, 0, VAR_2);

 VAR_9->size = VAR_3 - VAR_5;
 FUNC_6(VAR_9, VAR_0);
 FUNC_1(VAR_9, VAR_4);
 FUNC_5(VAR_9, 0);

 FUNC_3(VAR_6, VAR_8, 0, VAR_9);

 FUNC_4(VAR_9, VAR_2);
 FUNC_8(&VAR_6->lock);

 return 0;
}
