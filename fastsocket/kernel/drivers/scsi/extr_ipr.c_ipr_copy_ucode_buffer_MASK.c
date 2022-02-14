
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct scatterlist {int length; } ;
struct page {int dummy; } ;
struct ipr_sglist {int order; int buffer_len; struct scatterlist* scatterlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (void*,int *,int) ;
 struct page* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_4(struct ipr_sglist *VAR_2,
     u8 *VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 struct scatterlist *VAR_8;
 void *VAR_9;


 VAR_5 = VAR_0 * (1 << VAR_2->order);

 VAR_8 = VAR_2->scatterlist;

 for (VAR_6 = 0; VAR_6 < (VAR_4 / VAR_5); VAR_6++, VAR_3 += VAR_5) {
  struct page *VAR_10 = FUNC_3(&VAR_8[VAR_6]);

  VAR_9 = FUNC_0(VAR_10);
  FUNC_2(VAR_9, VAR_3, VAR_5);
  FUNC_1(VAR_10);

  VAR_8[VAR_6].length = VAR_5;

  if (VAR_7 != 0) {
   VAR_1;
   return VAR_7;
  }
 }

 if (VAR_4 % VAR_5) {
  struct page *VAR_11 = FUNC_3(&VAR_8[VAR_6]);

  VAR_9 = FUNC_0(VAR_11);
  FUNC_2(VAR_9, VAR_3, VAR_4 % VAR_5);
  FUNC_1(VAR_11);

  VAR_8[VAR_6].length = VAR_4 % VAR_5;
 }

 VAR_2->buffer_len = VAR_4;
 return VAR_7;
}
