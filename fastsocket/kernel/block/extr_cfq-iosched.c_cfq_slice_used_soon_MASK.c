
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int dispatched; int slice_end; } ;
struct cfq_data {int cfq_slice_idle; } ;


 scalar_t__ FUNC_0 (struct cfq_queue*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct cfq_data *VAR_1,
 struct cfq_queue *VAR_2)
{

 if (FUNC_0(VAR_2))
  return 1;
 if (FUNC_1(VAR_0 + VAR_1->cfq_slice_idle * VAR_2->dispatched,
  VAR_2->slice_end))
  return 1;

 return 0;
}
