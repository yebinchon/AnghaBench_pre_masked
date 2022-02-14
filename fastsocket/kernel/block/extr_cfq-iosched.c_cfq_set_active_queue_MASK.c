
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int dummy; } ;
struct cfq_data {int dummy; } ;


 int FUNC_0 (struct cfq_data*,struct cfq_queue*) ;
 struct cfq_queue* FUNC_1 (struct cfq_data*) ;

__attribute__((used)) static struct cfq_queue *FUNC_2(struct cfq_data *VAR_0,
           struct cfq_queue *VAR_1)
{
 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, VAR_1);
 return VAR_1;
}
