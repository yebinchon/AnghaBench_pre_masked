
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; } ;
struct scatter_walk {int dummy; } ;


 int FUNC_0 (struct scatter_walk*,unsigned int) ;
 int FUNC_1 (void*,struct scatter_walk*,unsigned int,int) ;
 int FUNC_2 (struct scatter_walk*,int,int ) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatter_walk*,struct scatterlist*) ;

void FUNC_5(void *VAR_0, struct scatterlist *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct scatter_walk VAR_5;
 unsigned int VAR_6 = 0;

 if (!VAR_3)
  return;

 for (;;) {
  FUNC_4(&VAR_5, VAR_1);

  if (VAR_2 < VAR_6 + VAR_1->length)
   break;

  VAR_6 += VAR_1->length;
  VAR_1 = FUNC_3(VAR_1);
 }

 FUNC_0(&VAR_5, VAR_2 - VAR_6);
 FUNC_1(VAR_0, &VAR_5, VAR_3, VAR_4);
 FUNC_2(&VAR_5, VAR_4, 0);
}
