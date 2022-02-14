
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct pmcraid_sglist {int order; int num_sg; struct scatterlist* scatterlist; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 struct page* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pmcraid_sglist*) ;
 struct pmcraid_sglist* FUNC_4 (int,int) ;
 int FUNC_5 (struct scatterlist*,int) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct scatterlist*,struct page*,int,int ) ;

__attribute__((used)) static struct pmcraid_sglist *FUNC_8(int VAR_5)
{
 struct pmcraid_sglist *VAR_6;
 struct scatterlist *VAR_7;
 struct page *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = VAR_5 / (VAR_3 - 1);
 VAR_13 = (VAR_12 > 0) ? FUNC_2(VAR_12) : 0;
 VAR_14 = VAR_2 * (1 << VAR_13);


 if (VAR_5 % VAR_14)
  VAR_9 = (VAR_5 / VAR_14) + 1;
 else
  VAR_9 = VAR_5 / VAR_14;


 VAR_6 = FUNC_4(sizeof(struct pmcraid_sglist) +
    (sizeof(struct scatterlist) * (VAR_9 - 1)),
    VAR_1);

 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_7 = VAR_6->scatterlist;
 FUNC_5(VAR_7, VAR_9);
 VAR_6->order = VAR_13;
 VAR_6->num_sg = VAR_9;
 VAR_12 = VAR_5;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_8 = FUNC_1(VAR_1|VAR_0|VAR_4, VAR_13);
  if (!VAR_8) {
   for (VAR_11 = VAR_10 - 1; VAR_11 >= 0; VAR_11--)
    FUNC_0(FUNC_6(&VAR_7[VAR_11]), VAR_13);
   FUNC_3(VAR_6);
   return ((void*)0);
  }

  FUNC_7(&VAR_7[VAR_10], VAR_8,
   VAR_12 < VAR_14 ? VAR_12 : VAR_14, 0);
  VAR_12 -= VAR_14;
 }

 return VAR_6;
}
