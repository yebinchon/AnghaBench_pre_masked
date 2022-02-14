
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {scalar_t__ ioprio; } ;
struct cfq_data {int cfq_slice_async_rq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1(struct cfq_data *VAR_2, struct cfq_queue *VAR_3)
{
 const int VAR_4 = VAR_2->cfq_slice_async_rq;

 FUNC_0(VAR_3->ioprio >= VAR_1);

 return 2 * (VAR_4 + VAR_4 * (VAR_0 - 1 - VAR_3->ioprio));
}
