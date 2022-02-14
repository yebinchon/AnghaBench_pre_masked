
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (struct scatterlist*,int) ;
 int FUNC_2 (struct scatterlist*,struct page*,int ,int) ;
 struct page* FUNC_3 (void const*) ;

int FUNC_4(const void *VAR_2, int VAR_3, struct scatterlist *VAR_4,
   int VAR_5)
{
 int VAR_6 = 0;
 struct page *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_1(VAR_4, VAR_5);

 while (VAR_3 > 0 && VAR_6 < VAR_5) {
  VAR_7 = FUNC_3(VAR_2);
  VAR_8 = FUNC_0(VAR_2);
  if (VAR_4)
   FUNC_2(&VAR_4[VAR_6], VAR_7, 0, VAR_8);
  VAR_9 = VAR_1 - VAR_8;
  if (VAR_3 >= VAR_9) {
   if (VAR_4)
    VAR_4[VAR_6].length = VAR_9;
   VAR_2 += VAR_9;
   VAR_3 -= VAR_9;
  } else {
   if (VAR_4)
    VAR_4[VAR_6].length = VAR_3;
   VAR_2 += VAR_3;
   VAR_3 = 0;
  }
  VAR_6++;
 }
 if (VAR_3 > 0)
  return -VAR_0;
 return VAR_6;
}
