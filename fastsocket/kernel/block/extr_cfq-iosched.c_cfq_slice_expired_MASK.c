
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int dummy; } ;
struct cfq_data {struct cfq_queue* active_queue; } ;


 int FUNC_0 (struct cfq_data*,struct cfq_queue*,int) ;

__attribute__((used)) static inline void FUNC_1(struct cfq_data *VAR_0, bool VAR_1)
{
 struct cfq_queue *VAR_2 = VAR_0->active_queue;

 if (VAR_2)
  FUNC_0(VAR_0, VAR_2, VAR_1);
}
