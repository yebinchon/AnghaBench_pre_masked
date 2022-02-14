
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_sglist {int num_sg; int order; int * scatterlist; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pmcraid_sglist*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pmcraid_sglist *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_sg; VAR_1++)
  FUNC_0(FUNC_2(&(VAR_0->scatterlist[VAR_1])),
        VAR_0->order);

 FUNC_1(VAR_0);
}
