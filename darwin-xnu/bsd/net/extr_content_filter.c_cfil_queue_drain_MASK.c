
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct cfil_queue {int q_mq; scalar_t__ q_end; scalar_t__ q_start; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline uint64_t
FUNC_1(struct cfil_queue *VAR_0)
{
 uint64_t VAR_1 = VAR_0->q_start - VAR_0->q_end;
 VAR_0->q_start = 0;
 VAR_0->q_end = 0;
 FUNC_0(&VAR_0->q_mq);

 return (VAR_1);
}
