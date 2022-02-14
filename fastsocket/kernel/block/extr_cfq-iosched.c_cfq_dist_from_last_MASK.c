
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct cfq_data {scalar_t__ last_position; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (struct request*) ;

__attribute__((used)) static inline sector_t FUNC_1(struct cfq_data *VAR_0,
       struct request *VAR_1)
{
 if (FUNC_0(VAR_1) >= VAR_0->last_position)
  return FUNC_0(VAR_1) - VAR_0->last_position;
 else
  return VAR_0->last_position - FUNC_0(VAR_1);
}
