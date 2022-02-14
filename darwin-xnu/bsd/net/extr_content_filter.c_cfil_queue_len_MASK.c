
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct cfil_queue {scalar_t__ q_start; scalar_t__ q_end; } ;



__attribute__((used)) static inline uint64_t
FUNC_0(struct cfil_queue *VAR_0)
{
 return (VAR_0->q_end - VAR_0->q_start);
}
