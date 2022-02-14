
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int length; } ;
struct pmcraid_sglist {int order; struct scatterlist* scatterlist; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (void*,void*,int) ;
 void* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (char*) ;
 struct page* FUNC_5 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_6(
 struct pmcraid_sglist *VAR_3,
 unsigned long VAR_4,
 u32 VAR_5,
 int VAR_6
)
{
 struct scatterlist *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;


 VAR_9 = VAR_2 * (1 << VAR_3->order);

 VAR_7 = VAR_3->scatterlist;

 for (VAR_10 = 0; VAR_10 < (VAR_5 / VAR_9); VAR_10++, VAR_4 += VAR_9) {
  struct page *VAR_12 = FUNC_5(&VAR_7[VAR_10]);

  VAR_8 = FUNC_2(VAR_12);
  if (VAR_6 == VAR_0)
   VAR_11 = FUNC_0(VAR_8,
           (void *)VAR_4,
           VAR_9);
  else
   VAR_11 = FUNC_1((void *)VAR_4, VAR_8, VAR_9);

  FUNC_3(VAR_12);

  if (VAR_11) {
   FUNC_4("failed to copy user data into sg list\n");
   return -VAR_1;
  }

  VAR_7[VAR_10].length = VAR_9;
 }

 if (VAR_5 % VAR_9) {
  struct page *VAR_13 = FUNC_5(&VAR_7[VAR_10]);

  VAR_8 = FUNC_2(VAR_13);

  if (VAR_6 == VAR_0)
   VAR_11 = FUNC_0(VAR_8,
           (void *)VAR_4,
           VAR_5 % VAR_9);
  else
   VAR_11 = FUNC_1((void *)VAR_4,
         VAR_8,
         VAR_5 % VAR_9);

  FUNC_3(VAR_13);

  VAR_7[VAR_10].length = VAR_5 % VAR_9;
 }

 if (VAR_11) {
  FUNC_4("failed to copy user data into sg list\n");
  VAR_11 = -VAR_1;
 }

 return VAR_11;
}
