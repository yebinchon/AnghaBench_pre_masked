
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_output_q {scalar_t__ use_cq; int * aobs; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct qdio_output_q *VAR_0)
{
 FUNC_0(VAR_0->aobs);
 VAR_0->aobs = ((void*)0);
 VAR_0->use_cq = 0;
}
