
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_group {unsigned int* busy_queues_avg; } ;
struct cfq_data {int dummy; } ;


 unsigned int FUNC_0 (int,struct cfq_data*,struct cfq_group*) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned FUNC_3(struct cfq_data *VAR_1,
     struct cfq_group *VAR_2, bool VAR_3)
{
 unsigned VAR_4, VAR_5;
 unsigned VAR_6 = VAR_0 - 1;
 unsigned VAR_7 = VAR_0 / 2;
 unsigned VAR_8 = FUNC_0(VAR_3, VAR_1, VAR_2);

 VAR_4 = FUNC_2(VAR_2->busy_queues_avg[VAR_3], VAR_8);
 VAR_5 = FUNC_1(VAR_2->busy_queues_avg[VAR_3], VAR_8);
 VAR_2->busy_queues_avg[VAR_3] = (VAR_6 * VAR_5 + VAR_4 + VAR_7) /
  VAR_0;
 return VAR_2->busy_queues_avg[VAR_3];
}
