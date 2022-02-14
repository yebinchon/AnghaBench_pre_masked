
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xv_pool {int lock; } ;
struct page {int dummy; } ;
struct block_header {scalar_t__ size; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 struct block_header* FUNC_1 (struct block_header*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct block_header*,int ) ;
 scalar_t__ FUNC_3 (struct xv_pool*,scalar_t__,struct page**,scalar_t__*) ;
 struct block_header* FUNC_4 (struct page*,scalar_t__,int ) ;
 int FUNC_5 (struct xv_pool*,int) ;
 int FUNC_6 (struct xv_pool*,struct page*,scalar_t__,struct block_header*) ;
 int FUNC_7 (struct block_header*,int ) ;
 int FUNC_8 (struct xv_pool*,struct page*,scalar_t__,struct block_header*,scalar_t__) ;
 int FUNC_9 (struct block_header*,scalar_t__) ;
 int FUNC_10 (struct block_header*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct xv_pool *VAR_9, u32 VAR_10, struct page **VAR_11,
  u32 *VAR_12, gfp_t VAR_13)
{
 int VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;
 struct block_header *VAR_19, *VAR_20;

 *VAR_11 = ((void*)0);
 *VAR_12 = 0;
 VAR_17 = VAR_10;

 if (FUNC_13(!VAR_10 || VAR_10 > VAR_7))
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_10, VAR_6);

 FUNC_11(&VAR_9->lock);

 VAR_15 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12);

 if (!*VAR_11) {
  FUNC_12(&VAR_9->lock);
  if (VAR_13 & VAR_2)
   return -VAR_1;
  VAR_14 = FUNC_5(VAR_9, VAR_13);
  if (FUNC_13(VAR_14))
   return VAR_14;

  FUNC_11(&VAR_9->lock);
  VAR_15 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12);
 }

 if (!*VAR_11) {
  FUNC_12(&VAR_9->lock);
  return -VAR_1;
 }

 VAR_19 = FUNC_4(*VAR_11, *VAR_12, VAR_3);

 FUNC_8(VAR_9, *VAR_11, *VAR_12, VAR_19, VAR_15);


 VAR_18 = *VAR_12 + VAR_10 + VAR_6;
 VAR_16 = VAR_19->size - VAR_10;
 VAR_20 = (struct block_header *)((char *)VAR_19 + VAR_10 + VAR_6);
 if (VAR_16) {
  VAR_20->size = VAR_16 - VAR_6;
  FUNC_10(VAR_20, VAR_0);
  FUNC_2(VAR_20, VAR_5);

  FUNC_9(VAR_20, *VAR_12);
  if (VAR_20->size >= VAR_8)
   FUNC_6(VAR_9, *VAR_11, VAR_18, VAR_20);

  if (VAR_18 + VAR_6 + VAR_20->size != VAR_4) {
   VAR_20 = FUNC_1(VAR_20);
   FUNC_9(VAR_20, VAR_18);
  }
 } else {

  if (VAR_18 != VAR_4)
   FUNC_2(VAR_20, VAR_5);
 }

 VAR_19->size = VAR_17;
 FUNC_2(VAR_19, VAR_0);

 FUNC_7(VAR_19, VAR_3);
 FUNC_12(&VAR_9->lock);

 *VAR_12 += VAR_6;

 return 0;
}
