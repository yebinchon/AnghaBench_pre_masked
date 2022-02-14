
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int offset; int length; } ;
struct scatter_walk {int offset; struct scatterlist* sg; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct scatter_walk *VAR_0, struct scatterlist *VAR_1)
{
 VAR_0->sg = VAR_1;

 FUNC_0(!VAR_1->length);

 VAR_0->offset = VAR_1->offset;
}
