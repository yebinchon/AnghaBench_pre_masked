
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct scatterlist*,int) ;
 struct scatterlist* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct scatterlist*,int) ;
 int FUNC_5 (struct scatterlist*,struct page*,unsigned int,int ) ;

__attribute__((used)) static struct scatterlist *FUNC_6(struct scatterlist *VAR_4,
      unsigned int VAR_5,
      unsigned int VAR_6,
      int VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct scatterlist *VAR_10;
 struct page *VAR_11;
 unsigned int VAR_12 = ((VAR_7 == VAR_3) ? 0 : VAR_2);

 VAR_9 = FUNC_0(VAR_6, VAR_2) >> VAR_1;

 VAR_10 = FUNC_3(VAR_9, sizeof(struct scatterlist), VAR_0);
 if (!VAR_10)
  return ((void*)0);

 FUNC_4(VAR_10, VAR_9);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_11 = FUNC_1(VAR_0);
  if (!VAR_11)
   goto cleanup;
  FUNC_5(&VAR_10[VAR_8], VAR_11, VAR_12, 0);
 }

 return VAR_10;

cleanup:
 FUNC_2(VAR_10, VAR_9);
 return ((void*)0);
}
