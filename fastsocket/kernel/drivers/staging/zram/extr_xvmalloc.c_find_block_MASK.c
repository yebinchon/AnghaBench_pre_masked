
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ulong ;
typedef size_t u32 ;
struct xv_pool {size_t flbitmap; size_t* slbitmap; TYPE_1__* freelist; } ;
struct page {int dummy; } ;
struct TYPE_2__ {size_t offset; struct page* page; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t,size_t*) ;

__attribute__((used)) static u32 FUNC_3(struct xv_pool *VAR_1, u32 VAR_2,
   struct page **VAR_3, u32 *VAR_4)
{
 ulong VAR_5, VAR_6;
 u32 VAR_7, VAR_8, VAR_9;


 if (!VAR_1->flbitmap)
  return 0;


 VAR_8 = FUNC_1(VAR_2);
 VAR_6 = VAR_1->slbitmap[VAR_8 / VAR_0];
 VAR_9 = VAR_8 % VAR_0;





 if (FUNC_2(VAR_9, &VAR_6)) {
  *VAR_3 = VAR_1->freelist[VAR_8].page;
  *VAR_4 = VAR_1->freelist[VAR_8].offset;
  return VAR_8;
 }







 VAR_9++;
 VAR_6 >>= VAR_9;


 if ((VAR_9 != VAR_0) && VAR_6) {
  VAR_8 += FUNC_0(VAR_6) + 1;
  *VAR_3 = VAR_1->freelist[VAR_8].page;
  *VAR_4 = VAR_1->freelist[VAR_8].offset;
  return VAR_8;
 }


 VAR_7 = VAR_8 / VAR_0;

 VAR_5 = (VAR_1->flbitmap) >> (VAR_7 + 1);
 if (!VAR_5)
  return 0;

 VAR_7 += FUNC_0(VAR_5) + 1;
 VAR_6 = VAR_1->slbitmap[VAR_7];
 VAR_8 = (VAR_7 * VAR_0) + FUNC_0(VAR_6);
 *VAR_3 = VAR_1->freelist[VAR_8].page;
 *VAR_4 = VAR_1->freelist[VAR_8].offset;

 return VAR_8;
}
