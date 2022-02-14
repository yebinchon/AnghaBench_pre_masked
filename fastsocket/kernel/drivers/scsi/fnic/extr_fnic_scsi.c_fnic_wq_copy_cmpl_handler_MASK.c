
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {unsigned int wq_copy_count; unsigned int raw_wq_count; unsigned int rq_count; int * cq; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *,int ,int) ;

int FUNC_1(struct fnic *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned int VAR_4, VAR_5;
 unsigned int VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_1->wq_copy_count; VAR_4++) {
  VAR_5 = VAR_4 + VAR_1->raw_wq_count + VAR_1->rq_count;
  VAR_6 = FUNC_0(&VAR_1->cq[VAR_5],
           VAR_0,
           VAR_2);
  VAR_3 += VAR_6;
 }
 return VAR_3;
}
