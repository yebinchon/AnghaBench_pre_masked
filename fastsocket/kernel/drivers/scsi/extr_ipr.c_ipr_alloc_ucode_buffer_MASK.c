
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct ipr_sglist {int order; int num_sg; struct scatterlist* scatterlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 struct page* FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (struct ipr_sglist*) ;
 struct ipr_sglist* FUNC_4 (int,int ) ;
 int FUNC_5 (struct scatterlist*,int) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct scatterlist*,struct page*,int ,int ) ;

__attribute__((used)) static struct ipr_sglist *FUNC_8(int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 struct ipr_sglist *VAR_11;
 struct scatterlist *VAR_12;
 struct page *VAR_13;


 VAR_5 = VAR_4 / (VAR_1 - 1);


 VAR_6 = FUNC_2(VAR_5);


 VAR_7 = VAR_2 * (1 << VAR_6);


 if (VAR_4 % VAR_7)
  VAR_8 = (VAR_4 / VAR_7) + 1;
 else
  VAR_8 = VAR_4 / VAR_7;


 VAR_11 = FUNC_4(sizeof(struct ipr_sglist) +
    (sizeof(struct scatterlist) * (VAR_8 - 1)),
    VAR_0);

 if (VAR_11 == ((void*)0)) {
  VAR_3;
  return ((void*)0);
 }

 VAR_12 = VAR_11->scatterlist;
 FUNC_5(VAR_12, VAR_8);

 VAR_11->order = VAR_6;
 VAR_11->num_sg = VAR_8;


 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_13 = FUNC_1(VAR_0, VAR_6);
  if (!VAR_13) {
   VAR_3;


   for (VAR_10 = VAR_9 - 1; VAR_10 >= 0; VAR_10--)
    FUNC_0(FUNC_6(&VAR_12[VAR_10]), VAR_6);
   FUNC_3(VAR_11);
   return ((void*)0);
  }

  FUNC_7(&VAR_12[VAR_9], VAR_13, 0, 0);
 }

 return VAR_11;
}
